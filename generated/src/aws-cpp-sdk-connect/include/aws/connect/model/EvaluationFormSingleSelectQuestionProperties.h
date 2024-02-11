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
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties();
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The answer options of the single select question.</p>
     */
    inline const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline void SetOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline void SetOptions(Aws::Vector<EvaluationFormSingleSelectQuestionOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithOptions(Aws::Vector<EvaluationFormSingleSelectQuestionOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& AddOptions(const EvaluationFormSingleSelectQuestionOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The answer options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& AddOptions(EvaluationFormSingleSelectQuestionOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }


    /**
     * <p>The display mode of the single select question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionDisplayMode& GetDisplayAs() const{ return m_displayAs; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline void SetDisplayAs(const EvaluationFormSingleSelectQuestionDisplayMode& value) { m_displayAsHasBeenSet = true; m_displayAs = value; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline void SetDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode&& value) { m_displayAsHasBeenSet = true; m_displayAs = std::move(value); }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithDisplayAs(const EvaluationFormSingleSelectQuestionDisplayMode& value) { SetDisplayAs(value); return *this;}

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode&& value) { SetDisplayAs(std::move(value)); return *this;}


    /**
     * <p>The display mode of the single select question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionAutomation& GetAutomation() const{ return m_automation; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline void SetAutomation(const EvaluationFormSingleSelectQuestionAutomation& value) { m_automationHasBeenSet = true; m_automation = value; }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline void SetAutomation(EvaluationFormSingleSelectQuestionAutomation&& value) { m_automationHasBeenSet = true; m_automation = std::move(value); }

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithAutomation(const EvaluationFormSingleSelectQuestionAutomation& value) { SetAutomation(value); return *this;}

    /**
     * <p>The display mode of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionProperties& WithAutomation(EvaluationFormSingleSelectQuestionAutomation&& value) { SetAutomation(std::move(value)); return *this;}

  private:

    Aws::Vector<EvaluationFormSingleSelectQuestionOption> m_options;
    bool m_optionsHasBeenSet = false;

    EvaluationFormSingleSelectQuestionDisplayMode m_displayAs;
    bool m_displayAsHasBeenSet = false;

    EvaluationFormSingleSelectQuestionAutomation m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
