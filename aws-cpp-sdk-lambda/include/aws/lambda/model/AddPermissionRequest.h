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
  class AWS_LAMBDA_API AddPermissionRequest : public LambdaRequest
  {
  public:
    AddPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPermission"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function, version, or alias.</p> <p class="title">
     * <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline AddPermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline AddPermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline AddPermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline AddPermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline AddPermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline AddPermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS service or account that invokes the function. If you specify a
     * service, use <code>SourceArn</code> or <code>SourceAccount</code> to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline AddPermissionRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline AddPermissionRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>For AWS services, the ARN of the AWS resource that invokes the function. For
     * example, an Amazon S3 bucket or Amazon SNS topic.</p>
     */
    inline AddPermissionRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline AddPermissionRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline AddPermissionRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}

    /**
     * <p>For AWS services, the ID of the account that owns the resource. Use this
     * instead of <code>SourceArn</code> to grant permission to resources that are
     * owned by another account (for example, all of an account's Amazon S3 buckets).
     * Or use it together with <code>SourceArn</code> to ensure that the resource is
     * owned by the specified account. For example, an Amazon S3 bucket could be
     * deleted by its owner and recreated by another account.</p>
     */
    inline AddPermissionRequest& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}


    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline const Aws::String& GetEventSourceToken() const{ return m_eventSourceToken; }

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline bool EventSourceTokenHasBeenSet() const { return m_eventSourceTokenHasBeenSet; }

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline void SetEventSourceToken(const Aws::String& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = value; }

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline void SetEventSourceToken(Aws::String&& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = std::move(value); }

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline void SetEventSourceToken(const char* value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken.assign(value); }

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(const Aws::String& value) { SetEventSourceToken(value); return *this;}

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(Aws::String&& value) { SetEventSourceToken(std::move(value)); return *this;}

    /**
     * <p>For Alexa Smart Home functions, a token that must be supplied by the
     * invoker.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(const char* value) { SetEventSourceToken(value); return *this;}


    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline AddPermissionRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline AddPermissionRequest& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline AddPermissionRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}


    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline AddPermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline AddPermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Only update the policy if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline AddPermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet;

    Aws::String m_eventSourceToken;
    bool m_eventSourceTokenHasBeenSet;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
