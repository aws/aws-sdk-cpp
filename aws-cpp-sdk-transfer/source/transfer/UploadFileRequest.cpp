
/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transfer/UploadFileRequest.h>

#include <aws/transfer/resource/ScopedResourceSet.h>
#include <aws/transfer/TransferClient.h>
#include <aws/transfer/TransferContext.h>

#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>

#include <aws/core/utils/HashingUtils.h>

#include <algorithm>

using namespace Aws::S3::Model;
using namespace Aws::Utils;
using namespace Aws::S3;

namespace Aws
{
namespace Transfer
{

static const char* ALLOCATION_TAG = "TransferAPI";

static const uint32_t PART_RETRY_MAX = 2; // How many failures on a single part equates to a complete failure?

static const uint32_t CONSISTENCY_RETRY_MAX = 20; // If we're checking for consistency in S3 we may need to perform HeadObject, GetObject, and ListObjects checks several times to ensure the object has propagated

UploadFileRequest::UploadFileRequest(const Aws::String& fileName, 
                                     const Aws::String& bucketName, 
                                     const Aws::String& keyName, 
                                     const Aws::String& contentType, 
                                     Aws::Map<Aws::String, Aws::String>&& metadata,
                                     const std::shared_ptr<Aws::S3::S3Client>& s3Client, 
                                     bool createBucket,
                                     bool doConsistencyChecks) :
S3FileRequest(fileName, bucketName, keyName, s3Client),
m_bytesRemaining(0),
m_partCount(0),
m_partsReturned(0),
m_totalPartRetries(0),
m_createBucket(createBucket),
m_createBucketPending(false),
m_bucketCreated(false),
m_createMultipartUploadPending(false),
m_headBucketPending(false),
m_completeMultipartUploadPending(false),
m_bucketPropagated(false),
m_totalParts(0),
m_fileStream(fileName.c_str(), std::ios::binary | std::ios::ate),
m_contentType(contentType),
m_metadata(std::move(metadata)),
m_createMultipartRetries(0),
m_createBucketRetries(0),
m_completeRetries(0),
m_singleRetry(0),
m_doConsistencyChecks(doConsistencyChecks),
m_sentConsistencyChecks(false),
m_headObjectPassed(false),
m_getObjectPassed(false),
m_listObjectsPassed(false),
m_headObjectRetries(0),
m_getObjectRetries(0),
m_listObjectsRetries(0),
m_headBucketRetries(0)
{
    if (m_fileStream.good() && m_fileStream.is_open())
    {
        SetFileSize(static_cast<uint64_t>(m_fileStream.tellg()));
        m_bytesRemaining = GetFileSize();
        m_fileStream.seekg(0);
    }
    else
    {
        CompletionFailure("Failed to open file.");
        return;
    }
   
    if (GetFileSize())
    {
        m_totalParts = 1 + static_cast<uint32_t>((GetFileSize() - 1) / MB5_BUFFER_SIZE); // How many total buffer operations are we performing
    }
}

UploadFileRequest::UploadFileRequest(const Aws::String& fileName,
                                     const Aws::String& bucketName,
                                     const Aws::String& keyName,
                                     const Aws::String& contentType,
                                     const std::shared_ptr<Aws::S3::S3Client>& s3Client,
                                     bool createBucket,
                                     bool doConsistencyChecks) :
UploadFileRequest(fileName, bucketName, keyName, contentType, Aws::Map<Aws::String, Aws::String>{}, s3Client, createBucket, doConsistencyChecks)
{
}

UploadFileRequest::UploadFileRequest(const Aws::String& fileName,
                                     const Aws::String& bucketName,
                                     const Aws::String& keyName,
                                     const Aws::String& contentType,
                                     const Aws::Map<Aws::String, Aws::String>& metadata,
                                     const std::shared_ptr<Aws::S3::S3Client>& s3Client,
                                     bool createBucket,
                                     bool doConsistencyChecks) :
UploadFileRequest(fileName, bucketName, keyName, contentType, Aws::Map<Aws::String, Aws::String>(metadata), s3Client, createBucket, doConsistencyChecks)
{
}

UploadFileRequest::~UploadFileRequest()
{
    m_fileStream.close();
}

bool UploadFileRequest::CreateBucket()
{
    if (m_bucketCreated.load())
    {
        return true;
    }
    if (m_createBucketPending.load())
    {
        return false;
    }
    if (IsDone())
    {
        return false;
    }
    m_createBucketPending.store(true);
    CreateBucketRequest createBucketRequest;

    createBucketRequest.SetBucket(GetBucketName());
    createBucketRequest.SetACL(BucketCannedACL::private_);

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->CreateBucketAsync(createBucketRequest, &TransferClient::OnCreateBucket, context);
    return true;
}

bool UploadFileRequest::HandleCreateBucketOutcome(const Aws::S3::Model::CreateBucketRequest& request,
    const Aws::S3::Model::CreateBucketOutcome& createBucketOutcome)
{
     AWS_UNREFERENCED_PARAM(request);

    if (!createBucketOutcome.IsSuccess())
    {
        // Bucket is already there, didn't need to create it
        if (createBucketOutcome.GetError().GetErrorType() == S3Errors::BUCKET_ALREADY_EXISTS)
        {
            m_createBucket.store(false);
            m_createBucketPending.store(false);
            ContinueUpload();
            return true;
        }
        if(m_createBucketRetries < PART_RETRY_MAX)
        {
            ++m_createBucketRetries;
            CreateBucket();
            return false;
        }
        CompletionFailure(createBucketOutcome.GetError().GetMessage().c_str());
        return false;
    }
    m_bucketCreated.store(true);
    m_createBucketPending.store(false);
    ContinueUpload();
    return true;
}

bool UploadFileRequest::HasUploadId() const
{
    return (GetUploadId().length() != 0);
}

bool UploadFileRequest::CreateMultipartUpload()
{
    if (IsSinglePartUpload())
    {
        return false;
    }

    if (m_createBucket.load() && !m_bucketCreated.load())
    {
        return false;
    }

    if (HasUploadId())
    {
        return false;
    }

    if (m_createMultipartUploadPending.load())
    {
        return false;
    }
    m_createMultipartUploadPending.store(true);

    Aws::S3::Model::CreateMultipartUploadRequest createMultipartUploadRequest;
    createMultipartUploadRequest.SetBucket(GetBucketName());
    createMultipartUploadRequest.SetKey(GetKeyName());
    // not mandatory - defaults to binary in S3
    if (m_contentType.length())
    {
        createMultipartUploadRequest.SetContentType(m_contentType);
    }
    if (m_metadata.size() > 0)
    {
        createMultipartUploadRequest.SetMetadata(m_metadata);
    }

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->CreateMultipartUploadAsync(createMultipartUploadRequest,&TransferClient::OnCreateMultipartUpload, context);

    return true;
}

bool UploadFileRequest::HandleCreateMultipartUploadOutcome(const Aws::S3::Model::CreateMultipartUploadRequest& request, const Aws::S3::Model::CreateMultipartUploadOutcome& outcome)
{
    AWS_UNREFERENCED_PARAM(request);
    m_createMultipartUploadPending.store(false);
    m_uploadId = outcome.GetResult().GetUploadId();
    if (!outcome.IsSuccess())
    {
        if (m_createMultipartRetries < PART_RETRY_MAX)
        {
            ++m_createMultipartRetries;
            CreateMultipartUpload();
            return false;
        }
        CompletionFailure(outcome.GetError().GetMessage().c_str());
        return false;
    }
    ContinueUpload();
    return true;
}

// Are we ready to do either a PutObject (Single upload) or begin parts (multi part)
bool UploadFileRequest::IsReady() const
{
    if (m_createBucket.load() && !m_bucketCreated.load())
    {
        return false;
    }
    if (m_headBucketPending.load())
    {
        return false;
    }
    if (IsDone())
    {
        return false;
    }

    // Single parts don't need to worry about the stuff further down
    if (IsSinglePartUpload())
    {
        return true;
    }

    if (m_createMultipartUploadPending.load())
    {
        return false;
    }
    if (!HasUploadId())
    {
        // Need some data here
        return false;
    }

    return true;
}

bool UploadFileRequest::WaitForBucketToPropagate() 
{
    if (m_headBucketPending.load())
    {
        return false;
    }
    m_headBucketPending.store(true);

    HeadBucketRequest headBucketRequest;
    headBucketRequest.SetBucket(GetBucketName());

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->HeadBucketAsync(headBucketRequest, &TransferClient::OnHeadBucket, context);

    return true;
}

bool UploadFileRequest::HandleHeadBucketOutcome(const Aws::S3::Model::HeadBucketRequest& request, const Aws::S3::Model::HeadBucketOutcome& outcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (outcome.IsSuccess())
    {
        m_headBucketPending.store(false);
        m_bucketPropagated = true;

        ContinueUpload();

        return true;
    }

    m_headBucketPending.store(false);
    if (m_headBucketRetries < CONSISTENCY_RETRY_MAX)
    {
        ++m_headBucketRetries;
        WaitForBucketToPropagate();
        return false;
    }

    // Do we want to retry this?
    CompletionFailure(outcome.GetError().GetMessage().c_str());
    return false;
}

bool UploadFileRequest::DoneWithRequests() const
{
    return GetPartCount() >= GetTotalParts();
}

uint32_t UploadFileRequest::GetPartsRemaining() const
{
    if (DoneWithRequests() || IsDone() || IsSinglePartUpload())
    {
        return 0;
    }

    return (GetTotalParts() - GetPartCount());
}

size_t UploadFileRequest::GetCompletedPartCount() const
{
    return m_completedParts.size();
}

void UploadFileRequest::SetResourceSet(std::shared_ptr<UploadBufferScopedResourceSetType>& bufferSet)
{
    m_resources = bufferSet;
}

size_t UploadFileRequest::GetResourcesInUse() const
{
    if (!m_resources)
    {
        return 0;
    }

    return m_resources->GetResources().size();
}

void UploadFileRequest::CheckReacquireBuffers()
{
    std::lock_guard<std::mutex> resourceLock(m_resourceMutex);
    if (GetPartsRemaining())
    {
        // Assuming we have something left to do let's see if we can increase our pool

        size_t hadResources = GetResourcesInUse();

        // Can we just make this return how many you got back?
        m_resources->TryReacquire();
      
        if (hadResources != GetResourcesInUse())
        {
            std::for_each(m_resources->GetResources().begin() + hadResources, m_resources->GetResources().end(), [&](const std::shared_ptr<UploadBuffer>& buffer) {  if (!IsUsingBuffer(buffer)) { AddReadyBuffer(buffer); } });
            ProcessAvailableBuffers();
        }
    }
}

void UploadFileRequest::SetDone()
{
    if (IsDone())
    {
        return;
    }
    // If we've completed successfully (Rather than cancelled) we know it's ok to go ahead and release the buffers - none of them are outstanding
    if (CompletedSuccessfully())
    {
        ReleaseResources();
    }
    S3FileRequest::SetDone();
}

bool UploadFileRequest::DoCancelAction()
{
    AbortMultipartUploadRequest abortRequest;

    abortRequest.SetBucket(GetBucketName());
    abortRequest.SetKey(GetKeyName());

    GetS3Client()->AbortMultipartUploadAsync(abortRequest, &TransferClient::OnAbortMultipart);

    return true;
}

uint32_t UploadFileRequest::GetPartCount() const
{
    return m_partCount.load();
}

bool UploadFileRequest::IsSinglePartUpload() const
{
    return (GetTotalParts() == 1);
}

// Our basic lifecycle for an upload. 
// 1 - Create a bucket if necessary
// 2 - Wait for it to propagate if we created one
// 3 - If we're a multi part upload, Create our multi part request and get an upload id
// 4 - Begin processing buffers - single uploads just do a put object, multi part will process many parts until all are requested
bool UploadFileRequest::ContinueUpload()
{
    if (IsDone())
    {
        return false;
    }

    if (m_createBucket)
    {
        if (!m_bucketCreated.load())
        {
            CreateBucket();
            return true;
        }
        if (!m_bucketPropagated)
        {
            WaitForBucketToPropagate();
            return true;
        }
    }

    if (IsSinglePartUpload())
    {
        ProcessAvailableBuffers();
        return true;
    }

    if (!HasUploadId())
    {
        CreateMultipartUpload();
        return true;
    }
    ProcessAvailableBuffers();
    return true;
}

void UploadFileRequest::CreateStreamBuffer(std::shared_ptr<Aws::IOStream>& streamBuf) const
{
    for (unsigned i = 0; i < MB5_BUFFER_SIZE; i += 30)
    {
        *streamBuf << "S3Multi-Part upload Test Part ";
    }
    streamBuf->seekg(0);
}

uint64_t UploadFileRequest::ReadNextPart(const std::shared_ptr<UploadBuffer>& buffer, std::shared_ptr<Aws::IOStream>& streamBuf, uint32_t& partNum)
{
    // This whole call is a WIP.  Big comment below, but yeah, this has to become much simpler and more efficient.

    uint64_t bytesRead = 0;
    {
        std::lock_guard<std::mutex> someLock(m_fileRequestMutex);
        if (IsDone() || DoneWithRequests())
        {
            return 0;
        }
        ++m_partCount;

        partNum = GetPartCount();
        bytesRead = static_cast<int64_t>(m_fileStream.read((char*)(buffer->GetUnderlyingData()), std::min(m_bytesRemaining, static_cast<uint64_t>(buffer->GetLength()))).gcount()); // This probably isn't necessary.. look at simplifying this

        if (bytesRead > m_bytesRemaining)
        {
            // This should never happen..
            m_bytesRemaining = 0;
        }
        else
        {
            m_bytesRemaining -= bytesRead;
        }
    }

    // This is not ideal!  You're thinking "Wait, we got this buffer up there and now we're making a copy anyway.." You are right!
    // This needs to be done in a better way.  pubsetbuf it turns out does not work as I'd hoped.  The buffer is still essentially acting a shared
    // resource throttle, albeit double what is intended currently with the stream copy happening.  
    // S3Client could be made to accept a buffer.. I'm thinking we're not doing that either.
    // At this point this is considered a not horrible solution but one we'd like to try to revisit  
    streamBuf->write((char*)buffer->GetUnderlyingData(), bytesRead);

    streamBuf->seekg(0);

    return bytesRead;
}

// We have a buffer - let's fill it with data from our file and begin a multi part upload request
bool UploadFileRequest::ProcessBuffer(const std::shared_ptr<UploadBuffer>& buffer)
{
    if (DoneWithRequests())
    {
        return false;
    }

    std::shared_ptr<Aws::IOStream> streamBuf = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    uint32_t partNum = 0;
    uint64_t bytesRead = ReadNextPart(buffer, streamBuf, partNum);

    if (!bytesRead)
    {
        return false;
    }

    if (IsSinglePartUpload())
    {
        // Don't need more than one part, do everything now
        return DoSingleObjectUpload(streamBuf, bytesRead);
    }
    PartRequestRecord thisRequest(buffer);

    thisRequest.m_partRequest.SetBucket(GetBucketName());
    thisRequest.m_partRequest.SetKey(GetKeyName());
    thisRequest.m_partRequest.SetPartNumber(partNum);
    thisRequest.m_partRequest.SetUploadId(GetUploadId());
    thisRequest.m_partRequest.SetBody(streamBuf);
    thisRequest.m_partMd5 = HashingUtils::CalculateMD5(*streamBuf);
    thisRequest.m_partRequest.SetContentMD5(HashingUtils::Base64Encode(thisRequest.m_partMd5));
    thisRequest.m_partRequest.SetContentLength(static_cast<long>(bytesRead));

    thisRequest.m_partRequest.SetDataSentEventHandler(std::bind(&UploadFileRequest::OnDataSent, this, std::placeholders::_1, std::placeholders::_2));
    {
        std::lock_guard<std::mutex> thisLock(m_pendingMutex);

        m_pendingParts.emplace(partNum, thisRequest);
    }

    return RequestPart(partNum);
}

bool UploadFileRequest::RequestPart(uint32_t partId)
{

    std::lock_guard<std::mutex> thisLock(m_pendingMutex);

    auto partIter = m_pendingParts.find(partId);

    if (partIter == m_pendingParts.end())
    {
        return false;
    }

    PartRequestRecord& partRequest = partIter->second;

    partRequest.m_retries++;
    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->UploadPartAsync(partRequest.m_partRequest, &TransferClient::OnUploadPartRequest, context);

    return true;
}

bool UploadFileRequest::HandleUploadPartOutcome(const Aws::S3::Model::UploadPartRequest& request, const Aws::S3::Model::UploadPartOutcome& outcome)
{
    Aws::StringStream md5Hex;

    PartRequestRecord partRequest;
    {
        std::lock_guard<std::mutex> pendingLock(m_pendingMutex);
        auto partIter = m_pendingParts.find(request.GetPartNumber());

        if (partIter == m_pendingParts.end())
        {
            CompletionFailure("Bad part returned");
            return false;
        }

        // Grab this guy by value for safety.  Possibly look at changing these around to smart pointers.
        partRequest = partIter->second;
    }
    md5Hex << "\"" << HashingUtils::HexEncode(partRequest.m_partMd5) << "\"";
    Aws::StringStream outcomeETag;
    outcomeETag << outcome.GetResult().GetETag();

    if (outcome.IsSuccess() && (md5Hex.str() == outcomeETag.str()))
    {
        AddCompletedPart(partRequest, outcome.GetResult().GetETag());
        CheckReacquireBuffers();
        return true;
    }
    CheckReacquireBuffers();
    HandlePartFailure(outcome, partRequest);
    return false;
}

void UploadFileRequest::ReusePart(PartRequestRecord& partRequest)
{
    std::shared_ptr<UploadBuffer> reuseBuffer = partRequest.m_buffer;
    {
        std::lock_guard<std::mutex> pendingLock(m_pendingMutex);
        m_pendingParts.erase(partRequest.m_partRequest.GetPartNumber());
    }
    ProcessBuffer(reuseBuffer);
}

void UploadFileRequest::AddCompletedPart(PartRequestRecord& partRequest, const Aws::String& eTag)
{
    std::lock_guard<std::mutex> lockPart(m_completePartMutex);

    CompletedPart thisPart;
    thisPart.SetPartNumber(partRequest.m_partRequest.GetPartNumber());
    thisPart.SetETag(eTag);
    m_completedParts[partRequest.m_partRequest.GetPartNumber()] = thisPart;

    if (m_completedParts.size() == GetTotalParts() && !IsDone())
    {
        CompleteUpload();
    }
    PartReturned(partRequest);
}

void UploadFileRequest::ReleaseResources()
{
    std::lock_guard<std::mutex> lockGuard(m_resourceMutex);
    m_resources = nullptr;
}

void UploadFileRequest::CompleteUpload()
{
    CompleteMultipartUploadRequest completeRequest;
    completeRequest.SetBucket(GetBucketName());
    completeRequest.SetKey(GetKeyName());
    completeRequest.SetUploadId(GetUploadId());

    CompletedMultipartUpload completeUpload;
    std::for_each(m_completedParts.begin(), m_completedParts.end(), [&](std::pair<uint32_t, const CompletedPart&> thisPair) { completeUpload.AddParts(thisPair.second); });

    completeRequest.WithMultipartUpload(completeUpload);

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->CompleteMultipartUploadAsync(completeRequest, &TransferClient::OnCompleteMultipartUpload, context);
}

bool UploadFileRequest::HandleCompleteMultipartUploadOutcome(const Aws::S3::Model::CompleteMultipartUploadRequest& request, const Aws::S3::Model::CompleteMultipartUploadOutcome& outcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (outcome.IsSuccess())
    {
        CheckConsistencyCompletion();
        return true;
    }

    if (m_completeRetries < PART_RETRY_MAX)
    {
        ++m_completeRetries;

        std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

        GetS3Client()->CompleteMultipartUploadAsync(request, &TransferClient::OnCompleteMultipartUpload, context);
        return true;
    }
    // What went wrong?  Handle retry?
    CompletionFailure(outcome.GetError().GetMessage().c_str());
    return false;
}

void UploadFileRequest::HandlePartFailure(const Aws::S3::Model::UploadPartOutcome& thisOutcome, PartRequestRecord& partRequest)
{
    if (!IsDone())
    {
        if (!thisOutcome.IsSuccess() && partRequest.m_retries <= PART_RETRY_MAX)
        {
            SetLastFailure(thisOutcome.GetError().GetMessage().c_str());
            DoRetry(partRequest);
            return;
        }
        CompletionFailure(thisOutcome.GetError().GetMessage().c_str());
        Cancel();
    }
    PartReturned(partRequest);
}

void UploadFileRequest::DoRetry(PartRequestRecord& partRequest)
{
    ++m_totalPartRetries;
    partRequest.m_partRequest.GetBody()->seekg(0);
    RequestPart(partRequest.m_partRequest.GetPartNumber());
}

void UploadFileRequest::PartReturned(PartRequestRecord& partRequest)
{
    ++m_partsReturned;
    ReusePart(partRequest);

    // Whether we canceled midway or this was our final part it's ok to release the buffers now
    if (AllPartsReturned())
    {
        ReleaseResources();
    }
}

uint32_t UploadFileRequest::GetPartsReturned() const
{
    return m_partsReturned.load();
}

size_t UploadFileRequest::GetPendingParts() const
{
    return m_pendingParts.size();
}

uint32_t UploadFileRequest::GetTotalPartRetries() const
{
    return m_totalPartRetries.load();
}

bool UploadFileRequest::AllPartsReturned() const
{
    return (IsDone() && (GetPartsReturned() == m_partCount.load()));
}

void UploadFileRequest::SingleUploadComplete()
{
    // This is a single part upload - we just need to say that our one request has returned to allow cleanup to proceed
    m_partsReturned.store(1);
}

void UploadFileRequest::AddReadyBuffer(std::shared_ptr<UploadBuffer> buffer)
{
    std::lock_guard<std::mutex> thisLock(m_bufferMutex);
    m_buffersReady.push_back(buffer);
}

bool UploadFileRequest::GetReadyBuffer(std::shared_ptr<UploadBuffer>& buffer)
{
    std::lock_guard<std::mutex> thisLock(m_bufferMutex);
    if (!m_buffersReady.size())
    {
        return false;
    }
    buffer = m_buffersReady.front();
    m_buffersReady.pop_front();
    return true;
}

bool UploadFileRequest::ProcessAvailableBuffers()
{
    if (!IsReady())
    {
        return false;
    }

    std::shared_ptr<UploadBuffer> thisBuffer;

    while (!DoneWithRequests() && GetReadyBuffer(thisBuffer))
    {
        ProcessBuffer(thisBuffer);
    }
    return true;
}

bool UploadFileRequest::IsUsingBuffer(const std::shared_ptr<UploadBuffer>& buffer) const
{
    std::lock_guard<std::mutex> pendingLock(m_pendingMutex);
    auto result = std::find_if(m_pendingParts.cbegin(), m_pendingParts.cend(), [buffer](const std::pair<uint32_t, PartRequestRecord>& thisPair) { return thisPair.second.m_buffer == buffer; });
    return (result != m_pendingParts.end());
}

bool UploadFileRequest::DoSingleObjectUpload(std::shared_ptr<Aws::IOStream>& streamBuf, uint64_t bytesRead) 
{
    PutObjectRequest putObjectRequest;
    putObjectRequest.SetBucket(GetBucketName());

    putObjectRequest.SetBody(streamBuf);
    putObjectRequest.SetContentLength(static_cast<long>(bytesRead));
    putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
    if (m_contentType.length())
    {
        putObjectRequest.SetContentType(m_contentType);
    }
    if (m_metadata.size() > 0)
    {
        putObjectRequest.SetMetadata(m_metadata);
    }
    putObjectRequest.SetKey(GetKeyName());

    putObjectRequest.SetDataSentEventHandler(std::bind(&UploadFileRequest::OnDataSent, this, std::placeholders::_1, std::placeholders::_2));
    
    SendPutObjectRequest(putObjectRequest);

    return true;
}

void UploadFileRequest::SendPutObjectRequest(const Aws::S3::Model::PutObjectRequest& request) 
{
    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->PutObjectAsync(request, &TransferClient::OnPutObject, context);
}

void UploadFileRequest::OnDataSent(const Aws::Http::HttpRequest*, long long amountSent)
{
    RegisterProgress(amountSent);
}

bool UploadFileRequest::HandlePutObjectOutcome(const Aws::S3::Model::PutObjectRequest& request, const Aws::S3::Model::PutObjectOutcome& outcome)
{
    //verify md5 sums between what was sent and what s3 told us they received.
    Aws::StringStream ss;
    ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*request.GetBody())) << "\"";

    if (outcome.IsSuccess() && (ss.str() == outcome.GetResult().GetETag()))
    {
        SingleUploadComplete();
        CheckConsistencyCompletion();
        return true;
    }

    if (m_singleRetry < PART_RETRY_MAX)
    {
        ++m_singleRetry;
        SendPutObjectRequest(request);
        return true;
    }
    SingleUploadComplete();
    CompletionFailure(outcome.GetError().GetMessage().c_str());
    return false;
}

void UploadFileRequest::CheckGetObject()
{
    if (m_getObjectPassed.load())
    {
        return;
    }

    GetObjectRequest getObjectRequest;

    getObjectRequest.SetBucket(GetBucketName());
    getObjectRequest.SetKey(GetKeyName());

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->GetObjectAsync(getObjectRequest, &TransferClient::OnUploadGetObject, context);
}

bool UploadFileRequest::HandleGetObjectOutcome(const Aws::S3::Model::GetObjectRequest& request,
    const Aws::S3::Model::GetObjectOutcome& getObjectOutcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (getObjectOutcome.IsSuccess())
    {
        m_getObjectPassed.store(true);
        CheckConsistencyCompletion();
        return true;
    }

    if (m_getObjectRetries < CONSISTENCY_RETRY_MAX)
    {
        ++m_getObjectRetries;

        CheckGetObject();

        return false;
    }
    CompletionFailure("Get object consistency failed.");
    return false;
}

void UploadFileRequest::CheckHeadObject()
{
    if (m_headObjectPassed.load())
    {
        return;
    }

    HeadObjectRequest headObjectRequest;

    headObjectRequest.SetBucket(GetBucketName());
    headObjectRequest.SetKey(GetKeyName());

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->HeadObjectAsync(headObjectRequest, &TransferClient::OnHeadObject, context);
}

bool UploadFileRequest::HandleHeadObjectOutcome(const Aws::S3::Model::HeadObjectRequest& request,
    const Aws::S3::Model::HeadObjectOutcome& headObjectOutcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (headObjectOutcome.IsSuccess())
    {
        m_headObjectPassed.store(true);
        CheckConsistencyCompletion();
        return true;
    }

    if (m_headObjectRetries < CONSISTENCY_RETRY_MAX)
    {
        ++m_headObjectRetries;

        CheckHeadObject();

        return false;
    }
    CompletionFailure("Head object consistency failed.");
    return false;
}

void UploadFileRequest::CheckListObjects()
{
    if (m_listObjectsPassed.load())
    {
        return;
    }

    ListObjectsRequest listObjectsRequest;

    listObjectsRequest.SetBucket(GetBucketName());

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<UploadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->ListObjectsAsync(listObjectsRequest, &TransferClient::OnUploadListObjects, context);
}

bool UploadFileRequest::HandleListObjectsOutcome(const Aws::S3::Model::ListObjectsRequest& request,
    const Aws::S3::Model::ListObjectsOutcome& listObjectsOutcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (listObjectsOutcome.IsSuccess())
    {
        auto entryIter = std::find_if(listObjectsOutcome.GetResult().GetContents().cbegin(), listObjectsOutcome.GetResult().GetContents().cend(), [&](const Aws::S3::Model::Object& thisObject) { return (thisObject.GetKey() == GetKeyName() && static_cast<uint64_t>(thisObject.GetSize()) == GetFileSize()); });
        if (entryIter != listObjectsOutcome.GetResult().GetContents().cend())
        {
            // Also add version checking
            m_listObjectsPassed.store(true);
            CheckConsistencyCompletion();
            return true;
        }
    }

    if (m_listObjectsRetries < CONSISTENCY_RETRY_MAX)
    {
        ++m_listObjectsRetries;

        CheckListObjects();

        return false;
    }
    CompletionFailure("List objects consistency failed.");
    return false;
}

void UploadFileRequest::CheckConsistencyCompletion()
{
    if (!m_doConsistencyChecks)
    {
        // We don't care about these checks, carry through to success
        CompletionSuccess();
        return;
    }

    if (m_sentConsistencyChecks.load())
    {
        if (m_headObjectPassed && m_listObjectsPassed && m_getObjectPassed)
        {
            CompletionSuccess();
        }
        // Working on this
        return;
    }
    m_sentConsistencyChecks.store(true);

    CheckHeadObject();
    CheckGetObject();
    CheckListObjects();
}

} // namespace Transfer
} // namespace Aws
