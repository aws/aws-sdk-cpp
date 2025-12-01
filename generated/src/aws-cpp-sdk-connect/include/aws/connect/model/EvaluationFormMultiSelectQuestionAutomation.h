/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormMultiSelectQuestionAutomationOption.h>
#include <aws/connect/model/EvaluationFormQuestionAutomationAnswerSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Automation configuration for multi-select questions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormMultiSelectQuestionAutomation">AWS
 * API Reference</a></p>
 */
class EvaluationFormMultiSelectQuestionAutomation {
 public:
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomation() = default;
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Automation options for the multi-select question.</p>
   */
  inline const Aws::Vector<EvaluationFormMultiSelectQuestionAutomationOption>& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = Aws::Vector<EvaluationFormMultiSelectQuestionAutomationOption>>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Aws::Vector<EvaluationFormMultiSelectQuestionAutomationOption>>
  EvaluationFormMultiSelectQuestionAutomation& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  template <typename OptionsT = EvaluationFormMultiSelectQuestionAutomationOption>
  EvaluationFormMultiSelectQuestionAutomation& AddOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options.emplace_back(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reference IDs of default options.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefaultOptionRefIds() const { return m_defaultOptionRefIds; }
  inline bool DefaultOptionRefIdsHasBeenSet() const { return m_defaultOptionRefIdsHasBeenSet; }
  template <typename DefaultOptionRefIdsT = Aws::Vector<Aws::String>>
  void SetDefaultOptionRefIds(DefaultOptionRefIdsT&& value) {
    m_defaultOptionRefIdsHasBeenSet = true;
    m_defaultOptionRefIds = std::forward<DefaultOptionRefIdsT>(value);
  }
  template <typename DefaultOptionRefIdsT = Aws::Vector<Aws::String>>
  EvaluationFormMultiSelectQuestionAutomation& WithDefaultOptionRefIds(DefaultOptionRefIdsT&& value) {
    SetDefaultOptionRefIds(std::forward<DefaultOptionRefIdsT>(value));
    return *this;
  }
  template <typename DefaultOptionRefIdsT = Aws::String>
  EvaluationFormMultiSelectQuestionAutomation& AddDefaultOptionRefIds(DefaultOptionRefIdsT&& value) {
    m_defaultOptionRefIdsHasBeenSet = true;
    m_defaultOptionRefIds.emplace_back(std::forward<DefaultOptionRefIdsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EvaluationFormQuestionAutomationAnswerSource& GetAnswerSource() const { return m_answerSource; }
  inline bool AnswerSourceHasBeenSet() const { return m_answerSourceHasBeenSet; }
  template <typename AnswerSourceT = EvaluationFormQuestionAutomationAnswerSource>
  void SetAnswerSource(AnswerSourceT&& value) {
    m_answerSourceHasBeenSet = true;
    m_answerSource = std::forward<AnswerSourceT>(value);
  }
  template <typename AnswerSourceT = EvaluationFormQuestionAutomationAnswerSource>
  EvaluationFormMultiSelectQuestionAutomation& WithAnswerSource(AnswerSourceT&& value) {
    SetAnswerSource(std::forward<AnswerSourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationFormMultiSelectQuestionAutomationOption> m_options;
  bool m_optionsHasBeenSet = false;

  Aws::Vector<Aws::String> m_defaultOptionRefIds;
  bool m_defaultOptionRefIdsHasBeenSet = false;

  EvaluationFormQuestionAutomationAnswerSource m_answerSource;
  bool m_answerSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
