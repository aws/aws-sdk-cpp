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
#include <aws/lambda/model/InvocationType.h>
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_LAMBDA_API InvokeRequest : public StreamingLambdaRequest
  {
  public:
    InvokeRequest();
    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline InvokeRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline InvokeRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Lambda function name.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline InvokeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>By default, the <code>Invoke</code> API assumes <code>RequestResponse</code>
     * invocation type. You can optionally request asynchronous execution by specifying
     * <code>Event</code> as the <code>InvocationType</code>. You can also use this
     * parameter to request AWS Lambda to not execute the function but do some
     * verification, such as if the caller is authorized to invoke the function and if
     * the inputs are valid. You request this by specifying <code>DryRun</code> as the
     * <code>InvocationType</code>. This is useful in a cross-account scenario when you
     * want to verify access to a function without running it. </p>
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>By default, the <code>Invoke</code> API assumes <code>RequestResponse</code>
     * invocation type. You can optionally request asynchronous execution by specifying
     * <code>Event</code> as the <code>InvocationType</code>. You can also use this
     * parameter to request AWS Lambda to not execute the function but do some
     * verification, such as if the caller is authorized to invoke the function and if
     * the inputs are valid. You request this by specifying <code>DryRun</code> as the
     * <code>InvocationType</code>. This is useful in a cross-account scenario when you
     * want to verify access to a function without running it. </p>
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>By default, the <code>Invoke</code> API assumes <code>RequestResponse</code>
     * invocation type. You can optionally request asynchronous execution by specifying
     * <code>Event</code> as the <code>InvocationType</code>. You can also use this
     * parameter to request AWS Lambda to not execute the function but do some
     * verification, such as if the caller is authorized to invoke the function and if
     * the inputs are valid. You request this by specifying <code>DryRun</code> as the
     * <code>InvocationType</code>. This is useful in a cross-account scenario when you
     * want to verify access to a function without running it. </p>
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>By default, the <code>Invoke</code> API assumes <code>RequestResponse</code>
     * invocation type. You can optionally request asynchronous execution by specifying
     * <code>Event</code> as the <code>InvocationType</code>. You can also use this
     * parameter to request AWS Lambda to not execute the function but do some
     * verification, such as if the caller is authorized to invoke the function and if
     * the inputs are valid. You request this by specifying <code>DryRun</code> as the
     * <code>InvocationType</code>. This is useful in a cross-account scenario when you
     * want to verify access to a function without running it. </p>
     */
    inline InvokeRequest& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>By default, the <code>Invoke</code> API assumes <code>RequestResponse</code>
     * invocation type. You can optionally request asynchronous execution by specifying
     * <code>Event</code> as the <code>InvocationType</code>. You can also use this
     * parameter to request AWS Lambda to not execute the function but do some
     * verification, such as if the caller is authorized to invoke the function and if
     * the inputs are valid. You request this by specifying <code>DryRun</code> as the
     * <code>InvocationType</code>. This is useful in a cross-account scenario when you
     * want to verify access to a function without running it. </p>
     */
    inline InvokeRequest& WithInvocationType(InvocationType&& value) { SetInvocationType(value); return *this;}

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline InvokeRequest& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline InvokeRequest& WithLogType(LogType&& value) { SetLogType(value); return *this;}

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline InvokeRequest& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline InvokeRequest& WithClientContext(Aws::String&& value) { SetClientContext(value); return *this;}

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded.</p>
     */
    inline InvokeRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline InvokeRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline InvokeRequest& WithQualifier(Aws::String&& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can use this optional parameter to specify a Lambda function version or
     * alias name. If you specify a function version, the API uses the qualified
     * function ARN to invoke a specific Lambda function. If you specify an alias name,
     * the API uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p> <p>If you don't provide this parameter, then the API uses
     * unqualified function ARN which results in invocation of the <code>$LATEST</code>
     * version.</p>
     */
    inline InvokeRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet;
    LogType m_logType;
    bool m_logTypeHasBeenSet;
    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet;
    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
