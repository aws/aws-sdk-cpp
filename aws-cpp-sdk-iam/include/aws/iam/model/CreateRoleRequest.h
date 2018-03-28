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
  class AWS_IAM_API CreateRoleRequest : public IAMRequest
  {
  public:
    CreateRoleRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRole"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreateRoleRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreateRoleRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes. In addition, it can contain any
     * ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p>
     */
    inline CreateRoleRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the role to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p> <p>Role names are
     * not distinguished by case. For example, you cannot create roles named both
     * "PRODROLE" and "prodrole".</p>
     */
    inline CreateRoleRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::move(value); }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The trust relationship policy document that grants an entity permission to
     * assume the role.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> used to validate this parameter is a string of characters consisting
     * of the following:</p> <ul> <li> <p>Any printable ASCII character ranging from
     * the space character (\u0020) through the end of the ASCII character range</p>
     * </li> <li> <p>The printable characters in the Basic Latin and Latin-1 Supplement
     * character set (through \u00FF)</p> </li> <li> <p>The special characters tab
     * (\u0009), line feed (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline CreateRoleRequest& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}


    /**
     * <p>A description of the role.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the role.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the role.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the role.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the role.</p>
     */
    inline CreateRoleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the role.</p>
     */
    inline CreateRoleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the role.</p>
     */
    inline CreateRoleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role. If you do not specify a value for this setting, the default
     * maximum of one hour is applied. This setting can have a value from 1 hour to 12
     * hours.</p> <p>Anyone who assumes the role from the AWS CLI or API can use the
     * <code>DurationSeconds</code> API parameter or the <code>duration-seconds</code>
     * CLI parameter to request a longer session. The <code>MaxSessionDuration</code>
     * setting determines the maximum duration that can be requested using the
     * <code>DurationSeconds</code> parameter. If users don't specify a value for the
     * <code>DurationSeconds</code> parameter, their security credentials are valid for
     * one hour by default. This applies when you use the <code>AssumeRole*</code> API
     * operations or the <code>assume-role*</code> CLI operations but does not apply
     * when you use those operations to create a console URL. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
     * IAM Roles</a> in the <i>IAM User Guide</i>.</p>
     */
    inline int GetMaxSessionDuration() const{ return m_maxSessionDuration; }

    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role. If you do not specify a value for this setting, the default
     * maximum of one hour is applied. This setting can have a value from 1 hour to 12
     * hours.</p> <p>Anyone who assumes the role from the AWS CLI or API can use the
     * <code>DurationSeconds</code> API parameter or the <code>duration-seconds</code>
     * CLI parameter to request a longer session. The <code>MaxSessionDuration</code>
     * setting determines the maximum duration that can be requested using the
     * <code>DurationSeconds</code> parameter. If users don't specify a value for the
     * <code>DurationSeconds</code> parameter, their security credentials are valid for
     * one hour by default. This applies when you use the <code>AssumeRole*</code> API
     * operations or the <code>assume-role*</code> CLI operations but does not apply
     * when you use those operations to create a console URL. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
     * IAM Roles</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }

    /**
     * <p>The maximum session duration (in seconds) that you want to set for the
     * specified role. If you do not specify a value for this setting, the default
     * maximum of one hour is applied. This setting can have a value from 1 hour to 12
     * hours.</p> <p>Anyone who assumes the role from the AWS CLI or API can use the
     * <code>DurationSeconds</code> API parameter or the <code>duration-seconds</code>
     * CLI parameter to request a longer session. The <code>MaxSessionDuration</code>
     * setting determines the maximum duration that can be requested using the
     * <code>DurationSeconds</code> parameter. If users don't specify a value for the
     * <code>DurationSeconds</code> parameter, their security credentials are valid for
     * one hour by default. This applies when you use the <code>AssumeRole*</code> API
     * operations or the <code>assume-role*</code> CLI operations but does not apply
     * when you use those operations to create a console URL. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using
     * IAM Roles</a> in the <i>IAM User Guide</i>.</p>
     */
    inline CreateRoleRequest& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_maxSessionDuration;
    bool m_maxSessionDurationHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
