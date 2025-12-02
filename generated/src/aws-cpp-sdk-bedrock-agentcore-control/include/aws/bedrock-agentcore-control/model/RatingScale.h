/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CategoricalScaleDefinition.h>
#include <aws/bedrock-agentcore-control/model/NumericalScaleDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p> The rating scale that defines how evaluators should score agent performance,
 * supporting both numerical and categorical scales. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RatingScale">AWS
 * API Reference</a></p>
 */
class RatingScale {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RatingScale() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RatingScale(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RatingScale& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The numerical rating scale with defined score values and descriptions for
   * quantitative evaluation. </p>
   */
  inline const Aws::Vector<NumericalScaleDefinition>& GetNumerical() const { return m_numerical; }
  inline bool NumericalHasBeenSet() const { return m_numericalHasBeenSet; }
  template <typename NumericalT = Aws::Vector<NumericalScaleDefinition>>
  void SetNumerical(NumericalT&& value) {
    m_numericalHasBeenSet = true;
    m_numerical = std::forward<NumericalT>(value);
  }
  template <typename NumericalT = Aws::Vector<NumericalScaleDefinition>>
  RatingScale& WithNumerical(NumericalT&& value) {
    SetNumerical(std::forward<NumericalT>(value));
    return *this;
  }
  template <typename NumericalT = NumericalScaleDefinition>
  RatingScale& AddNumerical(NumericalT&& value) {
    m_numericalHasBeenSet = true;
    m_numerical.emplace_back(std::forward<NumericalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The categorical rating scale with named categories and definitions for
   * qualitative evaluation. </p>
   */
  inline const Aws::Vector<CategoricalScaleDefinition>& GetCategorical() const { return m_categorical; }
  inline bool CategoricalHasBeenSet() const { return m_categoricalHasBeenSet; }
  template <typename CategoricalT = Aws::Vector<CategoricalScaleDefinition>>
  void SetCategorical(CategoricalT&& value) {
    m_categoricalHasBeenSet = true;
    m_categorical = std::forward<CategoricalT>(value);
  }
  template <typename CategoricalT = Aws::Vector<CategoricalScaleDefinition>>
  RatingScale& WithCategorical(CategoricalT&& value) {
    SetCategorical(std::forward<CategoricalT>(value));
    return *this;
  }
  template <typename CategoricalT = CategoricalScaleDefinition>
  RatingScale& AddCategorical(CategoricalT&& value) {
    m_categoricalHasBeenSet = true;
    m_categorical.emplace_back(std::forward<CategoricalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NumericalScaleDefinition> m_numerical;
  bool m_numericalHasBeenSet = false;

  Aws::Vector<CategoricalScaleDefinition> m_categorical;
  bool m_categoricalHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
