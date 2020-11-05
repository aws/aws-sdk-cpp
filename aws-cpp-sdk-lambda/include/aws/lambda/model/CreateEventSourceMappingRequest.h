/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API CreateEventSourceMappingRequest : public LambdaRequest
  {
  public:
    CreateEventSourceMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSourceMapping"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> - The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> - The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - The ARN of the
     * cluster.</p> </li> </ul>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>If true, the event source mapping is active. Set to false to pause polling
     * and invocation.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If true, the event source mapping is active. Set to false to pause polling
     * and invocation.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If true, the event source mapping is active. Set to false to pause polling
     * and invocation.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If true, the event source mapping is active. Set to false to pause polling
     * and invocation.</p>
     */
    inline CreateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The maximum number of items to retrieve in a single batch.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - Default 100. Max 10,000.</p> </li> <li> <p> <b>Amazon
     * DynamoDB Streams</b> - Default 100. Max 1,000.</p> </li> <li> <p> <b>Amazon
     * Simple Queue Service</b> - Default 10. Max 10.</p> </li> <li> <p> <b>Amazon
     * Managed Streaming for Apache Kafka</b> - Default 100. Max 10,000.</p> </li>
     * </ul>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - Default 100. Max 10,000.</p> </li> <li> <p> <b>Amazon
     * DynamoDB Streams</b> - Default 100. Max 1,000.</p> </li> <li> <p> <b>Amazon
     * Simple Queue Service</b> - Default 10. Max 10.</p> </li> <li> <p> <b>Amazon
     * Managed Streaming for Apache Kafka</b> - Default 100. Max 10,000.</p> </li>
     * </ul>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - Default 100. Max 10,000.</p> </li> <li> <p> <b>Amazon
     * DynamoDB Streams</b> - Default 100. Max 1,000.</p> </li> <li> <p> <b>Amazon
     * Simple Queue Service</b> - Default 10. Max 10.</p> </li> <li> <p> <b>Amazon
     * Managed Streaming for Apache Kafka</b> - Default 100. Max 10,000.</p> </li>
     * </ul>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> - Default 100. Max 10,000.</p> </li> <li> <p> <b>Amazon
     * DynamoDB Streams</b> - Default 100. Max 1,000.</p> </li> <li> <p> <b>Amazon
     * Simple Queue Service</b> - Default 10. Max 10.</p> </li> <li> <p> <b>Amazon
     * Managed Streaming for Apache Kafka</b> - Default 100. Max 10,000.</p> </li>
     * </ul>
     */
    inline CreateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>(Streams) The maximum amount of time to gather records before invoking the
     * function, in seconds.</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }

    /**
     * <p>(Streams) The number of batches to process from each shard concurrently.</p>
     */
    inline CreateEventSourceMappingRequest& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}


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
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK Streams sources.
     * <code>AT_TIMESTAMP</code> is only supported for Amazon Kinesis streams.</p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline bool StartingPositionTimestampHasBeenSet() const { return m_startingPositionTimestampHasBeenSet; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = value; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = std::move(value); }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}


    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline CreateEventSourceMappingRequest& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Streams) An Amazon SQS queue or Amazon SNS topic destination for discarded
     * records.</p>
     */
    inline CreateEventSourceMappingRequest& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1).</p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1).</p>
     */
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }

    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1).</p>
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Streams) Discard records older than the specified age. The default value is
     * infinite (-1).</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline bool BisectBatchOnFunctionErrorHasBeenSet() const { return m_bisectBatchOnFunctionErrorHasBeenSet; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionErrorHasBeenSet = true; m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Streams) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline CreateEventSourceMappingRequest& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records will be
     * retried until the record expires.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records will be
     * retried until the record expires.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records will be
     * retried until the record expires.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>(Streams) Discard records after the specified number of retries. The default
     * value is infinite (-1). When set to infinite (-1), failed records will be
     * retried until the record expires.</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline CreateEventSourceMappingRequest& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline CreateEventSourceMappingRequest& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline CreateEventSourceMappingRequest& AddTopics(const Aws::String& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline CreateEventSourceMappingRequest& AddTopics(Aws::String&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }

    /**
     * <p> (MSK) The name of the Kafka topic. </p>
     */
    inline CreateEventSourceMappingRequest& AddTopics(const char* value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }


    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline CreateEventSourceMappingRequest& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline CreateEventSourceMappingRequest& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline CreateEventSourceMappingRequest& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline CreateEventSourceMappingRequest& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline CreateEventSourceMappingRequest& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


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
    inline bool SourceAccessConfigurationsHasBeenSet() const { return m_sourceAccessConfigurationsHasBeenSet; }

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
    inline void SetSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = value; }

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
    inline void SetSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = std::move(value); }

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
    inline CreateEventSourceMappingRequest& WithSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { SetSourceAccessConfigurations(value); return *this;}

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
    inline CreateEventSourceMappingRequest& WithSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { SetSourceAccessConfigurations(std::move(value)); return *this;}

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
    inline CreateEventSourceMappingRequest& AddSourceAccessConfigurations(const SourceAccessConfiguration& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(value); return *this; }

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
    inline CreateEventSourceMappingRequest& AddSourceAccessConfigurations(SourceAccessConfiguration&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet;

    int m_parallelizationFactor;
    bool m_parallelizationFactorHasBeenSet;

    EventSourcePosition m_startingPosition;
    bool m_startingPositionHasBeenSet;

    Aws::Utils::DateTime m_startingPositionTimestamp;
    bool m_startingPositionTimestampHasBeenSet;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet;

    int m_maximumRecordAgeInSeconds;
    bool m_maximumRecordAgeInSecondsHasBeenSet;

    bool m_bisectBatchOnFunctionError;
    bool m_bisectBatchOnFunctionErrorHasBeenSet;

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet;

    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet;

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;
    bool m_sourceAccessConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
