
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

#pragma once

#include <memory>
#include <condition_variable>
#include <queue>
#include <mutex>

#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/logging/EventLogger.h>
#include <aws/logging/Logging_EXPORTS.h>

namespace Aws
{
namespace S3
{
    class S3Client;
} //S3
namespace Logging
{

struct AWS_LOGGING_API S3EventLoggerConfiguration
{
  S3EventLoggerConfiguration(Aws::String bucket, Aws::String keyPrefix) : bucket(bucket), keyPrefix(keyPrefix){}
  Aws::String bucket;
  Aws::String keyPrefix;
};

//A thread-safe client that creates a new object on S3 for every Flush() or FlushAsync()
class AWS_LOGGING_API S3EventLogger : public EventLogger
{
  public:
    S3EventLogger(const std::shared_ptr<Aws::S3::S3Client>& s3Client, const S3EventLoggerConfiguration& config);

    virtual void QueueEvent(Aws::UniquePtr<LogEvent>&& event) override;
    
    FlushOutcome Flush() override;
    
    //FlushAsync() uses the underlying async methods of the SDK. For more control over
    //threading, pass in your own Executor in the ClientConfiguration when the S3Client is constructed
    void FlushAsync() override;

    virtual ~S3EventLogger() {};

  protected:
    virtual Aws::String GetKeySuffix() const;

  private:

    Aws::String GetS3Key() const;
    Aws::S3::Model::PutObjectRequest FlushEventsAndBuildPutRequest();

    std::shared_ptr<Aws::S3::S3Client> m_s3client;
    S3EventLoggerConfiguration m_config;

    /// queue to store the Metrics Events
    /// The queuing currently is not lockless but the lock should never be held for very long.  If this becomes
    /// and issue we can look for moving to a lockless queue such as:
    /// http://moodycamel.com/blog/2013/a-fast-lock-free-queue-for-c++
    Aws::Queue<Aws::UniquePtr<LogEvent>> m_eventQueue;

    /// a mutex to synchronize access to the queue
    std::mutex m_queueMutex;

    /// a condition to wake up the metrics thread when a new event is queued
    std::condition_variable m_queueCondition;
    
};
} //Logging
} //Aws
