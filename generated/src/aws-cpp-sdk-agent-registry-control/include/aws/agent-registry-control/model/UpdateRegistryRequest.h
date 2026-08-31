/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedApprovalConfiguration.h>
#include <aws/agent-registry-control/model/UpdatedAutoDetectionConfiguration.h>
#include <aws/agent-registry-control/model/UpdatedDescription.h>
#include <aws/agent-registry-control/model/UpdatedDiscoveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Request structure for updating a registry</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdateRegistryRequest">AWS
 * API Reference</a></p>
 */
class UpdateRegistryRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdateRegistryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRegistry"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the registry to update (ARN or ID)</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  UpdateRegistryRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the registry</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRegistryRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the registry</p>
   */
  inline const UpdatedDescription& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = UpdatedDescription>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = UpdatedDescription>
  UpdateRegistryRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated discovery configuration. Changing the discovery authorization can
   * break existing consumers that rely on the previous authorization type.</p>
   */
  inline const UpdatedDiscoveryConfiguration& GetDiscoveryConfiguration() const { return m_discoveryConfiguration; }
  inline bool DiscoveryConfigurationHasBeenSet() const { return m_discoveryConfigurationHasBeenSet; }
  template <typename DiscoveryConfigurationT = UpdatedDiscoveryConfiguration>
  void SetDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    m_discoveryConfigurationHasBeenSet = true;
    m_discoveryConfiguration = std::forward<DiscoveryConfigurationT>(value);
  }
  template <typename DiscoveryConfigurationT = UpdatedDiscoveryConfiguration>
  UpdateRegistryRequest& WithDiscoveryConfiguration(DiscoveryConfigurationT&& value) {
    SetDiscoveryConfiguration(std::forward<DiscoveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated approval configuration. The change applies only to records that
   * move to PENDING_APPROVAL after the update; records already in PENDING_APPROVAL
   * are unaffected.</p>
   */
  inline const UpdatedApprovalConfiguration& GetApprovalConfiguration() const { return m_approvalConfiguration; }
  inline bool ApprovalConfigurationHasBeenSet() const { return m_approvalConfigurationHasBeenSet; }
  template <typename ApprovalConfigurationT = UpdatedApprovalConfiguration>
  void SetApprovalConfiguration(ApprovalConfigurationT&& value) {
    m_approvalConfigurationHasBeenSet = true;
    m_approvalConfiguration = std::forward<ApprovalConfigurationT>(value);
  }
  template <typename ApprovalConfigurationT = UpdatedApprovalConfiguration>
  UpdateRegistryRequest& WithApprovalConfiguration(ApprovalConfigurationT&& value) {
    SetApprovalConfiguration(std::forward<ApprovalConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated auto-detection configuration for the registry, with PATCH
   * semantics. Omit this field to leave the current configuration unchanged. Supply
   * an empty wrapper to unset it. Supply <code>optionalValue</code> to replace
   * it.</p>
   */
  inline const UpdatedAutoDetectionConfiguration& GetAutoDetectionConfiguration() const { return m_autoDetectionConfiguration; }
  inline bool AutoDetectionConfigurationHasBeenSet() const { return m_autoDetectionConfigurationHasBeenSet; }
  template <typename AutoDetectionConfigurationT = UpdatedAutoDetectionConfiguration>
  void SetAutoDetectionConfiguration(AutoDetectionConfigurationT&& value) {
    m_autoDetectionConfigurationHasBeenSet = true;
    m_autoDetectionConfiguration = std::forward<AutoDetectionConfigurationT>(value);
  }
  template <typename AutoDetectionConfigurationT = UpdatedAutoDetectionConfiguration>
  UpdateRegistryRequest& WithAutoDetectionConfiguration(AutoDetectionConfigurationT&& value) {
    SetAutoDetectionConfiguration(std::forward<AutoDetectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_name;

  UpdatedDescription m_description;

  UpdatedDiscoveryConfiguration m_discoveryConfiguration;

  UpdatedApprovalConfiguration m_approvalConfiguration;

  UpdatedAutoDetectionConfiguration m_autoDetectionConfiguration;
  bool m_registryIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_discoveryConfigurationHasBeenSet = false;
  bool m_approvalConfigurationHasBeenSet = false;
  bool m_autoDetectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
