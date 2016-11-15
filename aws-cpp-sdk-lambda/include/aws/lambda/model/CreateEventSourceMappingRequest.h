/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_LAMBDA_API CreateEventSourceMappingRequest : public LambdaRequest
  {
  public:
    CreateEventSourceMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis or the Amazon DynamoDB
     * stream that is the event source. Any record added to this stream could cause AWS
     * Lambda to invoke your Lambda function, it depends on the <code>BatchSize</code>.
     * AWS Lambda POSTs the Amazon Kinesis event, containing records, to your Lambda
     * function as JSON.</p>
     */
    inline CreateEventSourceMappingRequest& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function to invoke when AWS Lambda detects an event on the
     * stream.</p> <p> You can specify the function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). </p> <p>
     * If you are using versioning, you can also provide a qualified function ARN (ARN
     * that is qualified with function version or alias name as suffix). For more
     * information about versioning, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
     * Lambda Function Versioning and Aliases</a> </p> <p>AWS Lambda also allows you to
     * specify only the function name with the account ID qualifier (for example,
     * <code>account-id:Thumbnail</code>). </p> <p>Note that the length constraint
     * applies only to the ARN. If you specify only the function name, it is limited to
     * 64 character in length.</p>
     */
    inline CreateEventSourceMappingRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>Indicates whether AWS Lambda should begin polling the event source. By
     * default, <code>Enabled</code> is true. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether AWS Lambda should begin polling the event source. By
     * default, <code>Enabled</code> is true. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether AWS Lambda should begin polling the event source. By
     * default, <code>Enabled</code> is true. </p>
     */
    inline CreateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default is 100 records.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default is 100 records.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The largest number of records that AWS Lambda will retrieve from your event
     * source at the time of invoking your function. Your function receives an event
     * with all the retrieved records. The default is 100 records.</p>
     */
    inline CreateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}

    /**
     * <p>The position in the stream where AWS Lambda should start reading. For more
     * information, go to <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">ShardIteratorType</a>
     * in the <i>Amazon Kinesis API Reference</i>. </p>
     */
    inline const EventSourcePosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The position in the stream where AWS Lambda should start reading. For more
     * information, go to <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">ShardIteratorType</a>
     * in the <i>Amazon Kinesis API Reference</i>. </p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The position in the stream where AWS Lambda should start reading. For more
     * information, go to <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">ShardIteratorType</a>
     * in the <i>Amazon Kinesis API Reference</i>. </p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The position in the stream where AWS Lambda should start reading. For more
     * information, go to <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">ShardIteratorType</a>
     * in the <i>Amazon Kinesis API Reference</i>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in the stream where AWS Lambda should start reading. For more
     * information, go to <a
     * href="http://docs.aws.amazon.com/kinesis/latest/APIReference/API_GetShardIterator.html#Kinesis-GetShardIterator-request-ShardIteratorType">ShardIteratorType</a>
     * in the <i>Amazon Kinesis API Reference</i>. </p>
     */
    inline CreateEventSourceMappingRequest& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(value); return *this;}

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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
