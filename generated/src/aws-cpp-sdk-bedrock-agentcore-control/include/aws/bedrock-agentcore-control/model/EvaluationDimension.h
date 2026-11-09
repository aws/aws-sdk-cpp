/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DimensionRatingScale.h>
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
 * <p> A single dimension of an LLM-as-a-judge evaluator, defining what the
 * evaluator model should judge for that dimension and how it should be scored.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EvaluationDimension">AWS
 * API Reference</a></p>
 */
class EvaluationDimension {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EvaluationDimension() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EvaluationDimension(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EvaluationDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The name of the dimension. This name is unique within the evaluator and
   * identifies the dimension's results. </p>
   */
  inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
  inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
  template <typename DimensionNameT = Aws::String>
  void SetDimensionName(DimensionNameT&& value) {
    m_dimensionNameHasBeenSet = true;
    m_dimensionName = std::forward<DimensionNameT>(value);
  }
  template <typename DimensionNameT = Aws::String>
  EvaluationDimension& WithDimensionName(DimensionNameT&& value) {
    SetDimensionName(std::forward<DimensionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The instruction to the evaluator model for this dimension, describing what
   * the model should judge when scoring the dimension. </p>
   */
  inline const Aws::String& GetDimensionInstruction() const { return m_dimensionInstruction; }
  inline bool DimensionInstructionHasBeenSet() const { return m_dimensionInstructionHasBeenSet; }
  template <typename DimensionInstructionT = Aws::String>
  void SetDimensionInstruction(DimensionInstructionT&& value) {
    m_dimensionInstructionHasBeenSet = true;
    m_dimensionInstruction = std::forward<DimensionInstructionT>(value);
  }
  template <typename DimensionInstructionT = Aws::String>
  EvaluationDimension& WithDimensionInstruction(DimensionInstructionT&& value) {
    SetDimensionInstruction(std::forward<DimensionInstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The rating scale for this dimension, which can be numerical or categorical.
   * A dimension's rating scale cannot itself be multi-dimensional. </p>
   */
  inline const DimensionRatingScale& GetDimensionRatingScale() const { return m_dimensionRatingScale; }
  inline bool DimensionRatingScaleHasBeenSet() const { return m_dimensionRatingScaleHasBeenSet; }
  template <typename DimensionRatingScaleT = DimensionRatingScale>
  void SetDimensionRatingScale(DimensionRatingScaleT&& value) {
    m_dimensionRatingScaleHasBeenSet = true;
    m_dimensionRatingScale = std::forward<DimensionRatingScaleT>(value);
  }
  template <typename DimensionRatingScaleT = DimensionRatingScale>
  EvaluationDimension& WithDimensionRatingScale(DimensionRatingScaleT&& value) {
    SetDimensionRatingScale(std::forward<DimensionRatingScaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionName;

  Aws::String m_dimensionInstruction;

  DimensionRatingScale m_dimensionRatingScale;
  bool m_dimensionNameHasBeenSet = false;
  bool m_dimensionInstructionHasBeenSet = false;
  bool m_dimensionRatingScaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
