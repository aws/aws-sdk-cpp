/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormQuestionAutomationAnswerSource.h>

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
 * <p>Information about the automation configuration in text
 * questions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormTextQuestionAutomation">AWS
 * API Reference</a></p>
 */
class EvaluationFormTextQuestionAutomation {
 public:
  AWS_CONNECT_API EvaluationFormTextQuestionAutomation() = default;
  AWS_CONNECT_API EvaluationFormTextQuestionAutomation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormTextQuestionAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Automation answer source.</p>
   */
  inline const EvaluationFormQuestionAutomationAnswerSource& GetAnswerSource() const { return m_answerSource; }
  inline bool AnswerSourceHasBeenSet() const { return m_answerSourceHasBeenSet; }
  template <typename AnswerSourceT = EvaluationFormQuestionAutomationAnswerSource>
  void SetAnswerSource(AnswerSourceT&& value) {
    m_answerSourceHasBeenSet = true;
    m_answerSource = std::forward<AnswerSourceT>(value);
  }
  template <typename AnswerSourceT = EvaluationFormQuestionAutomationAnswerSource>
  EvaluationFormTextQuestionAutomation& WithAnswerSource(AnswerSourceT&& value) {
    SetAnswerSource(std::forward<AnswerSourceT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormQuestionAutomationAnswerSource m_answerSource;
  bool m_answerSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
