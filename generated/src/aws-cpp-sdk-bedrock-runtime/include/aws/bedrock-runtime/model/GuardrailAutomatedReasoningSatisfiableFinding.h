/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslation.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningScenario.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningLogicWarning.h>
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
   * <p>Indicates that the claims could be either true or false depending on
   * additional assumptions not provided in the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningSatisfiableFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningSatisfiableFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningSatisfiableFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningSatisfiableFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningSatisfiableFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical translation of the input that this finding evaluates.</p>
     */
    inline const GuardrailAutomatedReasoningTranslation& GetTranslation() const { return m_translation; }
    inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    void SetTranslation(TranslationT&& value) { m_translationHasBeenSet = true; m_translation = std::forward<TranslationT>(value); }
    template<typename TranslationT = GuardrailAutomatedReasoningTranslation>
    GuardrailAutomatedReasoningSatisfiableFinding& WithTranslation(TranslationT&& value) { SetTranslation(std::forward<TranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example scenario demonstrating how the claims could be logically true.</p>
     */
    inline const GuardrailAutomatedReasoningScenario& GetClaimsTrueScenario() const { return m_claimsTrueScenario; }
    inline bool ClaimsTrueScenarioHasBeenSet() const { return m_claimsTrueScenarioHasBeenSet; }
    template<typename ClaimsTrueScenarioT = GuardrailAutomatedReasoningScenario>
    void SetClaimsTrueScenario(ClaimsTrueScenarioT&& value) { m_claimsTrueScenarioHasBeenSet = true; m_claimsTrueScenario = std::forward<ClaimsTrueScenarioT>(value); }
    template<typename ClaimsTrueScenarioT = GuardrailAutomatedReasoningScenario>
    GuardrailAutomatedReasoningSatisfiableFinding& WithClaimsTrueScenario(ClaimsTrueScenarioT&& value) { SetClaimsTrueScenario(std::forward<ClaimsTrueScenarioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example scenario demonstrating how the claims could be logically
     * false.</p>
     */
    inline const GuardrailAutomatedReasoningScenario& GetClaimsFalseScenario() const { return m_claimsFalseScenario; }
    inline bool ClaimsFalseScenarioHasBeenSet() const { return m_claimsFalseScenarioHasBeenSet; }
    template<typename ClaimsFalseScenarioT = GuardrailAutomatedReasoningScenario>
    void SetClaimsFalseScenario(ClaimsFalseScenarioT&& value) { m_claimsFalseScenarioHasBeenSet = true; m_claimsFalseScenario = std::forward<ClaimsFalseScenarioT>(value); }
    template<typename ClaimsFalseScenarioT = GuardrailAutomatedReasoningScenario>
    GuardrailAutomatedReasoningSatisfiableFinding& WithClaimsFalseScenario(ClaimsFalseScenarioT&& value) { SetClaimsFalseScenario(std::forward<ClaimsFalseScenarioT>(value)); return *this;}
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
    GuardrailAutomatedReasoningSatisfiableFinding& WithLogicWarning(LogicWarningT&& value) { SetLogicWarning(std::forward<LogicWarningT>(value)); return *this;}
    ///@}
  private:

    GuardrailAutomatedReasoningTranslation m_translation;
    bool m_translationHasBeenSet = false;

    GuardrailAutomatedReasoningScenario m_claimsTrueScenario;
    bool m_claimsTrueScenarioHasBeenSet = false;

    GuardrailAutomatedReasoningScenario m_claimsFalseScenario;
    bool m_claimsFalseScenarioHasBeenSet = false;

    GuardrailAutomatedReasoningLogicWarning m_logicWarning;
    bool m_logicWarningHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
