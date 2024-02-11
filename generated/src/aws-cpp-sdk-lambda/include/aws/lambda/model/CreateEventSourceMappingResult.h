/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/FilterCriteria.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SelfManagedEventSource.h>
#include <aws/lambda/model/AmazonManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/SelfManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/ScalingConfig.h>
#include <aws/lambda/model/DocumentDBEventSourceConfig.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <aws/lambda/model/FunctionResponseType.h>
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
   * <p>A mapping between an Amazon Web Services resource and a Lambda function. For
   * details, see <a>CreateEventSourceMapping</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateEventSourceMappingResult
  {
  public:
    AWS_LAMBDA_API CreateEventSourceMappingResult();
    AWS_LAMBDA_API CreateEventSourceMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API CreateEventSourceMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateEventSourceMappingResult& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline const EventSourcePosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPosition = value; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPosition = std::move(value); }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline CreateEventSourceMappingResult& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline CreateEventSourceMappingResult& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestamp = value; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestamp = std::move(value); }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline CreateEventSourceMappingResult& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline CreateEventSourceMappingResult& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}


    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline void SetBatchSize(int value) { m_batchSize = value; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline CreateEventSourceMappingResult& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The maximum amount of time, in seconds, that Lambda spends gathering records
     * before invoking the function. You can configure
     * <code>MaximumBatchingWindowInSeconds</code> to any value from 0 seconds to 300
     * seconds in increments of seconds.</p> <p>For streams and Amazon SQS event
     * sources, the default batching window is 0 seconds. For Amazon MSK, Self-managed
     * Apache Kafka, Amazon MQ, and DocumentDB event sources, the default batching
     * window is 500 ms. Note that because you can only change
     * <code>MaximumBatchingWindowInSeconds</code> in increments of seconds, you cannot
     * revert back to the 500 ms default batching window after you have changed it. To
     * restore the default batching window, you must create a new event source
     * mapping.</p> <p>Related setting: For streams and Amazon SQS event sources, when
     * you set <code>BatchSize</code> to a value greater than 10, you must set
     * <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>The maximum amount of time, in seconds, that Lambda spends gathering records
     * before invoking the function. You can configure
     * <code>MaximumBatchingWindowInSeconds</code> to any value from 0 seconds to 300
     * seconds in increments of seconds.</p> <p>For streams and Amazon SQS event
     * sources, the default batching window is 0 seconds. For Amazon MSK, Self-managed
     * Apache Kafka, Amazon MQ, and DocumentDB event sources, the default batching
     * window is 500 ms. Note that because you can only change
     * <code>MaximumBatchingWindowInSeconds</code> in increments of seconds, you cannot
     * revert back to the 500 ms default batching window after you have changed it. To
     * restore the default batching window, you must create a new event source
     * mapping.</p> <p>Related setting: For streams and Amazon SQS event sources, when
     * you set <code>BatchSize</code> to a value greater than 10, you must set
     * <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>The maximum amount of time, in seconds, that Lambda spends gathering records
     * before invoking the function. You can configure
     * <code>MaximumBatchingWindowInSeconds</code> to any value from 0 seconds to 300
     * seconds in increments of seconds.</p> <p>For streams and Amazon SQS event
     * sources, the default batching window is 0 seconds. For Amazon MSK, Self-managed
     * Apache Kafka, Amazon MQ, and DocumentDB event sources, the default batching
     * window is 500 ms. Note that because you can only change
     * <code>MaximumBatchingWindowInSeconds</code> in increments of seconds, you cannot
     * revert back to the 500 ms default batching window after you have changed it. To
     * restore the default batching window, you must create a new event source
     * mapping.</p> <p>Related setting: For streams and Amazon SQS event sources, when
     * you set <code>BatchSize</code> to a value greater than 10, you must set
     * <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline CreateEventSourceMappingResult& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) The number of batches to process
     * concurrently from each shard. The default value is 1.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) The number of batches to process
     * concurrently from each shard. The default value is 1.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactor = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) The number of batches to process
     * concurrently from each shard. The default value is 1.</p>
     */
    inline CreateEventSourceMappingResult& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}


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
    inline CreateEventSourceMappingResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline CreateEventSourceMappingResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline CreateEventSourceMappingResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteria = value; }

    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteria = std::move(value); }

    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline CreateEventSourceMappingResult& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline CreateEventSourceMappingResult& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


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
    inline CreateEventSourceMappingResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline CreateEventSourceMappingResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline CreateEventSourceMappingResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline CreateEventSourceMappingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline CreateEventSourceMappingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResult = value; }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline CreateEventSourceMappingResult& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline CreateEventSourceMappingResult& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline CreateEventSourceMappingResult& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


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
    inline CreateEventSourceMappingResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline CreateEventSourceMappingResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline CreateEventSourceMappingResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = std::move(value); }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) An Amazon SQS queue or Amazon SNS topic
     * destination for discarded records.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) An Amazon SQS queue or Amazon SNS topic
     * destination for discarded records.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfig = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) An Amazon SQS queue or Amazon SNS topic
     * destination for discarded records.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfig = std::move(value); }

    /**
     * <p>(Kinesis and DynamoDB Streams only) An Amazon SQS queue or Amazon SNS topic
     * destination for discarded records.</p>
     */
    inline CreateEventSourceMappingResult& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Kinesis and DynamoDB Streams only) An Amazon SQS queue or Amazon SNS topic
     * destination for discarded records.</p>
     */
    inline CreateEventSourceMappingResult& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topics = value; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topics = std::move(value); }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingResult& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingResult& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingResult& AddTopics(const Aws::String& value) { m_topics.push_back(value); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingResult& AddTopics(Aws::String&& value) { m_topics.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingResult& AddTopics(const char* value) { m_topics.push_back(value); return *this; }


    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queues = value; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queues = std::move(value); }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline CreateEventSourceMappingResult& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline CreateEventSourceMappingResult& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline CreateEventSourceMappingResult& AddQueues(const Aws::String& value) { m_queues.push_back(value); return *this; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline CreateEventSourceMappingResult& AddQueues(Aws::String&& value) { m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline CreateEventSourceMappingResult& AddQueues(const char* value) { m_queues.push_back(value); return *this; }


    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const{ return m_sourceAccessConfigurations; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline void SetSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { m_sourceAccessConfigurations = value; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline void SetSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { m_sourceAccessConfigurations = std::move(value); }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline CreateEventSourceMappingResult& WithSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { SetSourceAccessConfigurations(value); return *this;}

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline CreateEventSourceMappingResult& WithSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { SetSourceAccessConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline CreateEventSourceMappingResult& AddSourceAccessConfigurations(const SourceAccessConfiguration& value) { m_sourceAccessConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline CreateEventSourceMappingResult& AddSourceAccessConfigurations(SourceAccessConfiguration&& value) { m_sourceAccessConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline const SelfManagedEventSource& GetSelfManagedEventSource() const{ return m_selfManagedEventSource; }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline void SetSelfManagedEventSource(const SelfManagedEventSource& value) { m_selfManagedEventSource = value; }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline void SetSelfManagedEventSource(SelfManagedEventSource&& value) { m_selfManagedEventSource = std::move(value); }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline CreateEventSourceMappingResult& WithSelfManagedEventSource(const SelfManagedEventSource& value) { SetSelfManagedEventSource(value); return *this;}

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline CreateEventSourceMappingResult& WithSelfManagedEventSource(SelfManagedEventSource&& value) { SetSelfManagedEventSource(std::move(value)); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records older than the specified
     * age. The default value is -1, which sets the maximum age to infinite. When the
     * value is set to infinite, Lambda never discards old records.</p>  <p>The
     * minimum valid value for maximum record age is 60s. Although values less than 60
     * and greater than -1 fall within the parameter's absolute range, they are not
     * allowed</p> 
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records older than the specified
     * age. The default value is -1, which sets the maximum age to infinite. When the
     * value is set to infinite, Lambda never discards old records.</p>  <p>The
     * minimum valid value for maximum record age is 60s. Although values less than 60
     * and greater than -1 fall within the parameter's absolute range, they are not
     * allowed</p> 
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records older than the specified
     * age. The default value is -1, which sets the maximum age to infinite. When the
     * value is set to infinite, Lambda never discards old records.</p>  <p>The
     * minimum valid value for maximum record age is 60s. Although values less than 60
     * and greater than -1 fall within the parameter's absolute range, they are not
     * allowed</p> 
     */
    inline CreateEventSourceMappingResult& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) If the function returns an error, split
     * the batch in two and retry. The default value is false.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) If the function returns an error, split
     * the batch in two and retry. The default value is false.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) If the function returns an error, split
     * the batch in two and retry. The default value is false.</p>
     */
    inline CreateEventSourceMappingResult& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records after the specified
     * number of retries. The default value is -1, which sets the maximum number of
     * retries to infinite. When MaximumRetryAttempts is infinite, Lambda retries
     * failed records until the record expires in the event source.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records after the specified
     * number of retries. The default value is -1, which sets the maximum number of
     * retries to infinite. When MaximumRetryAttempts is infinite, Lambda retries
     * failed records until the record expires in the event source.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttempts = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records after the specified
     * number of retries. The default value is -1, which sets the maximum number of
     * retries to infinite. When MaximumRetryAttempts is infinite, Lambda retries
     * failed records until the record expires in the event source.</p>
     */
    inline CreateEventSourceMappingResult& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


    /**
     * <p>(Kinesis and DynamoDB Streams only) The duration in seconds of a processing
     * window for DynamoDB and Kinesis Streams event sources. A value of 0 seconds
     * indicates no tumbling window.</p>
     */
    inline int GetTumblingWindowInSeconds() const{ return m_tumblingWindowInSeconds; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) The duration in seconds of a processing
     * window for DynamoDB and Kinesis Streams event sources. A value of 0 seconds
     * indicates no tumbling window.</p>
     */
    inline void SetTumblingWindowInSeconds(int value) { m_tumblingWindowInSeconds = value; }

    /**
     * <p>(Kinesis and DynamoDB Streams only) The duration in seconds of a processing
     * window for DynamoDB and Kinesis Streams event sources. A value of 0 seconds
     * indicates no tumbling window.</p>
     */
    inline CreateEventSourceMappingResult& WithTumblingWindowInSeconds(int value) { SetTumblingWindowInSeconds(value); return *this;}


    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline const Aws::Vector<FunctionResponseType>& GetFunctionResponseTypes() const{ return m_functionResponseTypes; }

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { m_functionResponseTypes = value; }

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { m_functionResponseTypes = std::move(value); }

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { SetFunctionResponseTypes(value); return *this;}

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& WithFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { SetFunctionResponseTypes(std::move(value)); return *this;}

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& AddFunctionResponseTypes(const FunctionResponseType& value) { m_functionResponseTypes.push_back(value); return *this; }

    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline CreateEventSourceMappingResult& AddFunctionResponseTypes(FunctionResponseType&& value) { m_functionResponseTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline const AmazonManagedKafkaEventSourceConfig& GetAmazonManagedKafkaEventSourceConfig() const{ return m_amazonManagedKafkaEventSourceConfig; }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline void SetAmazonManagedKafkaEventSourceConfig(const AmazonManagedKafkaEventSourceConfig& value) { m_amazonManagedKafkaEventSourceConfig = value; }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline void SetAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfig&& value) { m_amazonManagedKafkaEventSourceConfig = std::move(value); }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline CreateEventSourceMappingResult& WithAmazonManagedKafkaEventSourceConfig(const AmazonManagedKafkaEventSourceConfig& value) { SetAmazonManagedKafkaEventSourceConfig(value); return *this;}

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline CreateEventSourceMappingResult& WithAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfig&& value) { SetAmazonManagedKafkaEventSourceConfig(std::move(value)); return *this;}


    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline const SelfManagedKafkaEventSourceConfig& GetSelfManagedKafkaEventSourceConfig() const{ return m_selfManagedKafkaEventSourceConfig; }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline void SetSelfManagedKafkaEventSourceConfig(const SelfManagedKafkaEventSourceConfig& value) { m_selfManagedKafkaEventSourceConfig = value; }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline void SetSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfig&& value) { m_selfManagedKafkaEventSourceConfig = std::move(value); }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline CreateEventSourceMappingResult& WithSelfManagedKafkaEventSourceConfig(const SelfManagedKafkaEventSourceConfig& value) { SetSelfManagedKafkaEventSourceConfig(value); return *this;}

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline CreateEventSourceMappingResult& WithSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfig&& value) { SetSelfManagedKafkaEventSourceConfig(std::move(value)); return *this;}


    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline const ScalingConfig& GetScalingConfig() const{ return m_scalingConfig; }

    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline void SetScalingConfig(const ScalingConfig& value) { m_scalingConfig = value; }

    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline void SetScalingConfig(ScalingConfig&& value) { m_scalingConfig = std::move(value); }

    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline CreateEventSourceMappingResult& WithScalingConfig(const ScalingConfig& value) { SetScalingConfig(value); return *this;}

    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline CreateEventSourceMappingResult& WithScalingConfig(ScalingConfig&& value) { SetScalingConfig(std::move(value)); return *this;}


    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline const DocumentDBEventSourceConfig& GetDocumentDBEventSourceConfig() const{ return m_documentDBEventSourceConfig; }

    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline void SetDocumentDBEventSourceConfig(const DocumentDBEventSourceConfig& value) { m_documentDBEventSourceConfig = value; }

    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline void SetDocumentDBEventSourceConfig(DocumentDBEventSourceConfig&& value) { m_documentDBEventSourceConfig = std::move(value); }

    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline CreateEventSourceMappingResult& WithDocumentDBEventSourceConfig(const DocumentDBEventSourceConfig& value) { SetDocumentDBEventSourceConfig(value); return *this;}

    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline CreateEventSourceMappingResult& WithDocumentDBEventSourceConfig(DocumentDBEventSourceConfig&& value) { SetDocumentDBEventSourceConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEventSourceMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEventSourceMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEventSourceMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_uUID;

    EventSourcePosition m_startingPosition;

    Aws::Utils::DateTime m_startingPositionTimestamp;

    int m_batchSize;

    int m_maximumBatchingWindowInSeconds;

    int m_parallelizationFactor;

    Aws::String m_eventSourceArn;

    FilterCriteria m_filterCriteria;

    Aws::String m_functionArn;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_lastProcessingResult;

    Aws::String m_state;

    Aws::String m_stateTransitionReason;

    DestinationConfig m_destinationConfig;

    Aws::Vector<Aws::String> m_topics;

    Aws::Vector<Aws::String> m_queues;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;

    SelfManagedEventSource m_selfManagedEventSource;

    int m_maximumRecordAgeInSeconds;

    bool m_bisectBatchOnFunctionError;

    int m_maximumRetryAttempts;

    int m_tumblingWindowInSeconds;

    Aws::Vector<FunctionResponseType> m_functionResponseTypes;

    AmazonManagedKafkaEventSourceConfig m_amazonManagedKafkaEventSourceConfig;

    SelfManagedKafkaEventSourceConfig m_selfManagedKafkaEventSourceConfig;

    ScalingConfig m_scalingConfig;

    DocumentDBEventSourceConfig m_documentDBEventSourceConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
