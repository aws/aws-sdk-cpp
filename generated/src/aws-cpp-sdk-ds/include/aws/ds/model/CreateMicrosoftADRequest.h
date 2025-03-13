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
    AWS_DIRECTORYSERVICE_API CreateMicrosoftADRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMicrosoftAD"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The fully qualified domain name for the Managed Microsoft AD directory, such
     * as <code>corp.example.com</code>. This name will resolve inside your VPC only.
     * It does not need to be publicly resolvable.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMicrosoftADRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NetBIOS name for your domain, such as <code>CORP</code>. If you don't
     * specify a NetBIOS name, it will default to the first part of your directory DNS.
     * For example, <code>CORP</code> for the directory DNS
     * <code>corp.example.com</code>. </p>
     */
    inline const Aws::String& GetShortName() const { return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    template<typename ShortNameT = Aws::String>
    void SetShortName(ShortNameT&& value) { m_shortNameHasBeenSet = true; m_shortName = std::forward<ShortNameT>(value); }
    template<typename ShortNameT = Aws::String>
    CreateMicrosoftADRequest& WithShortName(ShortNameT&& value) { SetShortName(std::forward<ShortNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p> <p>If you need to change the password for the
     * administrator account, you can use the <a>ResetUserPassword</a> API call.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CreateMicrosoftADRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the directory. This label will appear on the Amazon Web
     * Services console <code>Directory Details</code> page after the directory is
     * created.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMicrosoftADRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains VPC information for the <a>CreateDirectory</a> or
     * <a>CreateMicrosoftAD</a> operation.</p>
     */
    inline const DirectoryVpcSettings& GetVpcSettings() const { return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    void SetVpcSettings(VpcSettingsT&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::forward<VpcSettingsT>(value); }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    CreateMicrosoftADRequest& WithVpcSettings(VpcSettingsT&& value) { SetVpcSettings(std::forward<VpcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Managed Microsoft AD is available in two editions: <code>Standard</code> and
     * <code>Enterprise</code>. <code>Enterprise</code> is the default.</p>
     */
    inline DirectoryEdition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(DirectoryEdition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline CreateMicrosoftADRequest& WithEdition(DirectoryEdition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the Managed Microsoft AD directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMicrosoftADRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMicrosoftADRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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

    DirectoryEdition m_edition{DirectoryEdition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
