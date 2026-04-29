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
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateConfigurationBundleRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateConfigurationBundleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationBundle"; }

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
  UpdateConfigurationBundleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle to update.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  UpdateConfigurationBundleRequest& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name for the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleName() const { return m_bundleName; }
  inline bool BundleNameHasBeenSet() const { return m_bundleNameHasBeenSet; }
  template <typename BundleNameT = Aws::String>
  void SetBundleName(BundleNameT&& value) {
    m_bundleNameHasBeenSet = true;
    m_bundleName = std::forward<BundleNameT>(value);
  }
  template <typename BundleNameT = Aws::String>
  UpdateConfigurationBundleRequest& WithBundleName(BundleNameT&& value) {
    SetBundleName(std::forward<BundleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the configuration bundle.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateConfigurationBundleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated component configurations. Creates a new version of the
   * bundle.</p>
   */
  inline const Aws::Map<Aws::String, ComponentConfiguration>& GetComponents() const { return m_components; }
  inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  void SetComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components = std::forward<ComponentsT>(value);
  }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  UpdateConfigurationBundleRequest& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentConfiguration>
  UpdateConfigurationBundleRequest& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of parent version identifiers for lineage tracking. Regular commits
   * have a single parent. Merge commits have two parents: the target branch parent
   * and the source branch parent. If the branch already exists, the first parent
   * must be the latest version on that branch.</p>
   */
  inline const Aws::Vector<Aws::String>& GetParentVersionIds() const { return m_parentVersionIds; }
  inline bool ParentVersionIdsHasBeenSet() const { return m_parentVersionIdsHasBeenSet; }
  template <typename ParentVersionIdsT = Aws::Vector<Aws::String>>
  void SetParentVersionIds(ParentVersionIdsT&& value) {
    m_parentVersionIdsHasBeenSet = true;
    m_parentVersionIds = std::forward<ParentVersionIdsT>(value);
  }
  template <typename ParentVersionIdsT = Aws::Vector<Aws::String>>
  UpdateConfigurationBundleRequest& WithParentVersionIds(ParentVersionIdsT&& value) {
    SetParentVersionIds(std::forward<ParentVersionIdsT>(value));
    return *this;
  }
  template <typename ParentVersionIdsT = Aws::String>
  UpdateConfigurationBundleRequest& AddParentVersionIds(ParentVersionIdsT&& value) {
    m_parentVersionIdsHasBeenSet = true;
    m_parentVersionIds.emplace_back(std::forward<ParentVersionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branch name for this version. If not specified, inherits the parent's
   * branch or defaults to <code>mainline</code>.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  UpdateConfigurationBundleRequest& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A commit message describing the changes in this version.</p>
   */
  inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
  inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
  template <typename CommitMessageT = Aws::String>
  void SetCommitMessage(CommitMessageT&& value) {
    m_commitMessageHasBeenSet = true;
    m_commitMessage = std::forward<CommitMessageT>(value);
  }
  template <typename CommitMessageT = Aws::String>
  UpdateConfigurationBundleRequest& WithCommitMessage(CommitMessageT&& value) {
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
  UpdateConfigurationBundleRequest& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_bundleId;

  Aws::String m_bundleName;

  Aws::String m_description;

  Aws::Map<Aws::String, ComponentConfiguration> m_components;

  Aws::Vector<Aws::String> m_parentVersionIds;

  Aws::String m_branchName;

  Aws::String m_commitMessage;

  VersionCreatedBySource m_createdBy;
  bool m_clientTokenHasBeenSet = true;
  bool m_bundleIdHasBeenSet = false;
  bool m_bundleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_componentsHasBeenSet = false;
  bool m_parentVersionIdsHasBeenSet = false;
  bool m_branchNameHasBeenSet = false;
  bool m_commitMessageHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
