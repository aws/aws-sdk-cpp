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
 * <p>Configuration for customer-managed compute capacity for the AgentCore
 * Runtime. A capacity provider runs the AgentCore Runtime on the Instances compute
 * type, using Amazon Web Services managed compute in your account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CapacityProviderConfiguration">AWS
 * API Reference</a></p>
 */
class CapacityProviderConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider to use for the
   * AgentCore Runtime.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  CapacityProviderConfiguration& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderArn;
  bool m_capacityProviderArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
