/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/MLSyntheticDataParameters.h>
#include <aws/cleanroomsml/model/SyntheticDataEvaluationScores.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>Configuration settings for synthetic data generation, including the
 * parameters that control data synthesis and the evaluation scores that measure
 * the quality and privacy characteristics of the generated synthetic
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/SyntheticDataConfiguration">AWS
 * API Reference</a></p>
 */
class SyntheticDataConfiguration {
 public:
  AWS_CLEANROOMSML_API SyntheticDataConfiguration() = default;
  AWS_CLEANROOMSML_API SyntheticDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API SyntheticDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameters that control how synthetic data is generated, including
   * privacy settings, column classifications, and other configuration options that
   * affect the data synthesis process.</p>
   */
  inline const MLSyntheticDataParameters& GetSyntheticDataParameters() const { return m_syntheticDataParameters; }
  inline bool SyntheticDataParametersHasBeenSet() const { return m_syntheticDataParametersHasBeenSet; }
  template <typename SyntheticDataParametersT = MLSyntheticDataParameters>
  void SetSyntheticDataParameters(SyntheticDataParametersT&& value) {
    m_syntheticDataParametersHasBeenSet = true;
    m_syntheticDataParameters = std::forward<SyntheticDataParametersT>(value);
  }
  template <typename SyntheticDataParametersT = MLSyntheticDataParameters>
  SyntheticDataConfiguration& WithSyntheticDataParameters(SyntheticDataParametersT&& value) {
    SetSyntheticDataParameters(std::forward<SyntheticDataParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evaluation scores that assess the quality and privacy characteristics of the
   * generated synthetic data, providing metrics on data utility and privacy
   * preservation.</p>
   */
  inline const SyntheticDataEvaluationScores& GetSyntheticDataEvaluationScores() const { return m_syntheticDataEvaluationScores; }
  inline bool SyntheticDataEvaluationScoresHasBeenSet() const { return m_syntheticDataEvaluationScoresHasBeenSet; }
  template <typename SyntheticDataEvaluationScoresT = SyntheticDataEvaluationScores>
  void SetSyntheticDataEvaluationScores(SyntheticDataEvaluationScoresT&& value) {
    m_syntheticDataEvaluationScoresHasBeenSet = true;
    m_syntheticDataEvaluationScores = std::forward<SyntheticDataEvaluationScoresT>(value);
  }
  template <typename SyntheticDataEvaluationScoresT = SyntheticDataEvaluationScores>
  SyntheticDataConfiguration& WithSyntheticDataEvaluationScores(SyntheticDataEvaluationScoresT&& value) {
    SetSyntheticDataEvaluationScores(std::forward<SyntheticDataEvaluationScoresT>(value));
    return *this;
  }
  ///@}
 private:
  MLSyntheticDataParameters m_syntheticDataParameters;
  bool m_syntheticDataParametersHasBeenSet = false;

  SyntheticDataEvaluationScores m_syntheticDataEvaluationScores;
  bool m_syntheticDataEvaluationScoresHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
