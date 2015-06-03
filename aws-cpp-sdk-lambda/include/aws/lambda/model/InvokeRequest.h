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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/InvocationType.h>
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /*
  */
  class AWS_LAMBDA_API InvokeRequest : public StreamingLambdaRequest
  {
  public:
    InvokeRequest();
    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The Lambda function name. </p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The Lambda function name. </p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionName = value; }

    /*
     <p>The Lambda function name. </p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const char* value) { m_functionName.assign(value); }

    /*
     <p>The Lambda function name. </p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline InvokeRequest&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The Lambda function name. </p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline InvokeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>By default, the <code>Invoke</code> API assumes "RequestResponse" invocation type. You can optionally request asynchronous execution by specifying "Event" as the <code>InvocationType</code>. You can also use this parameter to request AWS Lambda to not execute the function but do some verification, such as if the caller is authorized to invoke the function and if the inputs are valid. You request this by specifying "DryRun" as the <code>InvocationType</code>. This is useful in a cross-account scenario when you want to verify access to a function without running it. </p>
    */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }
    /*
     <p>By default, the <code>Invoke</code> API assumes "RequestResponse" invocation type. You can optionally request asynchronous execution by specifying "Event" as the <code>InvocationType</code>. You can also use this parameter to request AWS Lambda to not execute the function but do some verification, such as if the caller is authorized to invoke the function and if the inputs are valid. You request this by specifying "DryRun" as the <code>InvocationType</code>. This is useful in a cross-account scenario when you want to verify access to a function without running it. </p>
    */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /*
     <p>By default, the <code>Invoke</code> API assumes "RequestResponse" invocation type. You can optionally request asynchronous execution by specifying "Event" as the <code>InvocationType</code>. You can also use this parameter to request AWS Lambda to not execute the function but do some verification, such as if the caller is authorized to invoke the function and if the inputs are valid. You request this by specifying "DryRun" as the <code>InvocationType</code>. This is useful in a cross-account scenario when you want to verify access to a function without running it. </p>
    */
    inline InvokeRequest&  WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /*
     <p>You can set this optional parameter to "Tail" in the request only if you specify the <code>InvocationType</code> parameter with value "RequestResponse". In this case, AWS Lambda returns the base64-encoded last 4 KB of log data produced by your Lambda function in the <code>x-amz-log-results</code> header. </p>
    */
    inline const LogType& GetLogType() const{ return m_logType; }
    /*
     <p>You can set this optional parameter to "Tail" in the request only if you specify the <code>InvocationType</code> parameter with value "RequestResponse". In this case, AWS Lambda returns the base64-encoded last 4 KB of log data produced by your Lambda function in the <code>x-amz-log-results</code> header. </p>
    */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /*
     <p>You can set this optional parameter to "Tail" in the request only if you specify the <code>InvocationType</code> parameter with value "RequestResponse". In this case, AWS Lambda returns the base64-encoded last 4 KB of log data produced by your Lambda function in the <code>x-amz-log-results</code> header. </p>
    */
    inline InvokeRequest&  WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /*
     <p>Using the <code>ClientContext</code> you can pass client-specific information to the Lambda function you are invoking. You can then process the client information in your Lambda function as you choose through the context variable. For an example of a ClientContext JSON, go to <a href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a> in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The ClientContext JSON must be base64-encoded.</p>
    */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }
    /*
     <p>Using the <code>ClientContext</code> you can pass client-specific information to the Lambda function you are invoking. You can then process the client information in your Lambda function as you choose through the context variable. For an example of a ClientContext JSON, go to <a href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a> in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The ClientContext JSON must be base64-encoded.</p>
    */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /*
     <p>Using the <code>ClientContext</code> you can pass client-specific information to the Lambda function you are invoking. You can then process the client information in your Lambda function as you choose through the context variable. For an example of a ClientContext JSON, go to <a href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a> in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The ClientContext JSON must be base64-encoded.</p>
    */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /*
     <p>Using the <code>ClientContext</code> you can pass client-specific information to the Lambda function you are invoking. You can then process the client information in your Lambda function as you choose through the context variable. For an example of a ClientContext JSON, go to <a href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a> in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The ClientContext JSON must be base64-encoded.</p>
    */
    inline InvokeRequest&  WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /*
     <p>Using the <code>ClientContext</code> you can pass client-specific information to the Lambda function you are invoking. You can then process the client information in your Lambda function as you choose through the context variable. For an example of a ClientContext JSON, go to <a href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a> in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The ClientContext JSON must be base64-encoded.</p>
    */
    inline InvokeRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}

  private:
    Aws::String m_functionName;
    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet;
    LogType m_logType;
    bool m_logTypeHasBeenSet;
    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
