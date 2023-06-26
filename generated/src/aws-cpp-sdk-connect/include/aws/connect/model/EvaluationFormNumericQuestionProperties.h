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
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties();
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormNumericQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum answer value.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum answer value.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum answer value.</p>
     */
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum answer value.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithMinValue(int value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum answer value.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum answer value.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum answer value.</p>
     */
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum answer value.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithMaxValue(int value) { SetMaxValue(value); return *this;}


    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline const Aws::Vector<EvaluationFormNumericQuestionOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline void SetOptions(const Aws::Vector<EvaluationFormNumericQuestionOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline void SetOptions(Aws::Vector<EvaluationFormNumericQuestionOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithOptions(const Aws::Vector<EvaluationFormNumericQuestionOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithOptions(Aws::Vector<EvaluationFormNumericQuestionOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& AddOptions(const EvaluationFormNumericQuestionOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The scoring options of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& AddOptions(EvaluationFormNumericQuestionOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }


    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline const EvaluationFormNumericQuestionAutomation& GetAutomation() const{ return m_automation; }

    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }

    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline void SetAutomation(const EvaluationFormNumericQuestionAutomation& value) { m_automationHasBeenSet = true; m_automation = value; }

    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline void SetAutomation(EvaluationFormNumericQuestionAutomation&& value) { m_automationHasBeenSet = true; m_automation = std::move(value); }

    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithAutomation(const EvaluationFormNumericQuestionAutomation& value) { SetAutomation(value); return *this;}

    /**
     * <p>The automation properties of the numeric question.</p>
     */
    inline EvaluationFormNumericQuestionProperties& WithAutomation(EvaluationFormNumericQuestionAutomation&& value) { SetAutomation(std::move(value)); return *this;}

  private:

    int m_minValue;
    bool m_minValueHasBeenSet = false;

    int m_maxValue;
    bool m_maxValueHasBeenSet = false;

    Aws::Vector<EvaluationFormNumericQuestionOption> m_options;
    bool m_optionsHasBeenSet = false;

    EvaluationFormNumericQuestionAutomation m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
