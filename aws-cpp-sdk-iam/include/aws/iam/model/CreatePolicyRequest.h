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
  class AWS_IAM_API CreatePolicyRequest : public IAMRequest
  {
  public:
    CreatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline CreatePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the policy.</p> <p>IAM user, group, role, and policy
     * names must be unique within the account. Names are not distinguished by case.
     * For example, you cannot create resources named both "MyResource" and
     * "myresource".</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreatePolicyRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreatePolicyRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreatePolicyRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
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
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
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
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
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
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
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
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
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
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>You must provide policies in JSON format in IAM. However, for AWS
     * CloudFormation templates formatted in YAML, you can provide the policy in JSON
     * or YAML format. AWS CloudFormation always converts a YAML policy to JSON format
     * before submitting it to IAM.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreatePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline CreatePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline CreatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline CreatePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
