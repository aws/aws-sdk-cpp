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
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API PublishVersionRequest : public LambdaRequest
  {
  public:
    PublishVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishVersion"; }

    Aws::String SerializePayload() const override;


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
    inline PublishVersionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

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
    inline PublishVersionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

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
    inline PublishVersionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline PublishVersionRequest& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline PublishVersionRequest& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the deployment package you want to publish. This provides
     * validation on the code you are publishing. If you provide this parameter, the
     * value must match the SHA256 of the $LATEST version for the publication to
     * succeed. You can use the <b>DryRun</b> parameter of <a>UpdateFunctionCode</a> to
     * verify the hash value that will be returned before publishing your new
     * version.</p>
     */
    inline PublishVersionRequest& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline PublishVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline PublishVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the version you are publishing. If not provided, AWS
     * Lambda copies the description from the $LATEST version.</p>
     */
    inline PublishVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline PublishVersionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline PublishVersionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline PublishVersionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
