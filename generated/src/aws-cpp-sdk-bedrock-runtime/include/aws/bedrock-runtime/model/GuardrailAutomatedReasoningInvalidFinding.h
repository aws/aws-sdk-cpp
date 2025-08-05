/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslation.h>
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
   * <p>Indicates that the claims are logically false and contradictory to the
   * established rules or premises.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningInvalidFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningInvalidFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningInvalidFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningInvalidFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningInvalidFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical translation of the input that this finding invalidates.</p>
     */
    inline const GuardrailAutomatedReasoningTranslation& GetTranslation() const { return m_translation; }
    inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    void SetTranslation(TranslationT&& value) { m_translationHasBeenSet = true; m_translation = std::forward<TranslationT>(value); }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    GuardrailAutomatedReasoningInvalidFinding& WithTranslation(TranslationT&& value) { SetTranslation(std::forward<TranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automated reasoning policy rules that contradict the claims in the
     * input.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningRule>& GetContradictingRules() const { return m_contradictingRules; }
    inline bool ContradictingRulesHasBeenSet() const { return m_contradictingRulesHasBeenSet; }
    template<typename ContradictingRulesT = Aws::Vector<GuardrailAutomatedReasoningRule>>
    void SetContradictingRules(ContradictingRulesT&& value) { m_contradictingRulesHasBeenSet = true; m_contradictingRules = std::forward<ContradictingRulesT>(value); }
    template<typename ContradictingRulesT = Aws::Vector<GuardrailAutomatedReasoningRule>>
    GuardrailAutomatedReasoningInvalidFinding& WithContradictingRules(ContradictingRulesT&& value) { SetContradictingRules(std::forward<ContradictingRulesT>(value)); return *this;}
    template<typename ContradictingRulesT = GuardrailAutomatedReasoningRule>
    GuardrailAutomatedReasoningInvalidFinding& AddContradictingRules(ContradictingRulesT&& value) { m_contradictingRulesHasBeenSet = true; m_contradictingRules.emplace_back(std::forward<ContradictingRulesT>(value)); return *this; }
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
    GuardrailAutomatedReasoningInvalidFinding& WithLogicWarning(LogicWarningT&& value) { SetLogicWarning(std::forward<LogicWarningT>(value)); return *this;}
    ///@}
  private:

    GuardrailAutomatedReasoningTranslation m_translation;
    bool m_translationHasBeenSet = false;

    Aws::Vector<GuardrailAutomatedReasoningRule> m_contradictingRules;
    bool m_contradictingRulesHasBeenSet = false;

    GuardrailAutomatedReasoningLogicWarning m_logicWarning;
    bool m_logicWarningHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
