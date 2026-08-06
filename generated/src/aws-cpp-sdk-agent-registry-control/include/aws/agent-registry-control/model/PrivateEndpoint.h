/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ManagedVpcResource.h>
#include <aws/agent-registry-control/model/SelfManagedLatticeResource.h>

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
 * <p>A private network endpoint used to reach a resource over a private path.
 * Exactly one member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/PrivateEndpoint">AWS
 * API Reference</a></p>
 */
class PrivateEndpoint {
 public:
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpoint() = default;
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API PrivateEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A private endpoint backed by a self-managed VPC Lattice resource
   * configuration.</p>
   */
  inline const SelfManagedLatticeResource& GetSelfManagedLatticeResource() const { return m_selfManagedLatticeResource; }
  inline bool SelfManagedLatticeResourceHasBeenSet() const { return m_selfManagedLatticeResourceHasBeenSet; }
  template <typename SelfManagedLatticeResourceT = SelfManagedLatticeResource>
  void SetSelfManagedLatticeResource(SelfManagedLatticeResourceT&& value) {
    m_selfManagedLatticeResourceHasBeenSet = true;
    m_selfManagedLatticeResource = std::forward<SelfManagedLatticeResourceT>(value);
  }
  template <typename SelfManagedLatticeResourceT = SelfManagedLatticeResource>
  PrivateEndpoint& WithSelfManagedLatticeResource(SelfManagedLatticeResourceT&& value) {
    SetSelfManagedLatticeResource(std::forward<SelfManagedLatticeResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A private endpoint backed by a service-managed VPC resource.</p>
   */
  inline const ManagedVpcResource& GetManagedVpcResource() const { return m_managedVpcResource; }
  inline bool ManagedVpcResourceHasBeenSet() const { return m_managedVpcResourceHasBeenSet; }
  template <typename ManagedVpcResourceT = ManagedVpcResource>
  void SetManagedVpcResource(ManagedVpcResourceT&& value) {
    m_managedVpcResourceHasBeenSet = true;
    m_managedVpcResource = std::forward<ManagedVpcResourceT>(value);
  }
  template <typename ManagedVpcResourceT = ManagedVpcResource>
  PrivateEndpoint& WithManagedVpcResource(ManagedVpcResourceT&& value) {
    SetManagedVpcResource(std::forward<ManagedVpcResourceT>(value));
    return *this;
  }
  ///@}
 private:
  SelfManagedLatticeResource m_selfManagedLatticeResource;

  ManagedVpcResource m_managedVpcResource;
  bool m_selfManagedLatticeResourceHasBeenSet = false;
  bool m_managedVpcResourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
