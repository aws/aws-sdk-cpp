/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationAnswerData.h>
#include <aws/connect/model/EvaluationSuggestedAnswer.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Information about output answers for a contact evaluation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAnswerOutput">AWS
 * API Reference</a></p>
 */
class EvaluationAnswerOutput {
 public:
  AWS_CONNECT_API EvaluationAnswerOutput() = default;
  AWS_CONNECT_API EvaluationAnswerOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationAnswerOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value for an answer in a contact evaluation.</p>
   */
  inline const EvaluationAnswerData& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = EvaluationAnswerData>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = EvaluationAnswerData>
  EvaluationAnswerOutput& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system suggested value for an answer in a contact evaluation.</p>
   */
  inline const EvaluationAnswerData& GetSystemSuggestedValue() const { return m_systemSuggestedValue; }
  inline bool SystemSuggestedValueHasBeenSet() const { return m_systemSuggestedValueHasBeenSet; }
  template <typename SystemSuggestedValueT = EvaluationAnswerData>
  void SetSystemSuggestedValue(SystemSuggestedValueT&& value) {
    m_systemSuggestedValueHasBeenSet = true;
    m_systemSuggestedValue = std::forward<SystemSuggestedValueT>(value);
  }
  template <typename SystemSuggestedValueT = EvaluationAnswerData>
  EvaluationAnswerOutput& WithSystemSuggestedValue(SystemSuggestedValueT&& value) {
    SetSystemSuggestedValue(std::forward<SystemSuggestedValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Automation suggested answers for the questions.</p>
   */
  inline const Aws::Vector<EvaluationSuggestedAnswer>& GetSuggestedAnswers() const { return m_suggestedAnswers; }
  inline bool SuggestedAnswersHasBeenSet() const { return m_suggestedAnswersHasBeenSet; }
  template <typename SuggestedAnswersT = Aws::Vector<EvaluationSuggestedAnswer>>
  void SetSuggestedAnswers(SuggestedAnswersT&& value) {
    m_suggestedAnswersHasBeenSet = true;
    m_suggestedAnswers = std::forward<SuggestedAnswersT>(value);
  }
  template <typename SuggestedAnswersT = Aws::Vector<EvaluationSuggestedAnswer>>
  EvaluationAnswerOutput& WithSuggestedAnswers(SuggestedAnswersT&& value) {
    SetSuggestedAnswers(std::forward<SuggestedAnswersT>(value));
    return *this;
  }
  template <typename SuggestedAnswersT = EvaluationSuggestedAnswer>
  EvaluationAnswerOutput& AddSuggestedAnswers(SuggestedAnswersT&& value) {
    m_suggestedAnswersHasBeenSet = true;
    m_suggestedAnswers.emplace_back(std::forward<SuggestedAnswersT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationAnswerData m_value;

  EvaluationAnswerData m_systemSuggestedValue;

  Aws::Vector<EvaluationSuggestedAnswer> m_suggestedAnswers;
  bool m_valueHasBeenSet = false;
  bool m_systemSuggestedValueHasBeenSet = false;
  bool m_suggestedAnswersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
