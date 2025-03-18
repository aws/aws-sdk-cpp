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
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation() = default;
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automation options of the single select question.</p>
     */
    inline const Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption>>
    EvaluationFormSingleSelectQuestionAutomation& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = EvaluationFormSingleSelectQuestionAutomationOption>
    EvaluationFormSingleSelectQuestionAutomation& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the default answer option, when none of the automation
     * options match the criteria.</p>
     */
    inline const Aws::String& GetDefaultOptionRefId() const { return m_defaultOptionRefId; }
    inline bool DefaultOptionRefIdHasBeenSet() const { return m_defaultOptionRefIdHasBeenSet; }
    template<typename DefaultOptionRefIdT = Aws::String>
    void SetDefaultOptionRefId(DefaultOptionRefIdT&& value) { m_defaultOptionRefIdHasBeenSet = true; m_defaultOptionRefId = std::forward<DefaultOptionRefIdT>(value); }
    template<typename DefaultOptionRefIdT = Aws::String>
    EvaluationFormSingleSelectQuestionAutomation& WithDefaultOptionRefId(DefaultOptionRefIdT&& value) { SetDefaultOptionRefId(std::forward<DefaultOptionRefIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationFormSingleSelectQuestionAutomationOption> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_defaultOptionRefId;
    bool m_defaultOptionRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
