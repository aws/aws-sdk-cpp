/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslation.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningScenario.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningLogicWarning.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningRule.h>
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
   * <p>Indicates that the claims are definitively true and logically implied by the
   * premises, with no possible alternative interpretations.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningValidFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningValidFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningValidFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningValidFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningValidFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical translation of the input that this finding validates.</p>
     */
    inline const GuardrailAutomatedReasoningTranslation& GetTranslation() const { return m_translation; }
    inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    void SetTranslation(TranslationT&& value) { m_translationHasBeenSet = true; m_translation = std::forward<TranslationT>(value); }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    GuardrailAutomatedReasoningValidFinding& WithTranslation(TranslationT&& value) { SetTranslation(std::forward<TranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example scenario demonstrating how the claims are logically true.</p>
     */
    inline const GuardrailAutomatedReasoningScenario& GetClaimsTrueScenario() const { return m_claimsTrueScenario; }
    inline bool ClaimsTrueScenarioHasBeenSet() const { return m_claimsTrueScenarioHasBeenSet; }
    template<typename ClaimsTrueScenarioT = GuardrailAutomatedReasoningScenario>
    void SetClaimsTrueScenario(ClaimsTrueScenarioT&& value) { m_claimsTrueScenarioHasBeenSet = true; m_claimsTrueScenario = std::forward<ClaimsTrueScenarioT>(value); }
    template<typename ClaimsTrueScenarioT = GuardrailAutomatedReasoningScenario>
    GuardrailAutomatedReasoningValidFinding& WithClaimsTrueScenario(ClaimsTrueScenarioT&& value) { SetClaimsTrueScenario(std::forward<ClaimsTrueScenarioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automated reasoning policy rules that support why this result is
     * considered valid.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningRule>& GetSupportingRules() const { return m_supportingRules; }
    inline bool SupportingRulesHasBeenSet() const { return m_supportingRulesHasBeenSet; }
    template<typename SupportingRulesT = Aws::Vector<GuardrailAutomatedReasoningRule>>
    void SetSupportingRules(SupportingRulesT&& value) { m_supportingRulesHasBeenSet = true; m_supportingRules = std::forward<SupportingRulesT>(value); }
    template<typename SupportingRulesT = Aws::Vector<GuardrailAutomatedReasoningRule>>
    GuardrailAutomatedReasoningValidFinding& WithSupportingRules(SupportingRulesT&& value) { SetSupportingRules(std::forward<SupportingRulesT>(value)); return *this;}
    template<typename SupportingRulesT = GuardrailAutomatedReasoningRule>
    GuardrailAutomatedReasoningValidFinding& AddSupportingRules(SupportingRulesT&& value) { m_supportingRulesHasBeenSet = true; m_supportingRules.emplace_back(std::forward<SupportingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indication of a logic issue with the translation without needing to consider
     * the automated reasoning policy rules.</p>
     */
    inline const GuardrailAutomatedReasoningLogicWarning& GetLogicWarning() const { return m_logicWarning; }
    inline bool LogicWarningHasBeenSet() const { return m_logicWarningHasBeenSet; }
    template<typename LogicWarningT = GuardrailAutomatedReasoningLogicWarning>
    void SetLogicWarning(LogicWarningT&& value) { m_logicWarningHasBeenSet = true; m_logicWarning = std::forward<LogicWarningT>(value); }
    template<typename LogicWarningT = GuardrailAutomatedReasoningLogicWarning>
    GuardrailAutomatedReasoningValidFinding& WithLogicWarning(LogicWarningT&& value) { SetLogicWarning(std::forward<LogicWarningT>(value)); return *this;}
    ///@}
  private:

    GuardrailAutomatedReasoningTranslation m_translation;
    bool m_translationHasBeenSet = false;

    GuardrailAutomatedReasoningScenario m_claimsTrueScenario;
    bool m_claimsTrueScenarioHasBeenSet = false;

    Aws::Vector<GuardrailAutomatedReasoningRule> m_supportingRules;
    bool m_supportingRulesHasBeenSet = false;

    GuardrailAutomatedReasoningLogicWarning m_logicWarning;
    bool m_logicWarningHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
