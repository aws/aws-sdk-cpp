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
 * <p>The permissions configuration for a capacity provider. This specifies the IAM
 * role that AgentCore uses to manage the Amazon EC2 instances for the capacity
 * provider on your behalf.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PermissionsConfiguration">AWS
 * API Reference</a></p>
 */
class PermissionsConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PermissionsConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PermissionsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PermissionsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that AgentCore assumes to
   * manage the capacity provider, including launching, tagging, and terminating
   * instances and their network interfaces. We recommend scoping this role to the
   * minimum permissions that your workloads require.</p>
   */
  inline const Aws::String& GetCapacityProviderOperatorRoleArn() const { return m_capacityProviderOperatorRoleArn; }
  inline bool CapacityProviderOperatorRoleArnHasBeenSet() const { return m_capacityProviderOperatorRoleArnHasBeenSet; }
  template <typename CapacityProviderOperatorRoleArnT = Aws::String>
  void SetCapacityProviderOperatorRoleArn(CapacityProviderOperatorRoleArnT&& value) {
    m_capacityProviderOperatorRoleArnHasBeenSet = true;
    m_capacityProviderOperatorRoleArn = std::forward<CapacityProviderOperatorRoleArnT>(value);
  }
  template <typename CapacityProviderOperatorRoleArnT = Aws::String>
  PermissionsConfiguration& WithCapacityProviderOperatorRoleArn(CapacityProviderOperatorRoleArnT&& value) {
    SetCapacityProviderOperatorRoleArn(std::forward<CapacityProviderOperatorRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderOperatorRoleArn;
  bool m_capacityProviderOperatorRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
