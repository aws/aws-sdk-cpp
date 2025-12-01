/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormMultiSelectQuestionAutomation.h>
#include <aws/connect/model/EvaluationFormMultiSelectQuestionDisplayMode.h>
#include <aws/connect/model/EvaluationFormMultiSelectQuestionOption.h>
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
 * <p>Properties for a multi-select question in an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormMultiSelectQuestionProperties">AWS
 * API Reference</a></p>
 */
class EvaluationFormMultiSelectQuestionProperties {
 public:
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionProperties() = default;
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Options available for this multi-select question.</p>
   */
  inline const Aws::Vector<EvaluationFormMultiSelectQuestionOption>& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = Aws::Vector<EvaluationFormMultiSelectQuestionOption>>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Aws::Vector<EvaluationFormMultiSelectQuestionOption>>
  EvaluationFormMultiSelectQuestionProperties& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  template <typename OptionsT = EvaluationFormMultiSelectQuestionOption>
  EvaluationFormMultiSelectQuestionProperties& AddOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options.emplace_back(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display format for the multi-select question.</p>
   */
  inline EvaluationFormMultiSelectQuestionDisplayMode GetDisplayAs() const { return m_displayAs; }
  inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }
  inline void SetDisplayAs(EvaluationFormMultiSelectQuestionDisplayMode value) {
    m_displayAsHasBeenSet = true;
    m_displayAs = value;
  }
  inline EvaluationFormMultiSelectQuestionProperties& WithDisplayAs(EvaluationFormMultiSelectQuestionDisplayMode value) {
    SetDisplayAs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Automation configuration for this multi-select question.</p>
   */
  inline const EvaluationFormMultiSelectQuestionAutomation& GetAutomation() const { return m_automation; }
  inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
  template <typename AutomationT = EvaluationFormMultiSelectQuestionAutomation>
  void SetAutomation(AutomationT&& value) {
    m_automationHasBeenSet = true;
    m_automation = std::forward<AutomationT>(value);
  }
  template <typename AutomationT = EvaluationFormMultiSelectQuestionAutomation>
  EvaluationFormMultiSelectQuestionProperties& WithAutomation(AutomationT&& value) {
    SetAutomation(std::forward<AutomationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationFormMultiSelectQuestionOption> m_options;
  bool m_optionsHasBeenSet = false;

  EvaluationFormMultiSelectQuestionDisplayMode m_displayAs{EvaluationFormMultiSelectQuestionDisplayMode::NOT_SET};
  bool m_displayAsHasBeenSet = false;

  EvaluationFormMultiSelectQuestionAutomation m_automation;
  bool m_automationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
