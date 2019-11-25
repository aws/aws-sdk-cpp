/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  /**
   * <p>A mapping between an AWS resource and an AWS Lambda function. See
   * <a>CreateEventSourceMapping</a> for details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API GetEventSourceMappingResult
  {
  public:
    GetEventSourceMappingResult();
    GetEventSourceMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEventSourceMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUID = value; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUID = std::move(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const char* value) { m_uUID.assign(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline GetEventSourceMappingResult& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline GetEventSourceMappingResult& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline GetEventSourceMappingResult& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSize = value; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline GetEventSourceMappingResult& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The maximum amount of time to gather records before invoking the function, in
     * seconds.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>The maximum amount of time to gather records before invoking the function, in
     * seconds.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>The maximum amount of time to gather records before invoking the function, in
     * seconds.</p>
     */
    inline GetEventSourceMappingResult& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactor = value; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline GetEventSourceMappingResult& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline GetEventSourceMappingResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline GetEventSourceMappingResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline GetEventSourceMappingResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline GetEventSourceMappingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline GetEventSourceMappingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResult = value; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline GetEventSourceMappingResult& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline GetEventSourceMappingResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline GetEventSourceMappingResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline GetEventSourceMappingResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = std::move(value); }

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline GetEventSourceMappingResult& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline GetEventSourceMappingResult& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline GetEventSourceMappingResult& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfig = value; }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfig = std::move(value); }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline GetEventSourceMappingResult& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline GetEventSourceMappingResult& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>(Streams) The maximum age of a record that Lambda sends to a function for
     * processing.</p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Streams) The maximum age of a record that Lambda sends to a function for
     * processing.</p>
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Streams) The maximum age of a record that Lambda sends to a function for
     * processing.</p>
     */
    inline GetEventSourceMappingResult& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline GetEventSourceMappingResult& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Streams) The maximum number of times to retry when the function returns an
     * error.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Streams) The maximum number of times to retry when the function returns an
     * error.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttempts = value; }

    /**
     * <p>(Streams) The maximum number of times to retry when the function returns an
     * error.</p>
     */
    inline GetEventSourceMappingResult& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}

  private:

    Aws::String m_uUID;

    int m_batchSize;

    int m_maximumBatchingWindowInSeconds;

    int m_parallelizationFactor;

    Aws::String m_eventSourceArn;

    Aws::String m_functionArn;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_lastProcessingResult;

    Aws::String m_state;

    Aws::String m_stateTransitionReason;

    DestinationConfig m_destinationConfig;

    int m_maximumRecordAgeInSeconds;

    bool m_bisectBatchOnFunctionError;

    int m_maximumRetryAttempts;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
