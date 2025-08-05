/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslationOption.h>
#include <aws/bedrock/model/AutomatedReasoningCheckScenario.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Indicates that the input has multiple valid logical interpretations,
   * requiring additional context or clarification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckTranslationAmbiguousFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckTranslationAmbiguousFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationAmbiguousFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationAmbiguousFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationAmbiguousFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Different logical interpretations that were detected during translation of
     * the input.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckTranslationOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<AutomatedReasoningCheckTranslationOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<AutomatedReasoningCheckTranslationOption>>
    AutomatedReasoningCheckTranslationAmbiguousFinding& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = AutomatedReasoningCheckTranslationOption>
    AutomatedReasoningCheckTranslationAmbiguousFinding& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scenarios showing how the different translation options differ in
     * meaning.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckScenario>& GetDifferenceScenarios() const { return m_differenceScenarios; }
    inline bool DifferenceScenariosHasBeenSet() const { return m_differenceScenariosHasBeenSet; }
    template<typename DifferenceScenariosT = Aws::Vector<AutomatedReasoningCheckScenario>>
    void SetDifferenceScenarios(DifferenceScenariosT&& value) { m_differenceScenariosHasBeenSet = true; m_differenceScenarios = std::forward<DifferenceScenariosT>(value); }
    template<typename DifferenceScenariosT = Aws::Vector<AutomatedReasoningCheckScenario>>
    AutomatedReasoningCheckTranslationAmbiguousFinding& WithDifferenceScenarios(DifferenceScenariosT&& value) { SetDifferenceScenarios(std::forward<DifferenceScenariosT>(value)); return *this;}
    template<typename DifferenceScenariosT = AutomatedReasoningCheckScenario>
    AutomatedReasoningCheckTranslationAmbiguousFinding& AddDifferenceScenarios(DifferenceScenariosT&& value) { m_differenceScenariosHasBeenSet = true; m_differenceScenarios.emplace_back(std::forward<DifferenceScenariosT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedReasoningCheckTranslationOption> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckScenario> m_differenceScenarios;
    bool m_differenceScenariosHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
