/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/DataPrivacyScores.h>

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
 * <p>Comprehensive evaluation metrics for synthetic data that assess both the
 * utility of the generated data for machine learning tasks and its privacy
 * preservation characteristics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/SyntheticDataEvaluationScores">AWS
 * API Reference</a></p>
 */
class SyntheticDataEvaluationScores {
 public:
  AWS_CLEANROOMSML_API SyntheticDataEvaluationScores() = default;
  AWS_CLEANROOMSML_API SyntheticDataEvaluationScores(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API SyntheticDataEvaluationScores& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Privacy-specific evaluation scores that measure how well the synthetic data
   * protects individual privacy, including assessments of potential privacy risks
   * such as membership inference attacks.</p>
   */
  inline const DataPrivacyScores& GetDataPrivacyScores() const { return m_dataPrivacyScores; }
  inline bool DataPrivacyScoresHasBeenSet() const { return m_dataPrivacyScoresHasBeenSet; }
  template <typename DataPrivacyScoresT = DataPrivacyScores>
  void SetDataPrivacyScores(DataPrivacyScoresT&& value) {
    m_dataPrivacyScoresHasBeenSet = true;
    m_dataPrivacyScores = std::forward<DataPrivacyScoresT>(value);
  }
  template <typename DataPrivacyScoresT = DataPrivacyScores>
  SyntheticDataEvaluationScores& WithDataPrivacyScores(DataPrivacyScoresT&& value) {
    SetDataPrivacyScores(std::forward<DataPrivacyScoresT>(value));
    return *this;
  }
  ///@}
 private:
  DataPrivacyScores m_dataPrivacyScores;
  bool m_dataPrivacyScoresHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
