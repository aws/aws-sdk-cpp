/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningValidFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningInvalidFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningSatisfiableFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningImpossibleFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslationAmbiguousFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTooComplexFinding.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningNoTranslationsFinding.h>
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
   * <p>Represents a logical validation result from automated reasoning policy
   * evaluation. The finding indicates whether claims in the input are logically
   * valid, invalid, satisfiable, impossible, or have other logical
   * issues.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation determines that
     * the claims in the input are logically valid and definitively true based on the
     * provided premises and policy rules.</p>
     */
    inline const GuardrailAutomatedReasoningValidFinding& GetValid() const { return m_valid; }
    inline bool ValidHasBeenSet() const { return m_validHasBeenSet; }
    template<typename ValidT = GuardrailAutomatedReasoningValidFinding>
    void SetValid(ValidT&& value) { m_validHasBeenSet = true; m_valid = std::forward<ValidT>(value); }
    template<typename ValidT = GuardrailAutomatedReasoningValidFinding>
    GuardrailAutomatedReasoningFinding& WithValid(ValidT&& value) { SetValid(std::forward<ValidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation determines that
     * the claims in the input are logically invalid and contradict the established
     * premises or policy rules.</p>
     */
    inline const GuardrailAutomatedReasoningInvalidFinding& GetInvalid() const { return m_invalid; }
    inline bool InvalidHasBeenSet() const { return m_invalidHasBeenSet; }
    template<typename InvalidT = GuardrailAutomatedReasoningInvalidFinding>
    void SetInvalid(InvalidT&& value) { m_invalidHasBeenSet = true; m_invalid = std::forward<InvalidT>(value); }
    template<typename InvalidT = GuardrailAutomatedReasoningInvalidFinding>
    GuardrailAutomatedReasoningFinding& WithInvalid(InvalidT&& value) { SetInvalid(std::forward<InvalidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation determines that
     * the claims in the input could be either true or false depending on additional
     * assumptions not provided in the input context.</p>
     */
    inline const GuardrailAutomatedReasoningSatisfiableFinding& GetSatisfiable() const { return m_satisfiable; }
    inline bool SatisfiableHasBeenSet() const { return m_satisfiableHasBeenSet; }
    template<typename SatisfiableT = GuardrailAutomatedReasoningSatisfiableFinding>
    void SetSatisfiable(SatisfiableT&& value) { m_satisfiableHasBeenSet = true; m_satisfiable = std::forward<SatisfiableT>(value); }
    template<typename SatisfiableT = GuardrailAutomatedReasoningSatisfiableFinding>
    GuardrailAutomatedReasoningFinding& WithSatisfiable(SatisfiableT&& value) { SetSatisfiable(std::forward<SatisfiableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation determines that
     * no valid logical conclusions can be drawn due to contradictions in the premises
     * or policy rules themselves.</p>
     */
    inline const GuardrailAutomatedReasoningImpossibleFinding& GetImpossible() const { return m_impossible; }
    inline bool ImpossibleHasBeenSet() const { return m_impossibleHasBeenSet; }
    template<typename ImpossibleT = GuardrailAutomatedReasoningImpossibleFinding>
    void SetImpossible(ImpossibleT&& value) { m_impossibleHasBeenSet = true; m_impossible = std::forward<ImpossibleT>(value); }
    template<typename ImpossibleT = GuardrailAutomatedReasoningImpossibleFinding>
    GuardrailAutomatedReasoningFinding& WithImpossible(ImpossibleT&& value) { SetImpossible(std::forward<ImpossibleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation detects that the
     * input has multiple valid logical interpretations, requiring additional context
     * or clarification to proceed with validation.</p>
     */
    inline const GuardrailAutomatedReasoningTranslationAmbiguousFinding& GetTranslationAmbiguous() const { return m_translationAmbiguous; }
    inline bool TranslationAmbiguousHasBeenSet() const { return m_translationAmbiguousHasBeenSet; }
    template<typename TranslationAmbiguousT = GuardrailAutomatedReasoningTranslationAmbiguousFinding>
    void SetTranslationAmbiguous(TranslationAmbiguousT&& value) { m_translationAmbiguousHasBeenSet = true; m_translationAmbiguous = std::forward<TranslationAmbiguousT>(value); }
    template<typename TranslationAmbiguousT = GuardrailAutomatedReasoningTranslationAmbiguousFinding>
    GuardrailAutomatedReasoningFinding& WithTranslationAmbiguous(TranslationAmbiguousT&& value) { SetTranslationAmbiguous(std::forward<TranslationAmbiguousT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation cannot process
     * the input due to its complexity or volume exceeding the system's processing
     * capacity for logical analysis.</p>
     */
    inline const GuardrailAutomatedReasoningTooComplexFinding& GetTooComplex() const { return m_tooComplex; }
    inline bool TooComplexHasBeenSet() const { return m_tooComplexHasBeenSet; }
    template<typename TooComplexT = GuardrailAutomatedReasoningTooComplexFinding>
    void SetTooComplex(TooComplexT&& value) { m_tooComplexHasBeenSet = true; m_tooComplex = std::forward<TooComplexT>(value); }
    template<typename TooComplexT = GuardrailAutomatedReasoningTooComplexFinding>
    GuardrailAutomatedReasoningFinding& WithTooComplex(TooComplexT&& value) { SetTooComplex(std::forward<TooComplexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the result when the automated reasoning evaluation cannot extract
     * any relevant logical information from the input that can be validated against
     * the policy rules.</p>
     */
    inline const GuardrailAutomatedReasoningNoTranslationsFinding& GetNoTranslations() const { return m_noTranslations; }
    inline bool NoTranslationsHasBeenSet() const { return m_noTranslationsHasBeenSet; }
    template<typename NoTranslationsT = GuardrailAutomatedReasoningNoTranslationsFinding>
    void SetNoTranslations(NoTranslationsT&& value) { m_noTranslationsHasBeenSet = true; m_noTranslations = std::forward<NoTranslationsT>(value); }
    template<typename NoTranslationsT = GuardrailAutomatedReasoningNoTranslationsFinding>
    GuardrailAutomatedReasoningFinding& WithNoTranslations(NoTranslationsT&& value) { SetNoTranslations(std::forward<NoTranslationsT>(value)); return *this;}
    ///@}
  private:

    GuardrailAutomatedReasoningValidFinding m_valid;
    bool m_validHasBeenSet = false;

    GuardrailAutomatedReasoningInvalidFinding m_invalid;
    bool m_invalidHasBeenSet = false;

    GuardrailAutomatedReasoningSatisfiableFinding m_satisfiable;
    bool m_satisfiableHasBeenSet = false;

    GuardrailAutomatedReasoningImpossibleFinding m_impossible;
    bool m_impossibleHasBeenSet = false;

    GuardrailAutomatedReasoningTranslationAmbiguousFinding m_translationAmbiguous;
    bool m_translationAmbiguousHasBeenSet = false;

    GuardrailAutomatedReasoningTooComplexFinding m_tooComplex;
    bool m_tooComplexHasBeenSet = false;

    GuardrailAutomatedReasoningNoTranslationsFinding m_noTranslations;
    bool m_noTranslationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
