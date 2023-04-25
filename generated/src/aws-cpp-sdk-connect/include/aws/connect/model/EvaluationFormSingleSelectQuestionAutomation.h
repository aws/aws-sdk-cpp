/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormSingleSelectQuestionAutomationOption.h>
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
   * <p>Information about the automation configuration in single select questions.
   * Automation options are evaluated in order, and the first matched option is
   * applied. If no automation option matches, and there is a default option, then
   * the default option is applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSingleSelectQuestionAutomation">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSingleSelectQuestionAutomation
  {
  public:
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation();
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The automation options of the single select question.</p>
     */
    inline const Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline void SetOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline void SetOptions(Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& WithOptions(const Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& WithOptions(Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& AddOptions(const EvaluationFormSingleSelectQuestionAutomationOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The automation options of the single select question.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& AddOptions(EvaluationFormSingleSelectQuestionAutomationOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline const Aws::String& GetDefaultOptionRefId() const{ return m_defaultOptionRefId; }

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline bool DefaultOptionRefIdHasBeenSet() const { return m_defaultOptionRefIdHasBeenSet; }

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline void SetDefaultOptionRefId(const Aws::String& value) { m_defaultOptionRefIdHasBeenSet = true; m_defaultOptionRefId = value; }

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline void SetDefaultOptionRefId(Aws::String&& value) { m_defaultOptionRefIdHasBeenSet = true; m_defaultOptionRefId = std::move(value); }

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline void SetDefaultOptionRefId(const char* value) { m_defaultOptionRefIdHasBeenSet = true; m_defaultOptionRefId.assign(value); }

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& WithDefaultOptionRefId(const Aws::String& value) { SetDefaultOptionRefId(value); return *this;}

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& WithDefaultOptionRefId(Aws::String&& value) { SetDefaultOptionRefId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline EvaluationFormSingleSelectQuestionAutomation& WithDefaultOptionRefId(const char* value) { SetDefaultOptionRefId(value); return *this;}

  private:

    Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_defaultOptionRefId;
    bool m_defaultOptionRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
