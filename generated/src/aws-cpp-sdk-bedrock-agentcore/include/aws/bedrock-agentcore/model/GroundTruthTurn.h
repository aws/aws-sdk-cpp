/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluationContent.h>
#include <aws/bedrock-agentcore/model/GroundTruthTurnInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Ground truth data for a single conversation turn.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GroundTruthTurn">AWS
 * API Reference</a></p>
 */
class GroundTruthTurn {
 public:
  AWS_BEDROCKAGENTCORE_API GroundTruthTurn() = default;
  AWS_BEDROCKAGENTCORE_API GroundTruthTurn(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GroundTruthTurn& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input for this conversation turn.</p>
   */
  inline const GroundTruthTurnInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = GroundTruthTurnInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = GroundTruthTurnInput>
  GroundTruthTurn& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected response for this conversation turn.</p>
   */
  inline const EvaluationContent& GetExpectedResponse() const { return m_expectedResponse; }
  inline bool ExpectedResponseHasBeenSet() const { return m_expectedResponseHasBeenSet; }
  template <typename ExpectedResponseT = EvaluationContent>
  void SetExpectedResponse(ExpectedResponseT&& value) {
    m_expectedResponseHasBeenSet = true;
    m_expectedResponse = std::forward<ExpectedResponseT>(value);
  }
  template <typename ExpectedResponseT = EvaluationContent>
  GroundTruthTurn& WithExpectedResponse(ExpectedResponseT&& value) {
    SetExpectedResponse(std::forward<ExpectedResponseT>(value));
    return *this;
  }
  ///@}
 private:
  GroundTruthTurnInput m_input;

  EvaluationContent m_expectedResponse;
  bool m_inputHasBeenSet = false;
  bool m_expectedResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
