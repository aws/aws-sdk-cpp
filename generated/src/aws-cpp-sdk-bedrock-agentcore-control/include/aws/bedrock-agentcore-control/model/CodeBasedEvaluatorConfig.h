/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LambdaEvaluatorConfig.h>

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
 * <p> Configuration for a code-based evaluator. Specify the Lambda function to use
 * for evaluation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CodeBasedEvaluatorConfig">AWS
 * API Reference</a></p>
 */
class CodeBasedEvaluatorConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CodeBasedEvaluatorConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CodeBasedEvaluatorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CodeBasedEvaluatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Lambda function configuration for code-based evaluation. </p>
   */
  inline const LambdaEvaluatorConfig& GetLambdaConfig() const { return m_lambdaConfig; }
  inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
  template <typename LambdaConfigT = LambdaEvaluatorConfig>
  void SetLambdaConfig(LambdaConfigT&& value) {
    m_lambdaConfigHasBeenSet = true;
    m_lambdaConfig = std::forward<LambdaConfigT>(value);
  }
  template <typename LambdaConfigT = LambdaEvaluatorConfig>
  CodeBasedEvaluatorConfig& WithLambdaConfig(LambdaConfigT&& value) {
    SetLambdaConfig(std::forward<LambdaConfigT>(value));
    return *this;
  }
  ///@}
 private:
  LambdaEvaluatorConfig m_lambdaConfig;
  bool m_lambdaConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
