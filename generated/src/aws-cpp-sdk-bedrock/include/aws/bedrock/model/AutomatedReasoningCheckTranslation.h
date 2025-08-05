/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningLogicStatement.h>
#include <aws/bedrock/model/AutomatedReasoningCheckInputTextReference.h>
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
   * <p>Contains the logical translation of natural language input into formal
   * logical statements, including premises, claims, and confidence
   * scores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckTranslation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckTranslation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckTranslation() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckTranslation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckTranslation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical statements that serve as the foundation or assumptions for the
     * claims.</p>
     */
    inline const Aws::Vector<AutomatedReasoningLogicStatement>& GetPremises() const { return m_premises; }
    inline bool PremisesHasBeenSet() const { return m_premisesHasBeenSet; }
    template<typename PremisesT = Aws::Vector<AutomatedReasoningLogicStatement>>
    void SetPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises = std::forward<PremisesT>(value); }
    template<typename PremisesT = Aws::Vector<AutomatedReasoningLogicStatement>>
    AutomatedReasoningCheckTranslation& WithPremises(PremisesT&& value) { SetPremises(std::forward<PremisesT>(value)); return *this;}
    template<typename PremisesT = AutomatedReasoningLogicStatement>
    AutomatedReasoningCheckTranslation& AddPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises.emplace_back(std::forward<PremisesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical statements that are being validated against the premises and
     * policy rules.</p>
     */
    inline const Aws::Vector<AutomatedReasoningLogicStatement>& GetClaims() const { return m_claims; }
    inline bool ClaimsHasBeenSet() const { return m_claimsHasBeenSet; }
    template<typename ClaimsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    void SetClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims = std::forward<ClaimsT>(value); }
    template<typename ClaimsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    AutomatedReasoningCheckTranslation& WithClaims(ClaimsT&& value) { SetClaims(std::forward<ClaimsT>(value)); return *this;}
    template<typename ClaimsT = AutomatedReasoningLogicStatement>
    AutomatedReasoningCheckTranslation& AddClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims.emplace_back(std::forward<ClaimsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>References to portions of the original input text that correspond to the
     * premises but could not be fully translated.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckInputTextReference>& GetUntranslatedPremises() const { return m_untranslatedPremises; }
    inline bool UntranslatedPremisesHasBeenSet() const { return m_untranslatedPremisesHasBeenSet; }
    template<typename UntranslatedPremisesT = Aws::Vector<AutomatedReasoningCheckInputTextReference>>
    void SetUntranslatedPremises(UntranslatedPremisesT&& value) { m_untranslatedPremisesHasBeenSet = true; m_untranslatedPremises = std::forward<UntranslatedPremisesT>(value); }
    template<typename UntranslatedPremisesT = Aws::Vector<AutomatedReasoningCheckInputTextReference>>
    AutomatedReasoningCheckTranslation& WithUntranslatedPremises(UntranslatedPremisesT&& value) { SetUntranslatedPremises(std::forward<UntranslatedPremisesT>(value)); return *this;}
    template<typename UntranslatedPremisesT = AutomatedReasoningCheckInputTextReference>
    AutomatedReasoningCheckTranslation& AddUntranslatedPremises(UntranslatedPremisesT&& value) { m_untranslatedPremisesHasBeenSet = true; m_untranslatedPremises.emplace_back(std::forward<UntranslatedPremisesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>References to portions of the original input text that correspond to the
     * claims but could not be fully translated.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckInputTextReference>& GetUntranslatedClaims() const { return m_untranslatedClaims; }
    inline bool UntranslatedClaimsHasBeenSet() const { return m_untranslatedClaimsHasBeenSet; }
    template<typename UntranslatedClaimsT = Aws::Vector<AutomatedReasoningCheckInputTextReference>>
    void SetUntranslatedClaims(UntranslatedClaimsT&& value) { m_untranslatedClaimsHasBeenSet = true; m_untranslatedClaims = std::forward<UntranslatedClaimsT>(value); }
    template<typename UntranslatedClaimsT = Aws::Vector<AutomatedReasoningCheckInputTextReference>>
    AutomatedReasoningCheckTranslation& WithUntranslatedClaims(UntranslatedClaimsT&& value) { SetUntranslatedClaims(std::forward<UntranslatedClaimsT>(value)); return *this;}
    template<typename UntranslatedClaimsT = AutomatedReasoningCheckInputTextReference>
    AutomatedReasoningCheckTranslation& AddUntranslatedClaims(UntranslatedClaimsT&& value) { m_untranslatedClaimsHasBeenSet = true; m_untranslatedClaims.emplace_back(std::forward<UntranslatedClaimsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A confidence score between 0 and 1 indicating how certain the system is about
     * the logical translation.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline AutomatedReasoningCheckTranslation& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningLogicStatement> m_premises;
    bool m_premisesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningLogicStatement> m_claims;
    bool m_claimsHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckInputTextReference> m_untranslatedPremises;
    bool m_untranslatedPremisesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningCheckInputTextReference> m_untranslatedClaims;
    bool m_untranslatedClaimsHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
