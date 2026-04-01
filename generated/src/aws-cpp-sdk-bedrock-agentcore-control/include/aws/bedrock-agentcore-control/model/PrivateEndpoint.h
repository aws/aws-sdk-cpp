/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ManagedLatticeResource.h>
#include <aws/bedrock-agentcore-control/model/SelfManagedLatticeResource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The private endpoint configuration for a gateway target. Defines how the
 * gateway connects to private resources in your VPC.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PrivateEndpoint">AWS
 * API Reference</a></p>
 */
class PrivateEndpoint {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpoint() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PrivateEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for connecting to a private resource using a self-managed VPC
   * Lattice resource configuration.</p>
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
   * <p>Configuration for connecting to a private resource using a managed VPC
   * Lattice resource. The gateway creates and manages the VPC Lattice resources on
   * your behalf.</p>
   */
  inline const ManagedLatticeResource& GetManagedLatticeResource() const { return m_managedLatticeResource; }
  inline bool ManagedLatticeResourceHasBeenSet() const { return m_managedLatticeResourceHasBeenSet; }
  template <typename ManagedLatticeResourceT = ManagedLatticeResource>
  void SetManagedLatticeResource(ManagedLatticeResourceT&& value) {
    m_managedLatticeResourceHasBeenSet = true;
    m_managedLatticeResource = std::forward<ManagedLatticeResourceT>(value);
  }
  template <typename ManagedLatticeResourceT = ManagedLatticeResource>
  PrivateEndpoint& WithManagedLatticeResource(ManagedLatticeResourceT&& value) {
    SetManagedLatticeResource(std::forward<ManagedLatticeResourceT>(value));
    return *this;
  }
  ///@}
 private:
  SelfManagedLatticeResource m_selfManagedLatticeResource;

  ManagedLatticeResource m_managedLatticeResource;
  bool m_selfManagedLatticeResourceHasBeenSet = false;
  bool m_managedLatticeResourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
