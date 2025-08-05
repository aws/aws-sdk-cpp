/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslation.h>
#include <aws/bedrock/model/AutomatedReasoningCheckScenario.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningCheckLogicWarning.h>
#include <aws/bedrock/model/AutomatedReasoningCheckRule.h>
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
   * <p>Indicates that the claims are definitively true and logically implied by the
   * premises, with no possible alternative interpretations.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckValidFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckValidFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckValidFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckValidFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckValidFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical translation of the input that this finding validates.</p>
     */
    inline const AutomatedReasoningCheckTranslation& GetTranslation() const { return m_translation; }
    inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
    template<typename TranslationT = AutomatedReasoningCheckTranslation>
    void SetTranslation(TranslationT&& value) { m_translationHasBeenSet = true; m_translation = std::forward<TranslationT>(value); }
    template<typename TranslationT = AutomatedReasoningCheckTranslation>
    AutomatedReasoningCheckValidFinding& WithTranslation(TranslationT&& value) { SetTranslation(std::forward<TranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example scenario demonstrating how the claims are logically true.</p>
     */
    inline const AutomatedReasoningCheckScenario& GetClaimsTrueScenario() const { return m_claimsTrueScenario; }
    inline bool ClaimsTrueScenarioHasBeenSet() const { return m_claimsTrueScenarioHasBeenSet; }
    template<typename ClaimsTrueScenarioT = AutomatedReasoningCheckScenario>
    void SetClaimsTrueScenario(ClaimsTrueScenarioT&& value) { m_claimsTrueScenarioHasBeenSet = true; m_claimsTrueScenario = std::forward<ClaimsTrueScenarioT>(value); }
    template<typename ClaimsTrueScenarioT = AutomatedReasoningCheckScenario>
    AutomatedReasoningCheckValidFinding& WithClaimsTrueScenario(ClaimsTrueScenarioT&& value) { SetClaimsTrueScenario(std::forward<ClaimsTrueScenarioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automated reasoning policy rules that support why this result is
     * considered valid.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckRule>& GetSupportingRules() const { return m_supportingRules; }
    inline bool SupportingRulesHasBeenSet() const { return m_supportingRulesHasBeenSet; }
    template<typename SupportingRulesT = Aws::Vector<AutomatedReasoningCheckRule>>
    void SetSupportingRules(SupportingRulesT&& value) { m_supportingRulesHasBeenSet = true; m_supportingRules = std::forward<SupportingRulesT>(value); }
    template<typename SupportingRulesT = Aws::Vector<AutomatedReasoningCheckRule>>
    AutomatedReasoningCheckValidFinding& WithSupportingRules(SupportingRulesT&& value) { SetSupportingRules(std::forward<SupportingRulesT>(value)); return *this;}
    template<typename SupportingRulesT = AutomatedReasoningCheckRule>
    AutomatedReasoningCheckValidFinding& AddSupportingRules(SupportingRulesT&& value) { m_supportingRulesHasBeenSet = true; m_supportingRules.emplace_back(std::forward<SupportingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indication of a logic issue with the translation without needing to consider
     * the automated reasoning policy rules.</p>
     */
    inline const AutomatedReasoningCheckLogicWarning& GetLogicWarning() const { return m_logicWarning; }
    inline bool LogicWarningHasBeenSet() const { return m_logicWarningHasBeenSet; }
    template<typename LogicWarningT = AutomatedReasoningCheckLogicWarning>
    void SetLogicWarning(LogicWarningT&& value) { m_logicWarningHasBeenSet = true; m_logicWarning = std::forward<LogicWarningT>(value); }
    template<typename LogicWarningT = AutomatedReasoningCheckLogicWarning>
    AutomatedReasoningCheckValidFinding& WithLogicWarning(LogicWarningT&& value) { SetLogicWarning(std::forward<LogicWarningT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningCheckTranslation m_translation;
    bool m_translationHasBeenSet = false;

    AutomatedReasoningCheckScenario m_claimsTrueScenario;
    bool m_claimsTrueScenarioHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckRule> m_supportingRules;
    bool m_supportingRulesHasBeenSet = false;

    AutomatedReasoningCheckLogicWarning m_logicWarning;
    bool m_logicWarningHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
