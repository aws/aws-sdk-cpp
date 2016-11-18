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
  class AWS_LAMBDA_API AddPermissionRequest : public LambdaRequest
  {
  public:
    AddPermissionRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline AddPermissionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline AddPermissionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the Lambda function whose resource policy you are updating by adding
     * a new permission.</p> <p> You can specify a function name (for example,
     * <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN) of the
     * function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
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
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

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
    inline AddPermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(value); return *this;}

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
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = value; }

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
    inline AddPermissionRequest& WithAction(Aws::String&& value) { SetAction(value); return *this;}

    /**
     * <p>The AWS Lambda action you want to allow in this statement. Each Lambda action
     * is a string starting with <code>lambda:</code> followed by the API name . For
     * example, <code>lambda:CreateFunction</code>. You can use wildcard
     * (<code>lambda:*</code>) to grant permission for all AWS Lambda actions. </p>
     */
    inline AddPermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline AddPermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline AddPermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal who is getting this permission. It can be Amazon S3 service
     * Principal (<code>s3.amazonaws.com</code>) if you want Amazon S3 to invoke the
     * function, an AWS account ID if you are granting cross-account permission, or any
     * valid AWS service principal such as <code>sns.amazonaws.com</code>. For example,
     * you might want to allow a custom application in another AWS account to push
     * events to AWS Lambda by invoking your function. </p>
     */
    inline AddPermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This is optional; however, when granting Amazon S3 permission to invoke your
     * function, you should specify this field with the Amazon Resource Name (ARN) as
     * its value. This ensures that only events generated from the specified source can
     * invoke the function.</p> <important><p>If you add a permission for the Amazon S3
     * principal without providing the source ARN, any AWS account that creates a
     * mapping to your function ARN can send events to invoke your Lambda function from
     * Amazon S3.</p> </important>
     */
    inline AddPermissionRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline AddPermissionRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
     */
    inline AddPermissionRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>This parameter is used for S3 and SES only. The AWS account ID (without a
     * hyphen) of the source owner. For example, if the <code>SourceArn</code>
     * identifies a bucket, then this is the bucket owner's account ID. You can use
     * this additional condition to ensure the bucket you specify is owned by a
     * specific account (it is possible the bucket owner deleted the bucket and some
     * other AWS account created the bucket). You can also use this condition to
     * specify all sources (that is, you don't specify the <code>SourceArn</code>)
     * owned by a specific account. </p>
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
    inline void SetEventSourceToken(Aws::String&& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = value; }

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
    inline AddPermissionRequest& WithEventSourceToken(Aws::String&& value) { SetEventSourceToken(value); return *this;}

    /**
     * <p>A unique token that must be supplied by the principal invoking the function.
     * This is currently only used for Alexa Smart Home functions.</p>
     */
    inline AddPermissionRequest& WithEventSourceToken(const char* value) { SetEventSourceToken(value); return *this;}

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline AddPermissionRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline AddPermissionRequest& WithQualifier(Aws::String&& value) { SetQualifier(value); return *this;}

    /**
     * <p>You can use this optional query parameter to describe a qualified ARN using a
     * function version or an alias name. The permission will then apply to the
     * specific qualified ARN. For example, if you specify function version 2 as the
     * qualifier, then permission applies only when request is made using qualified
     * function ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:2</code> </p>
     * <p>If you specify an alias name, for example <code>PROD</code>, then the
     * permission is valid only for requests made using the alias ARN:</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name:PROD</code> </p>
     * <p>If the qualifier is not specified, the permission is valid only when requests
     * is made using unqualified function ARN.</p> <p>
     * <code>arn:aws:lambda:aws-region:acct-id:function:function-name</code> </p>
     */
    inline AddPermissionRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
