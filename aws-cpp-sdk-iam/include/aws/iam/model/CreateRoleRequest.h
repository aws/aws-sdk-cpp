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
  class AWS_IAM_API CreateRoleRequest : public IAMRequest
  {
  public:
    CreateRoleRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> The path to the role. For more information about paths, see <a
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
     * <p> The path to the role. For more information about paths, see <a
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
     * <p> The path to the role. For more information about paths, see <a
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
     * <p> The path to the role. For more information about paths, see <a
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
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateRoleRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateRoleRequest& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateRoleRequest& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(Aws::String&& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to create.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-.
     * Role names are not distinguished by case. For example, you cannot create roles
     * named both "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for this parameter is a string of characters consisting of any
     * printable ASCII character ranging from the space character (\u0020) through end
     * of the ASCII character range (\u00FF). It also includes the special characters
     * tab (\u0009), line feed (\u000A), and carriage return (\u000D).</p>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
