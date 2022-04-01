﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FilterCriteria.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SelfManagedEventSource.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <aws/lambda/model/FunctionResponseType.h>
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
     * <p>When true, the event source mapping is active. When false, Lambda pauses
     * polling and invocation.</p> <p>Default: True</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>When true, the event source mapping is active. When false, Lambda pauses
     * polling and invocation.</p> <p>Default: True</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>When true, the event source mapping is active. When false, Lambda pauses
     * polling and invocation.</p> <p>Default: True</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>When true, the event source mapping is active. When false, Lambda pauses
     * polling and invocation.</p> <p>Default: True</p>
     */
    inline CreateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <ul> <li> <p> <b>Amazon Kinesis</b> - Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon DynamoDB Streams</b> - Default
     * 100. Max 1,000.</p> </li> <li> <p> <b>Amazon Simple Queue Service</b> - Default
     * 10. For standard queues the max is 10,000. For FIFO queues the max is 10.</p>
     * </li> <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Self-Managed Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Amazon MQ (ActiveMQ and RabbitMQ)</b> -
     * Default 100. Max 10,000.</p> </li> </ul>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <ul> <li> <p> <b>Amazon Kinesis</b> - Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon DynamoDB Streams</b> - Default
     * 100. Max 1,000.</p> </li> <li> <p> <b>Amazon Simple Queue Service</b> - Default
     * 10. For standard queues the max is 10,000. For FIFO queues the max is 10.</p>
     * </li> <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Self-Managed Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Amazon MQ (ActiveMQ and RabbitMQ)</b> -
     * Default 100. Max 10,000.</p> </li> </ul>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <ul> <li> <p> <b>Amazon Kinesis</b> - Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon DynamoDB Streams</b> - Default
     * 100. Max 1,000.</p> </li> <li> <p> <b>Amazon Simple Queue Service</b> - Default
     * 10. For standard queues the max is 10,000. For FIFO queues the max is 10.</p>
     * </li> <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Self-Managed Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Amazon MQ (ActiveMQ and RabbitMQ)</b> -
     * Default 100. Max 10,000.</p> </li> </ul>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <ul> <li> <p> <b>Amazon Kinesis</b> - Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon DynamoDB Streams</b> - Default
     * 100. Max 1,000.</p> </li> <li> <p> <b>Amazon Simple Queue Service</b> - Default
     * 10. For standard queues the max is 10,000. For FIFO queues the max is 10.</p>
     * </li> <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Self-Managed Apache Kafka</b> - Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Amazon MQ (ActiveMQ and RabbitMQ)</b> -
     * Default 100. Max 10,000.</p> </li> </ul>
     */
    inline CreateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline CreateEventSourceMappingRequest& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline CreateEventSourceMappingRequest& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams only) The number of batches to process from each shard
     * concurrently.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Streams only) The number of batches to process from each shard
     * concurrently.</p>
     */
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }

    /**
     * <p>(Streams only) The number of batches to process from each shard
     * concurrently.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }

    /**
     * <p>(Streams only) The number of batches to process from each shard
     * concurrently.</p>
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
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline CreateEventSourceMappingRequest& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline CreateEventSourceMappingRequest& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is infinite (-1).</p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is infinite (-1).</p>
     */
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is infinite (-1).</p>
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is infinite (-1).</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline bool BisectBatchOnFunctionErrorHasBeenSet() const { return m_bisectBatchOnFunctionErrorHasBeenSet; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionErrorHasBeenSet = true; m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry.</p>
     */
    inline CreateEventSourceMappingRequest& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is infinite (-1). When set to infinite (-1), failed records will
     * be retried until the record expires.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is infinite (-1). When set to infinite (-1), failed records will
     * be retried until the record expires.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is infinite (-1). When set to infinite (-1), failed records will
     * be retried until the record expires.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is infinite (-1). When set to infinite (-1), failed records will
     * be retried until the record expires.</p>
     */
    inline CreateEventSourceMappingRequest& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * between 1 second up to 900 seconds.</p>
     */
    inline int GetTumblingWindowInSeconds() const{ return m_tumblingWindowInSeconds; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * between 1 second up to 900 seconds.</p>
     */
    inline bool TumblingWindowInSecondsHasBeenSet() const { return m_tumblingWindowInSecondsHasBeenSet; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * between 1 second up to 900 seconds.</p>
     */
    inline void SetTumblingWindowInSeconds(int value) { m_tumblingWindowInSecondsHasBeenSet = true; m_tumblingWindowInSeconds = value; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * between 1 second up to 900 seconds.</p>
     */
    inline CreateEventSourceMappingRequest& WithTumblingWindowInSeconds(int value) { SetTumblingWindowInSeconds(value); return *this;}


    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingRequest& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingRequest& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingRequest& AddTopics(const Aws::String& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline CreateEventSourceMappingRequest& AddTopics(Aws::String&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
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
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const{ return m_sourceAccessConfigurations; }

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline bool SourceAccessConfigurationsHasBeenSet() const { return m_sourceAccessConfigurationsHasBeenSet; }

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline void SetSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = value; }

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline void SetSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = std::move(value); }

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline CreateEventSourceMappingRequest& WithSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { SetSourceAccessConfigurations(value); return *this;}

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline CreateEventSourceMappingRequest& WithSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { SetSourceAccessConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline CreateEventSourceMappingRequest& AddSourceAccessConfigurations(const SourceAccessConfiguration& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline CreateEventSourceMappingRequest& AddSourceAccessConfigurations(SourceAccessConfiguration&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline const SelfManagedEventSource& GetSelfManagedEventSource() const{ return m_selfManagedEventSource; }

    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline bool SelfManagedEventSourceHasBeenSet() const { return m_selfManagedEventSourceHasBeenSet; }

    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline void SetSelfManagedEventSource(const SelfManagedEventSource& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = value; }

    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline void SetSelfManagedEventSource(SelfManagedEventSource&& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = std::move(value); }

    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline CreateEventSourceMappingRequest& WithSelfManagedEventSource(const SelfManagedEventSource& value) { SetSelfManagedEventSource(value); return *this;}

    /**
     * <p>The Self-Managed Apache Kafka cluster to send records.</p>
     */
    inline CreateEventSourceMappingRequest& WithSelfManagedEventSource(SelfManagedEventSource&& value) { SetSelfManagedEventSource(std::move(value)); return *this;}


    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline const Aws::Vector<FunctionResponseType>& GetFunctionResponseTypes() const{ return m_functionResponseTypes; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline bool FunctionResponseTypesHasBeenSet() const { return m_functionResponseTypesHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes = value; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes = std::move(value); }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { SetFunctionResponseTypes(value); return *this;}

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { SetFunctionResponseTypes(std::move(value)); return *this;}

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline CreateEventSourceMappingRequest& AddFunctionResponseTypes(const FunctionResponseType& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(value); return *this; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline CreateEventSourceMappingRequest& AddFunctionResponseTypes(FunctionResponseType&& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet;

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

    int m_tumblingWindowInSeconds;
    bool m_tumblingWindowInSecondsHasBeenSet;

    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet;

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;
    bool m_sourceAccessConfigurationsHasBeenSet;

    SelfManagedEventSource m_selfManagedEventSource;
    bool m_selfManagedEventSourceHasBeenSet;

    Aws::Vector<FunctionResponseType> m_functionResponseTypes;
    bool m_functionResponseTypesHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
