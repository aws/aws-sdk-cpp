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
 * <p> The reasoning configuration that controls how a reasoning model allocates
 * effort during evaluation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ReasoningConfiguration">AWS
 * API Reference</a></p>
 */
class ReasoningConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ReasoningConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ReasoningConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ReasoningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The level of reasoning effort the model applies when generating a response.
   * For supported values, see the model provider's documentation. </p>
   */
  inline const Aws::String& GetEffort() const { return m_effort; }
  inline bool EffortHasBeenSet() const { return m_effortHasBeenSet; }
  template <typename EffortT = Aws::String>
  void SetEffort(EffortT&& value) {
    m_effortHasBeenSet = true;
    m_effort = std::forward<EffortT>(value);
  }
  template <typename EffortT = Aws::String>
  ReasoningConfiguration& WithEffort(EffortT&& value) {
    SetEffort(std::forward<EffortT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_effort;
  bool m_effortHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
