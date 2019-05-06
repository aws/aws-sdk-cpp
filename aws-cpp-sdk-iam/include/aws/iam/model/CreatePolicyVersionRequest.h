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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API CreatePolicyVersionRequest : public IAMRequest
  {
  public:
    CreatePolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicyVersion"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy to which you want to add a
     * new version.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline CreatePolicyVersionRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for this new
     * version of the policy.</p> <p>You must provide policies in JSON format in IAM.
     * However, for AWS CloudFormation templates formatted in YAML, you can provide the
     * policy in JSON or YAML format. AWS CloudFormation always converts a YAML policy
     * to JSON format before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyVersionRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version. That is, it becomes the version that is in effect for the IAM
     * users, groups, and roles that the policy is attached to.</p> <p>For more
     * information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool GetSetAsDefault() const{ return m_setAsDefault; }

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version. That is, it becomes the version that is in effect for the IAM
     * users, groups, and roles that the policy is attached to.</p> <p>For more
     * information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool SetAsDefaultHasBeenSet() const { return m_setAsDefaultHasBeenSet; }

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version. That is, it becomes the version that is in effect for the IAM
     * users, groups, and roles that the policy is attached to.</p> <p>For more
     * information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetSetAsDefault(bool value) { m_setAsDefaultHasBeenSet = true; m_setAsDefault = value; }

    /**
     * <p>Specifies whether to set this version as the policy's default version.</p>
     * <p>When this parameter is <code>true</code>, the new policy version becomes the
     * operative version. That is, it becomes the version that is in effect for the IAM
     * users, groups, and roles that the policy is attached to.</p> <p>For more
     * information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CreatePolicyVersionRequest& WithSetAsDefault(bool value) { SetSetAsDefault(value); return *this;}

  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    bool m_setAsDefault;
    bool m_setAsDefaultHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
