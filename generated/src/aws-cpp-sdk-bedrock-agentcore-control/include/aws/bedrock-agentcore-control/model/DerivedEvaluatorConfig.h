/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorModelConfig.h>
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
 * <p> The configuration for a derived evaluator. It reuses an existing evaluator's
 * logic on your own model. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DerivedEvaluatorConfig">AWS
 * API Reference</a></p>
 */
class DerivedEvaluatorConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DerivedEvaluatorConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DerivedEvaluatorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API DerivedEvaluatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier of the base evaluator whose logic to run (a
   * <code>Builtin.*</code> or <code>ThirdParty.*</code> evaluator). </p>
   */
  inline const Aws::String& GetBaseEvaluatorId() const { return m_baseEvaluatorId; }
  inline bool BaseEvaluatorIdHasBeenSet() const { return m_baseEvaluatorIdHasBeenSet; }
  template <typename BaseEvaluatorIdT = Aws::String>
  void SetBaseEvaluatorId(BaseEvaluatorIdT&& value) {
    m_baseEvaluatorIdHasBeenSet = true;
    m_baseEvaluatorId = std::forward<BaseEvaluatorIdT>(value);
  }
  template <typename BaseEvaluatorIdT = Aws::String>
  DerivedEvaluatorConfig& WithBaseEvaluatorId(BaseEvaluatorIdT&& value) {
    SetBaseEvaluatorId(std::forward<BaseEvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The configuration of the evaluator model that you supply. </p>
   */
  inline const EvaluatorModelConfig& GetModelConfig() const { return m_modelConfig; }
  inline bool ModelConfigHasBeenSet() const { return m_modelConfigHasBeenSet; }
  template <typename ModelConfigT = EvaluatorModelConfig>
  void SetModelConfig(ModelConfigT&& value) {
    m_modelConfigHasBeenSet = true;
    m_modelConfig = std::forward<ModelConfigT>(value);
  }
  template <typename ModelConfigT = EvaluatorModelConfig>
  DerivedEvaluatorConfig& WithModelConfig(ModelConfigT&& value) {
    SetModelConfig(std::forward<ModelConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseEvaluatorId;

  EvaluatorModelConfig m_modelConfig;
  bool m_baseEvaluatorIdHasBeenSet = false;
  bool m_modelConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
