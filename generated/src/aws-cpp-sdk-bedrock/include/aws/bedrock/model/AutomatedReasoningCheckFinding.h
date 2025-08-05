/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckValidFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckInvalidFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckSatisfiableFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckImpossibleFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslationAmbiguousFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTooComplexFinding.h>
#include <aws/bedrock/model/AutomatedReasoningCheckNoTranslationsFinding.h>
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
   * <p>Represents the result of an Automated Reasoning validation check, indicating
   * whether the content is logically valid, invalid, or falls into other categories
   * based on the policy rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that the claims are true. The claims are implied by the premises
     * and the Automated Reasoning policy. Given the Automated Reasoning policy and
     * premises, it is not possible for these claims to be false.</p>
     */
    inline const AutomatedReasoningCheckValidFinding& GetValid() const { return m_valid; }
    inline bool ValidHasBeenSet() const { return m_validHasBeenSet; }
    template<typename ValidT = AutomatedReasoningCheckValidFinding>
    void SetValid(ValidT&& value) { m_validHasBeenSet = true; m_valid = std::forward<ValidT>(value); }
    template<typename ValidT = AutomatedReasoningCheckValidFinding>
    AutomatedReasoningCheckFinding& WithValid(ValidT&& value) { SetValid(std::forward<ValidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the claims are false. The claims are not implied by the
     * premises and Automated Reasoning policy. Furthermore, there exist different
     * claims that are consistent with the premises and Automated Reasoning policy.</p>
     */
    inline const AutomatedReasoningCheckInvalidFinding& GetInvalid() const { return m_invalid; }
    inline bool InvalidHasBeenSet() const { return m_invalidHasBeenSet; }
    template<typename InvalidT = AutomatedReasoningCheckInvalidFinding>
    void SetInvalid(InvalidT&& value) { m_invalidHasBeenSet = true; m_invalid = std::forward<InvalidT>(value); }
    template<typename InvalidT = AutomatedReasoningCheckInvalidFinding>
    AutomatedReasoningCheckFinding& WithInvalid(InvalidT&& value) { SetInvalid(std::forward<InvalidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the claims can be true or false. It depends on what
     * assumptions are made for the claim to be implied from the premises and Automated
     * Reasoning policy rules. In this situation, different assumptions can make input
     * claims false and alternative claims true.</p>
     */
    inline const AutomatedReasoningCheckSatisfiableFinding& GetSatisfiable() const { return m_satisfiable; }
    inline bool SatisfiableHasBeenSet() const { return m_satisfiableHasBeenSet; }
    template<typename SatisfiableT = AutomatedReasoningCheckSatisfiableFinding>
    void SetSatisfiable(SatisfiableT&& value) { m_satisfiableHasBeenSet = true; m_satisfiable = std::forward<SatisfiableT>(value); }
    template<typename SatisfiableT = AutomatedReasoningCheckSatisfiableFinding>
    AutomatedReasoningCheckFinding& WithSatisfiable(SatisfiableT&& value) { SetSatisfiable(std::forward<SatisfiableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that Automated Reasoning cannot make a statement about the claims.
     * This can happen if the premises are logically incorrect, or if there is a
     * conflict within the Automated Reasoning policy itself.</p>
     */
    inline const AutomatedReasoningCheckImpossibleFinding& GetImpossible() const { return m_impossible; }
    inline bool ImpossibleHasBeenSet() const { return m_impossibleHasBeenSet; }
    template<typename ImpossibleT = AutomatedReasoningCheckImpossibleFinding>
    void SetImpossible(ImpossibleT&& value) { m_impossibleHasBeenSet = true; m_impossible = std::forward<ImpossibleT>(value); }
    template<typename ImpossibleT = AutomatedReasoningCheckImpossibleFinding>
    AutomatedReasoningCheckFinding& WithImpossible(ImpossibleT&& value) { SetImpossible(std::forward<ImpossibleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that an ambiguity was detected in the translation, making it
     * unsound to continue with validity checking. Additional context or follow-up
     * questions might be needed to get translation to succeed.</p>
     */
    inline const AutomatedReasoningCheckTranslationAmbiguousFinding& GetTranslationAmbiguous() const { return m_translationAmbiguous; }
    inline bool TranslationAmbiguousHasBeenSet() const { return m_translationAmbiguousHasBeenSet; }
    template<typename TranslationAmbiguousT = AutomatedReasoningCheckTranslationAmbiguousFinding>
    void SetTranslationAmbiguous(TranslationAmbiguousT&& value) { m_translationAmbiguousHasBeenSet = true; m_translationAmbiguous = std::forward<TranslationAmbiguousT>(value); }
    template<typename TranslationAmbiguousT = AutomatedReasoningCheckTranslationAmbiguousFinding>
    AutomatedReasoningCheckFinding& WithTranslationAmbiguous(TranslationAmbiguousT&& value) { SetTranslationAmbiguous(std::forward<TranslationAmbiguousT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the input contains too much information for Automated
     * Reasoning to process within its latency limits.</p>
     */
    inline const AutomatedReasoningCheckTooComplexFinding& GetTooComplex() const { return m_tooComplex; }
    inline bool TooComplexHasBeenSet() const { return m_tooComplexHasBeenSet; }
    template<typename TooComplexT = AutomatedReasoningCheckTooComplexFinding>
    void SetTooComplex(TooComplexT&& value) { m_tooComplexHasBeenSet = true; m_tooComplex = std::forward<TooComplexT>(value); }
    template<typename TooComplexT = AutomatedReasoningCheckTooComplexFinding>
    AutomatedReasoningCheckFinding& WithTooComplex(TooComplexT&& value) { SetTooComplex(std::forward<TooComplexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies that some or all of the input prompt wasn't translated into logic.
     * This can happen if the input isn't relevant to the Automated Reasoning policy,
     * or if the policy doesn't have variables to model relevant input.</p>
     */
    inline const AutomatedReasoningCheckNoTranslationsFinding& GetNoTranslations() const { return m_noTranslations; }
    inline bool NoTranslationsHasBeenSet() const { return m_noTranslationsHasBeenSet; }
    template<typename NoTranslationsT = AutomatedReasoningCheckNoTranslationsFinding>
    void SetNoTranslations(NoTranslationsT&& value) { m_noTranslationsHasBeenSet = true; m_noTranslations = std::forward<NoTranslationsT>(value); }
    template<typename NoTranslationsT = AutomatedReasoningCheckNoTranslationsFinding>
    AutomatedReasoningCheckFinding& WithNoTranslations(NoTranslationsT&& value) { SetNoTranslations(std::forward<NoTranslationsT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningCheckValidFinding m_valid;
    bool m_validHasBeenSet = false;

    AutomatedReasoningCheckInvalidFinding m_invalid;
    bool m_invalidHasBeenSet = false;

    AutomatedReasoningCheckSatisfiableFinding m_satisfiable;
    bool m_satisfiableHasBeenSet = false;

    AutomatedReasoningCheckImpossibleFinding m_impossible;
    bool m_impossibleHasBeenSet = false;

    AutomatedReasoningCheckTranslationAmbiguousFinding m_translationAmbiguous;
    bool m_translationAmbiguousHasBeenSet = false;

    AutomatedReasoningCheckTooComplexFinding m_tooComplex;
    bool m_tooComplexHasBeenSet = false;

    AutomatedReasoningCheckNoTranslationsFinding m_noTranslations;
    bool m_noTranslationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
