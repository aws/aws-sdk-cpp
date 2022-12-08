/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectorySize.h>
#include <aws/ds/model/DirectoryVpcSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateDirectory</a> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateDirectoryRequest">AWS
   * API Reference</a></p>
   */
  class CreateDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = std::move(value); }

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(Aws::String&& value) { SetShortName(std::move(value)); return *this;}

    /**
     * <p>The NetBIOS name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(const char* value) { SetShortName(value); return *this;}


    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline CreateDirectoryRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline CreateDirectoryRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the user name
     * <code>Administrator</code> and this password.</p> <p>If you need to change the
     * password for the administrator account, you can use the <a>ResetUserPassword</a>
     * API call.</p> <p>The regex pattern for this string is made up of the following
     * conditions:</p> <ul> <li> <p>Length (?=^.{8,64}$) – Must be between 8 and 64
     * characters</p> </li> </ul> <p>AND any 3 of the following password complexity
     * rules required by Active Directory:</p> <ul> <li> <p>Numbers and upper case and
     * lowercase (?=.*\d)(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and special
     * characters and lower case (?=.*\d)(?=.*[^A-Za-z0-9\s])(?=.*[a-z])</p> </li> <li>
     * <p>Special characters and upper case and lower case
     * (?=.*[^A-Za-z0-9\s])(?=.*[A-Z])(?=.*[a-z])</p> </li> <li> <p>Numbers and upper
     * case and special characters (?=.*\d)(?=.*[A-Z])(?=.*[^A-Za-z0-9\s])</p> </li>
     * </ul> <p>For additional information about how Active Directory passwords are
     * enforced, see <a
     * href="https://docs.microsoft.com/en-us/windows/security/threat-protection/security-policy-settings/password-must-meet-complexity-requirements">Password
     * must meet complexity requirements</a> on the Microsoft website.</p>
     */
    inline CreateDirectoryRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the directory.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the directory.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the directory.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the directory.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the directory.</p>
     */
    inline const DirectorySize& GetSize() const{ return m_size; }

    /**
     * <p>The size of the directory.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(const DirectorySize& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(DirectorySize&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The size of the directory.</p>
     */
    inline CreateDirectoryRequest& WithSize(const DirectorySize& value) { SetSize(value); return *this;}

    /**
     * <p>The size of the directory.</p>
     */
    inline CreateDirectoryRequest& WithSize(DirectorySize&& value) { SetSize(std::move(value)); return *this;}


    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline const DirectoryVpcSettings& GetVpcSettings() const{ return m_vpcSettings; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline void SetVpcSettings(const DirectoryVpcSettings& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline void SetVpcSettings(DirectoryVpcSettings&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline CreateDirectoryRequest& WithVpcSettings(const DirectoryVpcSettings& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline CreateDirectoryRequest& WithVpcSettings(DirectoryVpcSettings&& value) { SetVpcSettings(std::move(value)); return *this;}


    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline CreateDirectoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline CreateDirectoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline CreateDirectoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the Simple AD directory.</p>
     */
    inline CreateDirectoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortName;
    bool m_shortNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DirectorySize m_size;
    bool m_sizeHasBeenSet = false;

    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
