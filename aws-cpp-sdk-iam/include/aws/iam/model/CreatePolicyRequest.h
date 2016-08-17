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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    Aws::String SerializePayload() const override;

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline CreatePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreatePolicyRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreatePolicyRequest& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the policy.</p> <p>For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreatePolicyRequest& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline CreatePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline CreatePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document that you want to use as the content for the new
     * policy.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters consisting of any printable ASCII
     * character ranging from the space character (\u0020) through end of the ASCII
     * character range (\u00FF). It also includes the special characters tab (\u0009),
     * line feed (\u000A), and carriage return (\u000D).</p>
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
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the policy.</p> <p>Typically used to store
     * information about the permissions defined in the policy. For example, "Grants
     * access to production DynamoDB tables."</p> <p>The policy description is
     * immutable. After a value is assigned, it cannot be changed.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline CreatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

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
