/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/InvocationType.h>
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/Array.h>
#include <utility>

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
   */
  class InvokeRequest : public StreamingLambdaRequest
  {
  public:
    AWS_LAMBDA_API InvokeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Invoke"; }

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_LAMBDA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline InvokeRequest& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * response includes the function response and additional data.</p> </li> <li> <p>
     * <code>Event</code> – Invoke the function asynchronously. Send events that fail
     * multiple times to the function's dead-letter queue (if one is configured). The
     * API response only includes a status code.</p> </li> <li> <p> <code>DryRun</code>
     * – Validate parameter values and verify that the user or role has permission to
     * invoke the function.</p> </li> </ul>
     */
    inline InvokeRequest& WithInvocationType(InvocationType&& value) { SetInvocationType(std::move(value)); return *this;}


    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline InvokeRequest& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline InvokeRequest& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::move(value); }

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline InvokeRequest& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline InvokeRequest& WithClientContext(Aws::String&& value) { SetClientContext(std::move(value)); return *this;}

    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline InvokeRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}


    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet = false;


    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
