/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AgentSoftwareVersion.h>
#include <aws/appstream/model/ApplicationConfig.h>
#include <aws/appstream/model/RuntimeValidationConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AppStream {
namespace Model {

/**
 */
class CreateImportedImageRequest : public AppStreamRequest {
 public:
  AWS_APPSTREAM_API CreateImportedImageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateImportedImage"; }

  AWS_APPSTREAM_API Aws::String SerializePayload() const override;

  AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique name for the imported image. The name must be between 1 and 100
   * characters and can contain letters, numbers, underscores, periods, and
   * hyphens.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateImportedImageRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the EC2 AMI to import. The AMI must meet specific requirements
   * including Windows Server 2022 Full Base, UEFI boot mode, TPM 2.0 support, and
   * proper drivers.</p>
   */
  inline const Aws::String& GetSourceAmiId() const { return m_sourceAmiId; }
  inline bool SourceAmiIdHasBeenSet() const { return m_sourceAmiIdHasBeenSet; }
  template <typename SourceAmiIdT = Aws::String>
  void SetSourceAmiId(SourceAmiIdT&& value) {
    m_sourceAmiIdHasBeenSet = true;
    m_sourceAmiId = std::forward<SourceAmiIdT>(value);
  }
  template <typename SourceAmiIdT = Aws::String>
  CreateImportedImageRequest& WithSourceAmiId(SourceAmiIdT&& value) {
    SetSourceAmiId(std::forward<SourceAmiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that allows WorkSpaces Applications to access your
   * AMI. The role must have permissions to modify image attributes and describe
   * images, with a trust relationship allowing appstream.amazonaws.com to assume the
   * role.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  CreateImportedImageRequest& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the imported image. The description must match
   * approved regex patterns and can be up to 256 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateImportedImageRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional display name for the imported image. The display name must match
   * approved regex patterns and can be up to 100 characters.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateImportedImageRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the imported image. Tags help you organize and manage
   * your WorkSpaces Applications resources.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateImportedImageRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateImportedImageRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for runtime validation of the imported image. When specified,
   * WorkSpaces Applications provisions an instance to test streaming functionality,
   * which helps ensure the image is suitable for use.</p>
   */
  inline const RuntimeValidationConfig& GetRuntimeValidationConfig() const { return m_runtimeValidationConfig; }
  inline bool RuntimeValidationConfigHasBeenSet() const { return m_runtimeValidationConfigHasBeenSet; }
  template <typename RuntimeValidationConfigT = RuntimeValidationConfig>
  void SetRuntimeValidationConfig(RuntimeValidationConfigT&& value) {
    m_runtimeValidationConfigHasBeenSet = true;
    m_runtimeValidationConfig = std::forward<RuntimeValidationConfigT>(value);
  }
  template <typename RuntimeValidationConfigT = RuntimeValidationConfig>
  CreateImportedImageRequest& WithRuntimeValidationConfig(RuntimeValidationConfigT&& value) {
    SetRuntimeValidationConfig(std::forward<RuntimeValidationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the WorkSpaces Applications agent to use for the imported
   * image. Choose CURRENT_LATEST to use the agent version available at the time of
   * import, or ALWAYS_LATEST to automatically update to the latest agent version
   * when new versions are released.</p>
   */
  inline AgentSoftwareVersion GetAgentSoftwareVersion() const { return m_agentSoftwareVersion; }
  inline bool AgentSoftwareVersionHasBeenSet() const { return m_agentSoftwareVersionHasBeenSet; }
  inline void SetAgentSoftwareVersion(AgentSoftwareVersion value) {
    m_agentSoftwareVersionHasBeenSet = true;
    m_agentSoftwareVersion = value;
  }
  inline CreateImportedImageRequest& WithAgentSoftwareVersion(AgentSoftwareVersion value) {
    SetAgentSoftwareVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the application catalog of the imported image. This allows
   * you to specify applications available for streaming, including their paths,
   * icons, and launch parameters. This field contains sensitive data.</p>
   */
  inline const Aws::Vector<ApplicationConfig>& GetAppCatalogConfig() const { return m_appCatalogConfig; }
  inline bool AppCatalogConfigHasBeenSet() const { return m_appCatalogConfigHasBeenSet; }
  template <typename AppCatalogConfigT = Aws::Vector<ApplicationConfig>>
  void SetAppCatalogConfig(AppCatalogConfigT&& value) {
    m_appCatalogConfigHasBeenSet = true;
    m_appCatalogConfig = std::forward<AppCatalogConfigT>(value);
  }
  template <typename AppCatalogConfigT = Aws::Vector<ApplicationConfig>>
  CreateImportedImageRequest& WithAppCatalogConfig(AppCatalogConfigT&& value) {
    SetAppCatalogConfig(std::forward<AppCatalogConfigT>(value));
    return *this;
  }
  template <typename AppCatalogConfigT = ApplicationConfig>
  CreateImportedImageRequest& AddAppCatalogConfig(AppCatalogConfigT&& value) {
    m_appCatalogConfigHasBeenSet = true;
    m_appCatalogConfig.emplace_back(std::forward<AppCatalogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true, performs validation checks without actually creating the
   * imported image. Use this to verify your configuration before executing the
   * actual import operation.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateImportedImageRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_sourceAmiId;
  bool m_sourceAmiIdHasBeenSet = false;

  Aws::String m_iamRoleArn;
  bool m_iamRoleArnHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  RuntimeValidationConfig m_runtimeValidationConfig;
  bool m_runtimeValidationConfigHasBeenSet = false;

  AgentSoftwareVersion m_agentSoftwareVersion{AgentSoftwareVersion::NOT_SET};
  bool m_agentSoftwareVersionHasBeenSet = false;

  Aws::Vector<ApplicationConfig> m_appCatalogConfig;
  bool m_appCatalogConfigHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
