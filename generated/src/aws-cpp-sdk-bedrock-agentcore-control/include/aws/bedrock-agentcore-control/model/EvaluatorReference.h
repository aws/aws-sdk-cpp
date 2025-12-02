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
 * <p> The reference to an evaluator used in online evaluation configurations,
 * containing the evaluator identifier. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EvaluatorReference">AWS
 * API Reference</a></p>
 */
class EvaluatorReference {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorReference() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The unique identifier of the evaluator. Can reference builtin evaluators
   * (e.g., Builtin.Helpfulness) or custom evaluators. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluatorReference& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorId;
  bool m_evaluatorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
