/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningLogicWarningType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningStatement.h>
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
   * <p>Identifies logical issues in the translated statements that exist independent
   * of any policy rules, such as statements that are always true or always
   * false.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningLogicWarning">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningLogicWarning
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningLogicWarning() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningLogicWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningLogicWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of the detected logical issue, such as statements that are
     * always true or always false.</p>
     */
    inline GuardrailAutomatedReasoningLogicWarningType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailAutomatedReasoningLogicWarningType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailAutomatedReasoningLogicWarning& WithType(GuardrailAutomatedReasoningLogicWarningType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical statements that serve as premises under which the claims are
     * validated.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningStatement>& GetPremises() const { return m_premises; }
    inline bool PremisesHasBeenSet() const { return m_premisesHasBeenSet; }
    template<typename PremisesT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    void SetPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises = std::forward<PremisesT>(value); }
    template<typename PremisesT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    GuardrailAutomatedReasoningLogicWarning& WithPremises(PremisesT&& value) { SetPremises(std::forward<PremisesT>(value)); return *this;}
    template<typename PremisesT = GuardrailAutomatedReasoningStatement>
    GuardrailAutomatedReasoningLogicWarning& AddPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises.emplace_back(std::forward<PremisesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical statements that are validated while assuming the policy and
     * premises.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningStatement>& GetClaims() const { return m_claims; }
    inline bool ClaimsHasBeenSet() const { return m_claimsHasBeenSet; }
    template<typename ClaimsT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    void SetClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims = std::forward<ClaimsT>(value); }
    template<typename ClaimsT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    GuardrailAutomatedReasoningLogicWarning& WithClaims(ClaimsT&& value) { SetClaims(std::forward<ClaimsT>(value)); return *this;}
    template<typename ClaimsT = GuardrailAutomatedReasoningStatement>
    GuardrailAutomatedReasoningLogicWarning& AddClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims.emplace_back(std::forward<ClaimsT>(value)); return *this; }
    ///@}
  private:

    GuardrailAutomatedReasoningLogicWarningType m_type{GuardrailAutomatedReasoningLogicWarningType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<GuardrailAutomatedReasoningStatement> m_premises;
    bool m_premisesHasBeenSet = false;

    Aws::Vector<GuardrailAutomatedReasoningStatement> m_claims;
    bool m_claimsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
