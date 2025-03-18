/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EvaluationFormSingleSelectQuestionDisplayMode.h>
#include <aws/connect/model/EvaluationFormSingleSelectQuestionAutomation.h>
#include <aws/connect/model/EvaluationFormSingleSelectQuestionOption.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the options in single select questions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSingleSelectQuestionProperties">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSingleSelectQuestionProperties
  {
  public:
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties() = default;
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The answer options of the single select question.</p>
     */
    inline const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<EvaluationFormSingleSelectQuestionOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<EvaluationFormSingleSelectQuestionOption>>
    EvaluationFormSingleSelectQuestionProperties& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = EvaluationFormSingleSelectQuestionOption>
    EvaluationFormSingleSelectQuestionProperties& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display mode of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionDisplayMode GetDisplayAs() const { return m_displayAs; }
    inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }
    inline void SetDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode value) { m_displayAsHasBeenSet = true; m_displayAs = value; }
    inline EvaluationFormSingleSelectQuestionProperties& WithDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode value) { SetDisplayAs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display mode of the single select question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionAutomation& GetAutomation() const { return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    template<typename AutomationT = EvaluationFormSingleSelectQuestionAutomation>
    void SetAutomation(AutomationT&& value) { m_automationHasBeenSet = true; m_automation = std::forward<AutomationT>(value); }
    template<typename AutomationT = EvaluationFormSingleSelectQuestionAutomation>
    EvaluationFormSingleSelectQuestionProperties& WithAutomation(AutomationT&& value) { SetAutomation(std::forward<AutomationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationFormSingleSelectQuestionOption> m_options;
    bool m_optionsHasBeenSet = false;

    EvaluationFormSingleSelectQuestionDisplayMode m_displayAs{EvaluationFormSingleSelectQuestionDisplayMode::NOT_SET};
    bool m_displayAsHasBeenSet = false;

    EvaluationFormSingleSelectQuestionAutomation m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
