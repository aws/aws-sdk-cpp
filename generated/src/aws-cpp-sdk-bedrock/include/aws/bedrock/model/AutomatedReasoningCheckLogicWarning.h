/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckLogicWarningType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningLogicStatement.h>
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
   * <p>Identifies logical issues in the translated statements that exist independent
   * of any policy rules, such as statements that are always true or always
   * false.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckLogicWarning">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckLogicWarning
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckLogicWarning() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckLogicWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckLogicWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of the detected logical issue, such as statements that are
     * always true or always false.</p>
     */
    inline AutomatedReasoningCheckLogicWarningType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AutomatedReasoningCheckLogicWarningType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutomatedReasoningCheckLogicWarning& WithType(AutomatedReasoningCheckLogicWarningType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical statements that serve as premises under which the claims are
     * validated.</p>
     */
    inline const Aws::Vector<AutomatedReasoningLogicStatement>& GetPremises() const { return m_premises; }
    inline bool PremisesHasBeenSet() const { return m_premisesHasBeenSet; }
    template<typename PremisesT = Aws::Vector<AutomatedReasoningLogicStatement>>
    void SetPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises = std::forward<PremisesT>(value); }
    template<typename PremisesT = Aws::Vector<AutomatedReasoningLogicStatement>>
    AutomatedReasoningCheckLogicWarning& WithPremises(PremisesT&& value) { SetPremises(std::forward<PremisesT>(value)); return *this;}
    template<typename PremisesT = AutomatedReasoningLogicStatement>
    AutomatedReasoningCheckLogicWarning& AddPremises(PremisesT&& value) { m_premisesHasBeenSet = true; m_premises.emplace_back(std::forward<PremisesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical statements that are validated while assuming the policy and
     * premises.</p>
     */
    inline const Aws::Vector<AutomatedReasoningLogicStatement>& GetClaims() const { return m_claims; }
    inline bool ClaimsHasBeenSet() const { return m_claimsHasBeenSet; }
    template<typename ClaimsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    void SetClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims = std::forward<ClaimsT>(value); }
    template<typename ClaimsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    AutomatedReasoningCheckLogicWarning& WithClaims(ClaimsT&& value) { SetClaims(std::forward<ClaimsT>(value)); return *this;}
    template<typename ClaimsT = AutomatedReasoningLogicStatement>
    AutomatedReasoningCheckLogicWarning& AddClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims.emplace_back(std::forward<ClaimsT>(value)); return *this; }
    ///@}
  private:

    AutomatedReasoningCheckLogicWarningType m_type{AutomatedReasoningCheckLogicWarningType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<AutomatedReasoningLogicStatement> m_premises;
    bool m_premisesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningLogicStatement> m_claims;
    bool m_claimsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
