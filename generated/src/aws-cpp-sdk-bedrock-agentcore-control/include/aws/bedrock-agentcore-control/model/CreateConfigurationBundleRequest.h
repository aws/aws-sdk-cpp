/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ComponentConfiguration.h>
#include <aws/bedrock-agentcore-control/model/VersionCreatedBySource.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateConfigurationBundleRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateConfigurationBundleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationBundle"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateConfigurationBundleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the configuration bundle. Names must be unique within your
   * account.</p>
   */
  inline const Aws::String& GetBundleName() const { return m_bundleName; }
  inline bool BundleNameHasBeenSet() const { return m_bundleNameHasBeenSet; }
  template <typename BundleNameT = Aws::String>
  void SetBundleName(BundleNameT&& value) {
    m_bundleNameHasBeenSet = true;
    m_bundleName = std::forward<BundleNameT>(value);
  }
  template <typename BundleNameT = Aws::String>
  CreateConfigurationBundleRequest& WithBundleName(BundleNameT&& value) {
    SetBundleName(std::forward<BundleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description for the configuration bundle.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConfigurationBundleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of component identifiers to their configurations. Each component
   * represents a configurable element within the bundle.</p>
   */
  inline const Aws::Map<Aws::String, ComponentConfiguration>& GetComponents() const { return m_components; }
  inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  void SetComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components = std::forward<ComponentsT>(value);
  }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  CreateConfigurationBundleRequest& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentConfiguration>
  CreateConfigurationBundleRequest& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branch name for version tracking. Defaults to <code>mainline</code> if
   * not specified.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  CreateConfigurationBundleRequest& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A commit message describing the initial version of the configuration
   * bundle.</p>
   */
  inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
  inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
  template <typename CommitMessageT = Aws::String>
  void SetCommitMessage(CommitMessageT&& value) {
    m_commitMessageHasBeenSet = true;
    m_commitMessage = std::forward<CommitMessageT>(value);
  }
  template <typename CommitMessageT = Aws::String>
  CreateConfigurationBundleRequest& WithCommitMessage(CommitMessageT&& value) {
    SetCommitMessage(std::forward<CommitMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that created this version, including the source name and optional
   * ARN.</p>
   */
  inline const VersionCreatedBySource& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = VersionCreatedBySource>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = VersionCreatedBySource>
  CreateConfigurationBundleRequest& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to assign to the configuration bundle. Tags
   * enable you to categorize your resources in different ways, for example, by
   * purpose, owner, or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConfigurationBundleRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConfigurationBundleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_bundleName;

  Aws::String m_description;

  Aws::Map<Aws::String, ComponentConfiguration> m_components;

  Aws::String m_branchName;

  Aws::String m_commitMessage;

  VersionCreatedBySource m_createdBy;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_bundleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_componentsHasBeenSet = false;
  bool m_branchNameHasBeenSet = false;
  bool m_commitMessageHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
