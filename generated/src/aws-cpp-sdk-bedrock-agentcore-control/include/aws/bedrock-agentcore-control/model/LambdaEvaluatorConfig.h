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
 * <p> Configuration for a Lambda function used as a code-based evaluator.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LambdaEvaluatorConfig">AWS
 * API Reference</a></p>
 */
class LambdaEvaluatorConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LambdaEvaluatorConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LambdaEvaluatorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LambdaEvaluatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the Lambda function that implements the
   * evaluation logic. </p>
   */
  inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
  inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
  template <typename LambdaArnT = Aws::String>
  void SetLambdaArn(LambdaArnT&& value) {
    m_lambdaArnHasBeenSet = true;
    m_lambdaArn = std::forward<LambdaArnT>(value);
  }
  template <typename LambdaArnT = Aws::String>
  LambdaEvaluatorConfig& WithLambdaArn(LambdaArnT&& value) {
    SetLambdaArn(std::forward<LambdaArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timeout in seconds for the Lambda function invocation. Defaults to 60.
   * Must be between 1 and 300. </p>
   */
  inline int GetLambdaTimeoutInSeconds() const { return m_lambdaTimeoutInSeconds; }
  inline bool LambdaTimeoutInSecondsHasBeenSet() const { return m_lambdaTimeoutInSecondsHasBeenSet; }
  inline void SetLambdaTimeoutInSeconds(int value) {
    m_lambdaTimeoutInSecondsHasBeenSet = true;
    m_lambdaTimeoutInSeconds = value;
  }
  inline LambdaEvaluatorConfig& WithLambdaTimeoutInSeconds(int value) {
    SetLambdaTimeoutInSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_lambdaArn;

  int m_lambdaTimeoutInSeconds{0};
  bool m_lambdaArnHasBeenSet = false;
  bool m_lambdaTimeoutInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
