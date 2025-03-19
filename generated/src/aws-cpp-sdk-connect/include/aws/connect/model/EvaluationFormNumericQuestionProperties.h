/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EvaluationFormNumericQuestionAutomation.h>
#include <aws/connect/model/EvaluationFormNumericQuestionOption.h>
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
   * <p>Information about properties for a numeric question in an evaluation
   * form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormNumericQuestionProperties">AWS
   * API Reference</a></p>
   */
  class EvaluationFormNumericQuestionProperties
  {
  public:
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties() = default;
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum answer value.</p>
     */
    inline int GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline EvaluationFormNumericQuestionProperties& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum answer value.</p>
     */
    inline int GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline EvaluationFormNumericQuestionProperties& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline const Aws::Vector<EvaluationFormNumericQuestionOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<EvaluationFormNumericQuestionOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<EvaluationFormNumericQuestionOption>>
    EvaluationFormNumericQuestionProperties& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = EvaluationFormNumericQuestionOption>
    EvaluationFormNumericQuestionProperties& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline const EvaluationFormNumericQuestionAutomation& GetAutomation() const { return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    template<typename AutomationT = EvaluationFormNumericQuestionAutomation>
    void SetAutomation(AutomationT&& value) { m_automationHasBeenSet = true; m_automation = std::forward<AutomationT>(value); }
    template<typename AutomationT = EvaluationFormNumericQuestionAutomation>
    EvaluationFormNumericQuestionProperties& WithAutomation(AutomationT&& value) { SetAutomation(std::forward<AutomationT>(value)); return *this;}
    ///@}
  private:

    int m_minValue{0};
    bool m_minValueHasBeenSet = false;

    int m_maxValue{0};
    bool m_maxValueHasBeenSet = false;

    Aws::Vector<EvaluationFormNumericQuestionOption> m_options;
    bool m_optionsHasBeenSet = false;

    EvaluationFormNumericQuestionAutomation m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
