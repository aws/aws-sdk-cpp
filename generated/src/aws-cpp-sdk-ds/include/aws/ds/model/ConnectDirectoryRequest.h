/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectorySize.h>
#include <aws/ds/model/DirectoryConnectSettings.h>
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
   * <p>Contains the inputs for the <a>ConnectDirectory</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectoryRequest">AWS
   * API Reference</a></p>
   */
  class ConnectDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API ConnectDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConnectDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The fully qualified name of your self-managed directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectDirectoryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NetBIOS name of your self-managed directory, such as
     * <code>CORP</code>.</p>
     */
    inline const Aws::String& GetShortName() const { return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    template<typename ShortNameT = Aws::String>
    void SetShortName(ShortNameT&& value) { m_shortNameHasBeenSet = true; m_shortName = std::forward<ShortNameT>(value); }
    template<typename ShortNameT = Aws::String>
    ConnectDirectoryRequest& WithShortName(ShortNameT&& value) { SetShortName(std::forward<ShortNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for your self-managed user account.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    ConnectDirectoryRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectDirectoryRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the directory.</p>
     */
    inline DirectorySize GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(DirectorySize value) { m_sizeHasBeenSet = true; m_size = value; }
    inline ConnectDirectoryRequest& WithSize(DirectorySize value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline const DirectoryConnectSettings& GetConnectSettings() const { return m_connectSettings; }
    inline bool ConnectSettingsHasBeenSet() const { return m_connectSettingsHasBeenSet; }
    template<typename ConnectSettingsT = DirectoryConnectSettings>
    void SetConnectSettings(ConnectSettingsT&& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = std::forward<ConnectSettingsT>(value); }
    template<typename ConnectSettingsT = DirectoryConnectSettings>
    ConnectDirectoryRequest& WithConnectSettings(ConnectSettingsT&& value) { SetConnectSettings(std::forward<ConnectSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ConnectDirectoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ConnectDirectoryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    DirectorySize m_size{DirectorySize::NOT_SET};
    bool m_sizeHasBeenSet = false;

    DirectoryConnectSettings m_connectSettings;
    bool m_connectSettingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
