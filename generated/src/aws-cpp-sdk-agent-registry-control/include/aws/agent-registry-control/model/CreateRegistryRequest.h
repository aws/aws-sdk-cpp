/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ApprovalConfiguration.h>
#include <aws/agent-registry-control/model/DiscoveryConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Request structure for creating a registry</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreateRegistryRequest">AWS
 * API Reference</a></p>
 */
class CreateRegistryRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRegistry"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the registry</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRegistryRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the registry</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRegistryRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Discovery configuration for the registry</p>
   */
  inline const DiscoveryConfiguration& GetDiscoveryConfiguration() const { return m_discoveryConfiguration; }
  inline bool DiscoveryConfigurationHasBeenSet() const { return m_discoveryConfigurationHasBeenSet; }
  template <typename DiscoveryConfigurationT = DiscoveryConfiguration>
  void SetDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    m_discoveryConfigurationHasBeenSet = true;
    m_discoveryConfiguration = std::forward<DiscoveryConfigurationT>(value);
  }
  template <typename DiscoveryConfigurationT = DiscoveryConfiguration>
  CreateRegistryRequest& WithDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    SetDiscoveryConfiguration(std::forward<DiscoveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client token for idempotency</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRegistryRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the registry</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRegistryRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRegistryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Approval configuration for registry records</p>
   */
  inline const ApprovalConfiguration& GetApprovalConfiguration() const { return m_approvalConfiguration; }
  inline bool ApprovalConfigurationHasBeenSet() const { return m_approvalConfigurationHasBeenSet; }
  template <typename ApprovalConfigurationT = ApprovalConfiguration>
  void SetApprovalConfiguration(ApprovalConfigurationT&& value) {
    m_approvalConfigurationHasBeenSet = true;
    m_approvalConfiguration = std::forward<ApprovalConfigurationT>(value);
  }
  template <typename ApprovalConfigurationT = ApprovalConfiguration>
  CreateRegistryRequest& WithApprovalConfiguration(ApprovalConfigurationT&& value) {
    SetApprovalConfiguration(std::forward<ApprovalConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  DiscoveryConfiguration m_discoveryConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;

  ApprovalConfiguration m_approvalConfiguration;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_discoveryConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_approvalConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
