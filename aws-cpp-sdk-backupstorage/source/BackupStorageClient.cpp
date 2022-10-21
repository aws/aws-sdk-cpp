/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/backupstorage/BackupStorageClient.h>
#include <aws/backupstorage/BackupStorageEndpoint.h>
#include <aws/backupstorage/BackupStorageErrorMarshaller.h>
#include <aws/backupstorage/model/DeleteObjectRequest.h>
#include <aws/backupstorage/model/GetChunkRequest.h>
#include <aws/backupstorage/model/GetObjectMetadataRequest.h>
#include <aws/backupstorage/model/ListChunksRequest.h>
#include <aws/backupstorage/model/ListObjectsRequest.h>
#include <aws/backupstorage/model/NotifyObjectCompleteRequest.h>
#include <aws/backupstorage/model/PutChunkRequest.h>
#include <aws/backupstorage/model/PutObjectRequest.h>
#include <aws/backupstorage/model/StartObjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BackupStorage;
using namespace Aws::BackupStorage::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* BackupStorageClient::SERVICE_NAME = "backup-storage";
const char* BackupStorageClient::ALLOCATION_TAG = "BackupStorageClient";

BackupStorageClient::BackupStorageClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupStorageClient::~BackupStorageClient()
{
}

void BackupStorageClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("BackupStorage");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BackupStorageEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BackupStorageClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

DeleteObjectOutcome BackupStorageClient::DeleteObject(const DeleteObjectRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: BackupJobId, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: ObjectName, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  uri.AddPathSegments("/object/");
  uri.AddPathSegment(request.GetObjectName());
  return DeleteObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectOutcomeCallable BackupStorageClient::DeleteObjectCallable(const DeleteObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObject(request), context);
    } );
}

GetChunkOutcome BackupStorageClient::GetChunk(const GetChunkRequest& request) const
{
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChunk", "Required field: StorageJobId, is not set");
    return GetChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ChunkTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChunk", "Required field: ChunkToken, is not set");
    return GetChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChunkToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  uri.AddPathSegment(request.GetStorageJobId());
  uri.AddPathSegments("/chunk/");
  uri.AddPathSegment(request.GetChunkToken());
  return GetChunkOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetChunkOutcomeCallable BackupStorageClient::GetChunkCallable(const GetChunkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChunkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChunk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::GetChunkAsync(const GetChunkRequest& request, const GetChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChunk(request), context);
    } );
}

GetObjectMetadataOutcome BackupStorageClient::GetObjectMetadata(const GetObjectMetadataRequest& request) const
{
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectMetadata", "Required field: StorageJobId, is not set");
    return GetObjectMetadataOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ObjectTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectMetadata", "Required field: ObjectToken, is not set");
    return GetObjectMetadataOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  uri.AddPathSegment(request.GetStorageJobId());
  uri.AddPathSegments("/object/");
  uri.AddPathSegment(request.GetObjectToken());
  uri.AddPathSegments("/metadata");
  return GetObjectMetadataOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectMetadataOutcomeCallable BackupStorageClient::GetObjectMetadataCallable(const GetObjectMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::GetObjectMetadataAsync(const GetObjectMetadataRequest& request, const GetObjectMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetObjectMetadata(request), context);
    } );
}

ListChunksOutcome BackupStorageClient::ListChunks(const ListChunksRequest& request) const
{
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChunks", "Required field: StorageJobId, is not set");
    return ListChunksOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ObjectTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChunks", "Required field: ObjectToken, is not set");
    return ListChunksOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  uri.AddPathSegment(request.GetStorageJobId());
  uri.AddPathSegments("/chunks/");
  uri.AddPathSegment(request.GetObjectToken());
  uri.AddPathSegments("/list");
  return ListChunksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChunksOutcomeCallable BackupStorageClient::ListChunksCallable(const ListChunksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChunksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChunks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::ListChunksAsync(const ListChunksRequest& request, const ListChunksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChunks(request), context);
    } );
}

ListObjectsOutcome BackupStorageClient::ListObjects(const ListObjectsRequest& request) const
{
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: StorageJobId, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  uri.AddPathSegment(request.GetStorageJobId());
  uri.AddPathSegments("/objects/list");
  return ListObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListObjectsOutcomeCallable BackupStorageClient::ListObjectsCallable(const ListObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::ListObjectsAsync(const ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObjects(request), context);
    } );
}

NotifyObjectCompleteOutcome BackupStorageClient::NotifyObjectComplete(const NotifyObjectCompleteRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: BackupJobId, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: UploadId, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  if (!request.ObjectChecksumHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: ObjectChecksum, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectChecksum]", false));
  }
  if (!request.ObjectChecksumAlgorithmHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: ObjectChecksumAlgorithm, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectChecksumAlgorithm]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  uri.AddPathSegments("/object/");
  uri.AddPathSegment(request.GetUploadId());
  uri.AddPathSegments("/complete");
  return NotifyObjectCompleteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

NotifyObjectCompleteOutcomeCallable BackupStorageClient::NotifyObjectCompleteCallable(const NotifyObjectCompleteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyObjectCompleteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyObjectComplete(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::NotifyObjectCompleteAsync(const NotifyObjectCompleteRequest& request, const NotifyObjectCompleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, NotifyObjectComplete(request), context);
    } );
}

PutChunkOutcome BackupStorageClient::PutChunk(const PutChunkRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: BackupJobId, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: UploadId, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  if (!request.ChunkIndexHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: ChunkIndex, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChunkIndex]", false));
  }
  if (!request.LengthHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: Length, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Length]", false));
  }
  if (!request.ChecksumHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: Checksum, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Checksum]", false));
  }
  if (!request.ChecksumAlgorithmHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: ChecksumAlgorithm, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChecksumAlgorithm]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  uri.AddPathSegments("/chunk/");
  uri.AddPathSegment(request.GetUploadId());
  uri.AddPathSegment(request.GetChunkIndex());
  return PutChunkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutChunkOutcomeCallable BackupStorageClient::PutChunkCallable(const PutChunkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutChunkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutChunk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::PutChunkAsync(const PutChunkRequest& request, const PutChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutChunk(request), context);
    } );
}

PutObjectOutcome BackupStorageClient::PutObject(const PutObjectRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: BackupJobId, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: ObjectName, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  uri.AddPathSegments("/object/");
  uri.AddPathSegment(request.GetObjectName());
  uri.AddPathSegments("/put-object");
  return PutObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutObjectOutcomeCallable BackupStorageClient::PutObjectCallable(const PutObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutObject(request), context);
    } );
}

StartObjectOutcome BackupStorageClient::StartObject(const StartObjectRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartObject", "Required field: BackupJobId, is not set");
    return StartObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartObject", "Required field: ObjectName, is not set");
    return StartObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  uri.AddPathSegments("/object/");
  uri.AddPathSegment(request.GetObjectName());
  return StartObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartObjectOutcomeCallable BackupStorageClient::StartObjectCallable(const StartObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupStorageClient::StartObjectAsync(const StartObjectRequest& request, const StartObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartObject(request), context);
    } );
}

