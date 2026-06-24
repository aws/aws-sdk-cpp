/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/CapabilityConfiguration.h>
#include <aws/devops-agent/model/CapabilityType.h>
#include <aws/devops-agent/model/ServiceConfiguration.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for updating an existing service association. Present fields are fully
 * replaced; absent fields are left unchanged.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateAssociationInput">AWS
 * API Reference</a></p>
 */
class UpdateAssociationRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAssociation"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the AgentSpace</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateAssociationRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the given association.</p>
   */
  inline const Aws::String& GetAssociationId() const { return m_associationId; }
  inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
  template <typename AssociationIdT = Aws::String>
  void SetAssociationId(AssociationIdT&& value) {
    m_associationIdHasBeenSet = true;
    m_associationId = std::forward<AssociationIdT>(value);
  }
  template <typename AssociationIdT = Aws::String>
  UpdateAssociationRequest& WithAssociationId(AssociationIdT&& value) {
    SetAssociationId(std::forward<AssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that directs how AgentSpace interacts with the given
   * service. The entire configuration is replaced on update.</p>
   */
  inline const ServiceConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = ServiceConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = ServiceConfiguration>
  UpdateAssociationRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enabled capabilities for this association.</p>
   */
  inline const Aws::Map<CapabilityType, CapabilityConfiguration>& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = Aws::Map<CapabilityType, CapabilityConfiguration>>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = Aws::Map<CapabilityType, CapabilityConfiguration>>
  UpdateAssociationRequest& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  inline UpdateAssociationRequest& AddCapabilities(CapabilityType key, CapabilityConfiguration value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_associationId;

  ServiceConfiguration m_configuration;

  Aws::Map<CapabilityType, CapabilityConfiguration> m_capabilities;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_associationIdHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_capabilitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
