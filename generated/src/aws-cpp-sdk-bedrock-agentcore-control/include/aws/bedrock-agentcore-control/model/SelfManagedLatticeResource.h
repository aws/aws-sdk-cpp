/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for a self-managed VPC Lattice resource. You create and manage
 * the VPC Lattice resource gateway and resource configuration, then provide the
 * resource configuration identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SelfManagedLatticeResource">AWS
 * API Reference</a></p>
 */
class SelfManagedLatticeResource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedLatticeResource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedLatticeResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedLatticeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN or ID of the VPC Lattice resource configuration.</p>
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
