/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
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
  class AWS_LAMBDA_API DeleteEventSourceMappingResult
  {
  public:
    DeleteEventSourceMappingResult();
    DeleteEventSourceMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteEventSourceMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteEventSourceMappingResult& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline DeleteEventSourceMappingResult& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline DeleteEventSourceMappingResult& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline const EventSourcePosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPosition = value; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPosition = std::move(value); }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline DeleteEventSourceMappingResult& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline DeleteEventSourceMappingResult& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestamp = value; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestamp = std::move(value); }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline DeleteEventSourceMappingResult& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline DeleteEventSourceMappingResult& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}


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
    inline DeleteEventSourceMappingResult& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds. The default value is zero.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds. The default value is zero.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds. The default value is zero.</p>
     */
    inline DeleteEventSourceMappingResult& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams) The number of batches to process from each shard concurrently. The
     * default value is 1.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently. The
     * default value is 1.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactor = value; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently. The
     * default value is 1.</p>
     */
    inline DeleteEventSourceMappingResult& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline DeleteEventSourceMappingResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline DeleteEventSourceMappingResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline DeleteEventSourceMappingResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline DeleteEventSourceMappingResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated, or its state
     * changed.</p>
     */
    inline DeleteEventSourceMappingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


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
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline DeleteEventSourceMappingResult& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline DeleteEventSourceMappingResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline DeleteEventSourceMappingResult& WithState(const char* value) { SetState(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the last change to the event source mapping was made by a
     * user, or by the Lambda service.</p>
     */
    inline DeleteEventSourceMappingResult& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


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
    inline DeleteEventSourceMappingResult& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline DeleteEventSourceMappingResult& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topics = value; }

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topics = std::move(value); }

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline DeleteEventSourceMappingResult& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline DeleteEventSourceMappingResult& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddTopics(const Aws::String& value) { m_topics.push_back(value); return *this; }

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddTopics(Aws::String&& value) { m_topics.push_back(std::move(value)); return *this; }

    /**
     * <p> (MSK) The name of the Kafka topic to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddTopics(const char* value) { m_topics.push_back(value); return *this; }


    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queues = value; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queues = std::move(value); }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline DeleteEventSourceMappingResult& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline DeleteEventSourceMappingResult& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddQueues(const Aws::String& value) { m_queues.push_back(value); return *this; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddQueues(Aws::String&& value) { m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline DeleteEventSourceMappingResult& AddQueues(const char* value) { m_queues.push_back(value); return *this; }


    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const{ return m_sourceAccessConfigurations; }

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { m_sourceAccessConfigurations = value; }

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline void SetSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { m_sourceAccessConfigurations = std::move(value); }

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline DeleteEventSourceMappingResult& WithSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { SetSourceAccessConfigurations(value); return *this;}

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline DeleteEventSourceMappingResult& WithSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { SetSourceAccessConfigurations(std::move(value)); return *this;}

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline DeleteEventSourceMappingResult& AddSourceAccessConfigurations(const SourceAccessConfiguration& value) { m_sourceAccessConfigurations.push_back(value); return *this; }

    /**
     * <p> (MQ) The Secrets Manager secret that stores your broker credentials. To
     * store your secret, use the following format: <code> { "username": "your
     * username", "password": "your password" }</code> </p> <p>To reference the secret,
     * use the following format: <code>[ { "Type": "BASIC_AUTH", "URI": "secretARN" }
     * ]</code> </p> <p>The value of <code>Type</code> is always
     * <code>BASIC_AUTH</code>. To encrypt the secret, you can use customer or service
     * managed keys. When using a customer managed KMS key, the Lambda execution role
     * requires <code>kms:Decrypt</code> permissions.</p>
     */
    inline DeleteEventSourceMappingResult& AddSourceAccessConfigurations(SourceAccessConfiguration&& value) { m_sourceAccessConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1). When set to infinite (-1), failed records are retried until the
     * record expires.</p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1). When set to infinite (-1), failed records are retried until the
     * record expires.</p>
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1). When set to infinite (-1), failed records are retried until the
     * record expires.</p>
     */
    inline DeleteEventSourceMappingResult& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Streams) If the function returns an error, split the batch in two and retry.
     * The default value is false.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and retry.
     * The default value is false.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and retry.
     * The default value is false.</p>
     */
    inline DeleteEventSourceMappingResult& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records are retried
     * until the record expires.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records are retried
     * until the record expires.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttempts = value; }

    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records are retried
     * until the record expires.</p>
     */
    inline DeleteEventSourceMappingResult& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}

  private:

    Aws::String m_uUID;

    EventSourcePosition m_startingPosition;

    Aws::Utils::DateTime m_startingPositionTimestamp;

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

    Aws::Vector<Aws::String> m_topics;

    Aws::Vector<Aws::String> m_queues;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;

    int m_maximumRecordAgeInSeconds;

    bool m_bisectBatchOnFunctionError;

    int m_maximumRetryAttempts;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
