/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslationOption.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningScenario.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Indicates that the input has multiple valid logical interpretations,
   * requiring additional context or clarification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningTranslationAmbiguousFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningTranslationAmbiguousFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationAmbiguousFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationAmbiguousFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationAmbiguousFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Different logical interpretations that were detected during translation of
     * the input.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningTranslationOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<GuardrailAutomatedReasoningTranslationOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<GuardrailAutomatedReasoningTranslationOption>>
    GuardrailAutomatedReasoningTranslationAmbiguousFinding& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = GuardrailAutomatedReasoningTranslationOption>
    GuardrailAutomatedReasoningTranslationAmbiguousFinding& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scenarios showing how the different translation options differ in
     * meaning.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningScenario>& GetDifferenceScenarios() const { return m_differenceScenarios; }
    inline bool DifferenceScenariosHasBeenSet() const { return m_differenceScenariosHasBeenSet; }
    template<typename DifferenceScenariosT = Aws::Vector<GuardrailAutomatedReasoningScenario>>
    void SetDifferenceScenarios(DifferenceScenariosT&& value) { m_differenceScenariosHasBeenSet = true; m_differenceScenarios = std::forward<DifferenceScenariosT>(value); }
    template<typename DifferenceScenariosT = Aws::Vector<GuardrailAutomatedReasoningScenario>>
    GuardrailAutomatedReasoningTranslationAmbiguousFinding& WithDifferenceScenarios(DifferenceScenariosT&& value) { SetDifferenceScenarios(std::forward<DifferenceScenariosT>(value)); return *this;}
    template<typename DifferenceScenariosT = GuardrailAutomatedReasoningScenario>
    GuardrailAutomatedReasoningTranslationAmbiguousFinding& AddDifferenceScenarios(DifferenceScenariosT&& value) { m_differenceScenariosHasBeenSet = true; m_differenceScenarios.emplace_back(std::forward<DifferenceScenariosT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailAutomatedReasoningTranslationOption> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<GuardrailAutomatedReasoningScenario> m_differenceScenarios;
    bool m_differenceScenariosHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
