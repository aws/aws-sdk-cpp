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
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
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
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Set to false to disable the event source upon creation. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Set to false to disable the event source upon creation. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Set to false to disable the event source upon creation. </p>
     */
    inline CreateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default for Amazon Kinesis and Amazon
     * DynamoDB is 100 records. Both the default and maximum for Amazon SQS are 10
     * messages.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default for Amazon Kinesis and Amazon
     * DynamoDB is 100 records. Both the default and maximum for Amazon SQS are 10
     * messages.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default for Amazon Kinesis and Amazon
     * DynamoDB is 100 records. Both the default and maximum for Amazon SQS are 10
     * messages.</p>
     */
    inline CreateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The position in the DynamoDB or Kinesis stream where AWS Lambda should start
     * reading. For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">GetShardIterator</a>
     * in the <i>Amazon Kinesis API Reference Guide</i> or <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_streams_GetShardIterator.html">GetShardIterator</a>
     * in the <i>Amazon DynamoDB API Reference Guide</i>. The <code>AT_TIMESTAMP</code>
     * value is supported only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline const EventSourcePosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The position in the DynamoDB or Kinesis stream where AWS Lambda should start
     * reading. For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">GetShardIterator</a>
     * in the <i>Amazon Kinesis API Reference Guide</i> or <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_streams_GetShardIterator.html">GetShardIterator</a>
     * in the <i>Amazon DynamoDB API Reference Guide</i>. The <code>AT_TIMESTAMP</code>
     * value is supported only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The position in the DynamoDB or Kinesis stream where AWS Lambda should start
     * reading. For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">GetShardIterator</a>
     * in the <i>Amazon Kinesis API Reference Guide</i> or <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_streams_GetShardIterator.html">GetShardIterator</a>
     * in the <i>Amazon DynamoDB API Reference Guide</i>. The <code>AT_TIMESTAMP</code>
     * value is supported only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    /**
     * <p>The position in the DynamoDB or Kinesis stream where AWS Lambda should start
     * reading. For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">GetShardIterator</a>
     * in the <i>Amazon Kinesis API Reference Guide</i> or <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_streams_GetShardIterator.html">GetShardIterator</a>
     * in the <i>Amazon DynamoDB API Reference Guide</i>. The <code>AT_TIMESTAMP</code>
     * value is supported only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in the DynamoDB or Kinesis stream where AWS Lambda should start
     * reading. For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">GetShardIterator</a>
     * in the <i>Amazon Kinesis API Reference Guide</i> or <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_streams_GetShardIterator.html">GetShardIterator</a>
     * in the <i>Amazon DynamoDB API Reference Guide</i>. The <code>AT_TIMESTAMP</code>
     * value is supported only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the data record from which to start reading. Used with <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">shard
     * iterator type</a> AT_TIMESTAMP. If a record with this exact timestamp does not
     * exist, the iterator returned is for the next (later) record. If the timestamp is
     * older than the current trim horizon, the iterator returned is for the oldest
     * untrimmed data record (TRIM_HORIZON). Valid only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }

    /**
     * <p>The timestamp of the data record from which to start reading. Used with <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">shard
     * iterator type</a> AT_TIMESTAMP. If a record with this exact timestamp does not
     * exist, the iterator returned is for the next (later) record. If the timestamp is
     * older than the current trim horizon, the iterator returned is for the oldest
     * untrimmed data record (TRIM_HORIZON). Valid only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = value; }

    /**
     * <p>The timestamp of the data record from which to start reading. Used with <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">shard
     * iterator type</a> AT_TIMESTAMP. If a record with this exact timestamp does not
     * exist, the iterator returned is for the next (later) record. If the timestamp is
     * older than the current trim horizon, the iterator returned is for the oldest
     * untrimmed data record (TRIM_HORIZON). Valid only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the data record from which to start reading. Used with <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">shard
     * iterator type</a> AT_TIMESTAMP. If a record with this exact timestamp does not
     * exist, the iterator returned is for the next (later) record. If the timestamp is
     * older than the current trim horizon, the iterator returned is for the oldest
     * untrimmed data record (TRIM_HORIZON). Valid only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the data record from which to start reading. Used with <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">shard
     * iterator type</a> AT_TIMESTAMP. If a record with this exact timestamp does not
     * exist, the iterator returned is for the next (later) record. If the timestamp is
     * older than the current trim horizon, the iterator returned is for the oldest
     * untrimmed data record (TRIM_HORIZON). Valid only for <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/amazon-kinesis-streams.html">Kinesis
     * streams</a>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    EventSourcePosition m_startingPosition;
    bool m_startingPositionHasBeenSet;

    Aws::Utils::DateTime m_startingPositionTimestamp;
    bool m_startingPositionTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
