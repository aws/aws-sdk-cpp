/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryVpcSettings.h>
#include <aws/ds/model/DirectoryEdition.h>
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
   * <p>Creates an Managed Microsoft AD directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftADRequest">AWS
   * API Reference</a></p>
   */
  class CreateMicrosoftADRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateMicrosoftADRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMicrosoftAD"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = std::move(value); }

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(Aws::String&& value) { SetShortName(std::move(value)); return *this;}

    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(const char* value) { SetShortName(value); return *this;}


    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline const DirectoryVpcSettings& GetVpcSettings() const{ return m_vpcSettings; }

    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }

    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline void SetVpcSettings(const DirectoryVpcSettings& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline void SetVpcSettings(DirectoryVpcSettings&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }

    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline CreateMicrosoftADRequest& WithVpcSettings(const DirectoryVpcSettings& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline CreateMicrosoftADRequest& WithVpcSettings(DirectoryVpcSettings&& value) { SetVpcSettings(std::move(value)); return *this;}


    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline const DirectoryEdition& GetEdition() const{ return m_edition; }

    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline void SetEdition(const DirectoryEdition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline void SetEdition(DirectoryEdition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline CreateMicrosoftADRequest& WithEdition(const DirectoryEdition& value) { SetEdition(value); return *this;}

    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline CreateMicrosoftADRequest& WithEdition(DirectoryEdition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline CreateMicrosoftADRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline CreateMicrosoftADRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline CreateMicrosoftADRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline CreateMicrosoftADRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortName;
    bool m_shortNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    DirectoryEdition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
