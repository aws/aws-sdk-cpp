/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationAnswerData.h>
#include <aws/connect/model/EvaluationQuestionAnswerAnalysisDetails.h>
#include <aws/connect/model/EvaluationQuestionAnswerAnalysisType.h>
#include <aws/connect/model/EvaluationQuestionInputDetails.h>
#include <aws/connect/model/EvaluationSuggestedAnswerStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The information about the suggested answer for the question.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSuggestedAnswer">AWS
 * API Reference</a></p>
 */
class EvaluationSuggestedAnswer {
 public:
  AWS_CONNECT_API EvaluationSuggestedAnswer() = default;
  AWS_CONNECT_API EvaluationSuggestedAnswer(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationSuggestedAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const EvaluationAnswerData& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = EvaluationAnswerData>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = EvaluationAnswerData>
  EvaluationSuggestedAnswer& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the suggested answer. D</p>
   */
  inline EvaluationSuggestedAnswerStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationSuggestedAnswerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationSuggestedAnswer& WithStatus(EvaluationSuggestedAnswerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the input used to question automation.</p>
   */
  inline const EvaluationQuestionInputDetails& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = EvaluationQuestionInputDetails>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = EvaluationQuestionInputDetails>
  EvaluationSuggestedAnswer& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of analysis used to provide suggested answer.</p>
   */
  inline EvaluationQuestionAnswerAnalysisType GetAnalysisType() const { return m_analysisType; }
  inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
  inline void SetAnalysisType(EvaluationQuestionAnswerAnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline EvaluationSuggestedAnswer& WithAnalysisType(EvaluationQuestionAnswerAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed analysis results.</p>
   */
  inline const EvaluationQuestionAnswerAnalysisDetails& GetAnalysisDetails() const { return m_analysisDetails; }
  inline bool AnalysisDetailsHasBeenSet() const { return m_analysisDetailsHasBeenSet; }
  template <typename AnalysisDetailsT = EvaluationQuestionAnswerAnalysisDetails>
  void SetAnalysisDetails(AnalysisDetailsT&& value) {
    m_analysisDetailsHasBeenSet = true;
    m_analysisDetails = std::forward<AnalysisDetailsT>(value);
  }
  template <typename AnalysisDetailsT = EvaluationQuestionAnswerAnalysisDetails>
  EvaluationSuggestedAnswer& WithAnalysisDetails(AnalysisDetailsT&& value) {
    SetAnalysisDetails(std::forward<AnalysisDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationAnswerData m_value;

  EvaluationSuggestedAnswerStatus m_status{EvaluationSuggestedAnswerStatus::NOT_SET};

  EvaluationQuestionInputDetails m_input;

  EvaluationQuestionAnswerAnalysisType m_analysisType{EvaluationQuestionAnswerAnalysisType::NOT_SET};

  EvaluationQuestionAnswerAnalysisDetails m_analysisDetails;
  bool m_valueHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_analysisDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
