/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>A self-managed private endpoint backed by a VPC Lattice resource
 * configuration. Exactly one member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/SelfManagedLatticeResource">AWS
 * API Reference</a></p>
 */
class SelfManagedLatticeResource {
 public:
  AWS_AGENTREGISTRYCONTROL_API SelfManagedLatticeResource() = default;
  AWS_AGENTREGISTRYCONTROL_API SelfManagedLatticeResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API SelfManagedLatticeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the VPC Lattice resource configuration, specified as a
   * resource configuration ID or ARN.</p>
   */
  inline const Aws::String& GetResourceConfigurationIdentifier() const { return m_resourceConfigurationIdentifier; }
  inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
  template <typename ResourceConfigurationIdentifierT = Aws::String>
  void SetResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) {
    m_resourceConfigurationIdentifierHasBeenSet = true;
    m_resourceConfigurationIdentifier = std::forward<ResourceConfigurationIdentifierT>(value);
  }
  template <typename ResourceConfigurationIdentifierT = Aws::String>
  SelfManagedLatticeResource& WithResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) {
    SetResourceConfigurationIdentifier(std::forward<ResourceConfigurationIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationIdentifier;
  bool m_resourceConfigurationIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
