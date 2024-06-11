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


    ///@{
    /**
     * <p>The answer options of the single select question.</p>
     */
    inline const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::Vector<EvaluationFormSingleSelectQuestionOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline EvaluationFormSingleSelectQuestionProperties& WithOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionOption>& value) { SetOptions(value); return *this;}
    inline EvaluationFormSingleSelectQuestionProperties& WithOptions(Aws::Vector<EvaluationFormSingleSelectQuestionOption>&& value) { SetOptions(std::move(value)); return *this;}
    inline EvaluationFormSingleSelectQuestionProperties& AddOptions(const EvaluationFormSingleSelectQuestionOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    inline EvaluationFormSingleSelectQuestionProperties& AddOptions(EvaluationFormSingleSelectQuestionOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display mode of the single select question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionDisplayMode& GetDisplayAs() const{ return m_displayAs; }
    inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }
    inline void SetDisplayAs(const EvaluationFormSingleSelectQuestionDisplayMode& value) { m_displayAsHasBeenSet = true; m_displayAs = value; }
    inline void SetDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode&& value) { m_displayAsHasBeenSet = true; m_displayAs = std::move(value); }
    inline EvaluationFormSingleSelectQuestionProperties& WithDisplayAs(const EvaluationFormSingleSelectQuestionDisplayMode& value) { SetDisplayAs(value); return *this;}
    inline EvaluationFormSingleSelectQuestionProperties& WithDisplayAs(EvaluationFormSingleSelectQuestionDisplayMode&& value) { SetDisplayAs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display mode of the single select question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionAutomation& GetAutomation() const{ return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    inline void SetAutomation(const EvaluationFormSingleSelectQuestionAutomation& value) { m_automationHasBeenSet = true; m_automation = value; }
    inline void SetAutomation(EvaluationFormSingleSelectQuestionAutomation&& value) { m_automationHasBeenSet = true; m_automation = std::move(value); }
    inline EvaluationFormSingleSelectQuestionProperties& WithAutomation(const EvaluationFormSingleSelectQuestionAutomation& value) { SetAutomation(value); return *this;}
    inline EvaluationFormSingleSelectQuestionProperties& WithAutomation(EvaluationFormSingleSelectQuestionAutomation&& value) { SetAutomation(std::move(value)); return *this;}
    ///@}
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
