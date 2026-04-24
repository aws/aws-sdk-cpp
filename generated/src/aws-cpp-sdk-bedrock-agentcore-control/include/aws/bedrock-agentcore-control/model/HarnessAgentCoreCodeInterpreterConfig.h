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
 * <p>Configuration for AgentCore Code Interpreter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessAgentCoreCodeInterpreterConfig">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreCodeInterpreterConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreCodeInterpreterConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreCodeInterpreterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreCodeInterpreterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>If not populated, the built-in Code Interpreter ARN is used.</p>
   */
  inline const Aws::String& GetCodeInterpreterArn() const { return m_codeInterpreterArn; }
  inline bool CodeInterpreterArnHasBeenSet() const { return m_codeInterpreterArnHasBeenSet; }
  template <typename CodeInterpreterArnT = Aws::String>
  void SetCodeInterpreterArn(CodeInterpreterArnT&& value) {
    m_codeInterpreterArnHasBeenSet = true;
    m_codeInterpreterArn = std::forward<CodeInterpreterArnT>(value);
  }
  template <typename CodeInterpreterArnT = Aws::String>
  HarnessAgentCoreCodeInterpreterConfig& WithCodeInterpreterArn(CodeInterpreterArnT&& value) {
    SetCodeInterpreterArn(std::forward<CodeInterpreterArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeInterpreterArn;
  bool m_codeInterpreterArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
