/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormTextQuestionAutomation.h>

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
 * <p>Information about properties for a text question in an evaluation
 * form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormTextQuestionProperties">AWS
 * API Reference</a></p>
 */
class EvaluationFormTextQuestionProperties {
 public:
  AWS_CONNECT_API EvaluationFormTextQuestionProperties() = default;
  AWS_CONNECT_API EvaluationFormTextQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormTextQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The automation properties of the text question.</p>
   */
  inline const EvaluationFormTextQuestionAutomation& GetAutomation() const { return m_automation; }
  inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
  template <typename AutomationT = EvaluationFormTextQuestionAutomation>
  void SetAutomation(AutomationT&& value) {
    m_automationHasBeenSet = true;
    m_automation = std::forward<AutomationT>(value);
  }
  template <typename AutomationT = EvaluationFormTextQuestionAutomation>
  EvaluationFormTextQuestionProperties& WithAutomation(AutomationT&& value) {
    SetAutomation(std::forward<AutomationT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormTextQuestionAutomation m_automation;
  bool m_automationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
