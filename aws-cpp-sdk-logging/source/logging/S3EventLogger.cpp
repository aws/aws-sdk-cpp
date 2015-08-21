
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

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/DateTime.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <aws/logging/S3EventLogger.h>

#include <chrono>
#include <iomanip>

namespace Aws
{
namespace Logging
{
    static const char* TAG = "S3EventLogger";

    static void PutObjectReceivedHandler(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest&, const Aws::S3::Model::PutObjectOutcome&,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
    {
       //do nothing
    }

    S3EventLogger::S3EventLogger(const std::shared_ptr<Aws::S3::S3Client>& s3Client,
                  const S3EventLoggerConfiguration& config):
                  m_s3client(s3Client),
                  m_config(config)
    {
        

    }

    static const char* S3_KEY_SEP = "/";
    void S3EventLogger::QueueEvent(Aws::UniquePtr<LogEvent >&& event)
    {
            std::lock_guard<std::mutex> locker(m_queueMutex);
            m_eventQueue.push(std::move(event));
    }

    Aws::String S3EventLogger::GetS3Key() const
    {
        Aws::StringStream key;
        key << m_config.keyPrefix << S3_KEY_SEP << GetKeySuffix();
        return key.str();
    }

    Aws::String S3EventLogger::GetKeySuffix() const
    {
        return Aws::Utils::DateTime::CalculateGmtTimestampAsString("%Y%m%dT%H%M%SZ");
    }

    FlushOutcome S3EventLogger::Flush()
    {

        auto putRequest = FlushEventsAndBuildPutRequest();

        auto putOutcome = m_s3client->PutObject(putRequest);
        Aws::StringStream resultMessage;
        if (putOutcome.IsSuccess())
        {

            resultMessage << "Wrote: " << putRequest.GetKey() << " with size " << putRequest.GetContentLength();
            AWS_LOGSTREAM_INFO(TAG, resultMessage.rdbuf());

            FlushResult result;
            result.key = putRequest.GetKey();
            result.message = resultMessage.str();
            return FlushOutcome(result);
        }
        else
        {
            resultMessage <<"Error writing S3 file: " << putOutcome.GetError().GetMessage();
            AWS_LOGSTREAM_ERROR(TAG, resultMessage.rdbuf());
            return FlushErrors::UNKNOWN;
        }
    }

    void S3EventLogger::FlushAsync()
    {
        auto putRequest = FlushEventsAndBuildPutRequest();
        m_s3client->PutObjectAsync(putRequest, PutObjectReceivedHandler);
    }

    Aws::S3::Model::PutObjectRequest  S3EventLogger::FlushEventsAndBuildPutRequest()
    {
        Aws::Vector<Aws::UniquePtr<LogEvent>> evts;
        {
            std::unique_lock<std::mutex> lock(m_queueMutex);
            while (!m_eventQueue.empty())
            {
                evts.push_back(std::move(m_eventQueue.front()));
                m_eventQueue.pop();
            }
        }
        std::shared_ptr<Aws::IOStream> blobStream = Aws::MakeShared<Aws::StringStream>(TAG);
        for (auto& evt : evts)
        {
            *blobStream << evt->timestamp << "\t" << evt->eventString << "\n";
        }

        auto s3Key = GetS3Key();
        auto contentLength = static_cast<long>(blobStream->tellp());
        Aws::S3::Model::PutObjectRequest putRequest;
        putRequest.SetBucket(m_config.bucket);
        putRequest.SetBody(blobStream);
        putRequest.SetKey(s3Key);
        putRequest.SetContentType("text/plain");
        putRequest.SetContentMD5(Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(*blobStream)));
        putRequest.SetContentLength(contentLength);
        return putRequest;
    }
} //Logging
} //Aws
