/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ColumnClassificationDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Parameters that control the generation of synthetic data for machine
 * learning, including privacy settings and column classification
 * details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MLSyntheticDataParameters">AWS
 * API Reference</a></p>
 */
class MLSyntheticDataParameters {
 public:
  AWS_CLEANROOMS_API MLSyntheticDataParameters() = default;
  AWS_CLEANROOMS_API MLSyntheticDataParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API MLSyntheticDataParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The epsilon value for differential privacy when generating synthetic data.
   * Lower values provide stronger privacy guarantees but may reduce data
   * utility.</p>
   */
  inline double GetEpsilon() const { return m_epsilon; }
  inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }
  inline void SetEpsilon(double value) {
    m_epsilonHasBeenSet = true;
    m_epsilon = value;
  }
  inline MLSyntheticDataParameters& WithEpsilon(double value) {
    SetEpsilon(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum acceptable score for membership inference attack vulnerability.
   * Synthetic data generation fails if the score for the resulting data exceeds this
   * threshold.</p>
   */
  inline double GetMaxMembershipInferenceAttackScore() const { return m_maxMembershipInferenceAttackScore; }
  inline bool MaxMembershipInferenceAttackScoreHasBeenSet() const { return m_maxMembershipInferenceAttackScoreHasBeenSet; }
  inline void SetMaxMembershipInferenceAttackScore(double value) {
    m_maxMembershipInferenceAttackScoreHasBeenSet = true;
    m_maxMembershipInferenceAttackScore = value;
  }
  inline MLSyntheticDataParameters& WithMaxMembershipInferenceAttackScore(double value) {
    SetMaxMembershipInferenceAttackScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Classification details for data columns that specify how each column should
   * be treated during synthetic data generation.</p>
   */
  inline const ColumnClassificationDetails& GetColumnClassification() const { return m_columnClassification; }
  inline bool ColumnClassificationHasBeenSet() const { return m_columnClassificationHasBeenSet; }
  template <typename ColumnClassificationT = ColumnClassificationDetails>
  void SetColumnClassification(ColumnClassificationT&& value) {
    m_columnClassificationHasBeenSet = true;
    m_columnClassification = std::forward<ColumnClassificationT>(value);
  }
  template <typename ColumnClassificationT = ColumnClassificationDetails>
  MLSyntheticDataParameters& WithColumnClassification(ColumnClassificationT&& value) {
    SetColumnClassification(std::forward<ColumnClassificationT>(value));
    return *this;
  }
  ///@}
 private:
  double m_epsilon{0.0};

  double m_maxMembershipInferenceAttackScore{0.0};

  ColumnClassificationDetails m_columnClassification;
  bool m_epsilonHasBeenSet = false;
  bool m_maxMembershipInferenceAttackScoreHasBeenSet = false;
  bool m_columnClassificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
