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
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
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
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline AddPermissionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>A unique statement identifier.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A unique statement identifier.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A unique statement identifier.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A unique statement identifier.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A unique statement identifier.</p>
     */
    inline AddPermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A unique statement identifier.</p>
     */
    inline AddPermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A unique statement identifier.</p>
     */
    inline AddPermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline AddPermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline AddPermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline AddPermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal who is getting this permission. The principal can be an AWS
     * service (e.g. <code>s3.amazonaws.com</code> or <code>sns.amazonaws.com</code>)
     * for service triggers, or an account ID for cross-account access. If you specify
     * a service as a principal, use the <code>SourceArn</code> parameter to limit who
     * can invoke the function through that service.</p>
     */
    inline AddPermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the invoker. </p> <important> <p>If you add a
     * permission to a service principal without providing the source ARN, any AWS
     * account that creates a mapping to your function ARN can invoke your Lambda
     * function.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline AddPermissionRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline AddPermissionRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}

    /**
     * <p>This parameter is used for S3 and SES. The AWS account ID (without a hyphen)
     * of the source owner. For example, if the <code>SourceArn</code> identifies a
     * bucket, then this is the bucket owner's account ID. You can use this additional
     * condition to ensure the bucket you specify is owned by a specific account (it is
     * possible the bucket owner deleted the bucket and some other AWS account created
     * the bucket). You can also use this condition to specify all sources (that is,
     * you don't specify the <code>SourceArn</code>) owned by a specific account. </p>
     */
    inline AddPermissionRequest& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}


    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline const Aws::String& GetEventSourceToken() const{ return m_eventSourceToken; }

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline void SetEventSourceToken(const Aws::String& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = value; }

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline void SetEventSourceToken(Aws::String&& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = std::move(value); }

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline void SetEventSourceToken(const char* value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken.assign(value); }

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(const Aws::String& value) { SetEventSourceToken(value); return *this;}

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(Aws::String&& value) { SetEventSourceToken(std::move(value)); return *this;}

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
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
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline AddPermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
     */
    inline AddPermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or <a>GetAlias</a>
     * </p>
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
