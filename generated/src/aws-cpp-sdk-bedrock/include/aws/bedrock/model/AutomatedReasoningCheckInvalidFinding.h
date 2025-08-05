/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslation.h>
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
   * <p>Indicates that the claims are logically false and contradictory to the
   * established rules or premises.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckInvalidFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckInvalidFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckInvalidFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckInvalidFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckInvalidFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical translation of the input that this finding invalidates.</p>
     */
    inline const AutomatedReasoningCheckTranslation& GetTranslation() const { return m_translation; }
    inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
    template<typename TranslationT = AutomatedReasoningCheckTranslation>
    void SetTranslation(TranslationT&& value) { m_translationHasBeenSet = true; m_translation = std::forward<TranslationT>(value); }
    template<typename TranslationT = AutomatedReasoningCheckTranslation>
    AutomatedReasoningCheckInvalidFinding& WithTranslation(TranslationT&& value) { SetTranslation(std::forward<TranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automated reasoning policy rules that contradict the claims in the
     * input.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckRule>& GetContradictingRules() const { return m_contradictingRules; }
    inline bool ContradictingRulesHasBeenSet() const { return m_contradictingRulesHasBeenSet; }
    template<typename ContradictingRulesT = Aws::Vector<AutomatedReasoningCheckRule>>
    void SetContradictingRules(ContradictingRulesT&& value) { m_contradictingRulesHasBeenSet = true; m_contradictingRules = std::forward<ContradictingRulesT>(value); }
    template<typename ContradictingRulesT = Aws::Vector<AutomatedReasoningCheckRule>>
    AutomatedReasoningCheckInvalidFinding& WithContradictingRules(ContradictingRulesT&& value) { SetContradictingRules(std::forward<ContradictingRulesT>(value)); return *this;}
    template<typename ContradictingRulesT = AutomatedReasoningCheckRule>
    AutomatedReasoningCheckInvalidFinding& AddContradictingRules(ContradictingRulesT&& value) { m_contradictingRulesHasBeenSet = true; m_contradictingRules.emplace_back(std::forward<ContradictingRulesT>(value)); return *this; }
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
    AutomatedReasoningCheckInvalidFinding& WithLogicWarning(LogicWarningT&& value) { SetLogicWarning(std::forward<LogicWarningT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningCheckTranslation m_translation;
    bool m_translationHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckRule> m_contradictingRules;
    bool m_contradictingRulesHasBeenSet = false;

    AutomatedReasoningCheckLogicWarning m_logicWarning;
    bool m_logicWarningHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
