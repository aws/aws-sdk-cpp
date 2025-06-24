/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/PricingTerm.h>
#include <aws/bedrock/model/LegalTerm.h>
#include <aws/bedrock/model/SupportTerm.h>
#include <aws/bedrock/model/ValidityTerm.h>
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
   * <p>Describes the usage terms of an offer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TermDetails">AWS
   * API Reference</a></p>
   */
  class TermDetails
  {
  public:
    AWS_BEDROCK_API TermDetails() = default;
    AWS_BEDROCK_API TermDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API TermDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const PricingTerm& GetUsageBasedPricingTerm() const { return m_usageBasedPricingTerm; }
    inline bool UsageBasedPricingTermHasBeenSet() const { return m_usageBasedPricingTermHasBeenSet; }
    template<typename UsageBasedPricingTermT = PricingTerm>
    void SetUsageBasedPricingTerm(UsageBasedPricingTermT&& value) { m_usageBasedPricingTermHasBeenSet = true; m_usageBasedPricingTerm = std::forward<UsageBasedPricingTermT>(value); }
    template<typename UsageBasedPricingTermT = PricingTerm>
    TermDetails& WithUsageBasedPricingTerm(UsageBasedPricingTermT&& value) { SetUsageBasedPricingTerm(std::forward<UsageBasedPricingTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the legal terms.</p>
     */
    inline const LegalTerm& GetLegalTerm() const { return m_legalTerm; }
    inline bool LegalTermHasBeenSet() const { return m_legalTermHasBeenSet; }
    template<typename LegalTermT = LegalTerm>
    void SetLegalTerm(LegalTermT&& value) { m_legalTermHasBeenSet = true; m_legalTerm = std::forward<LegalTermT>(value); }
    template<typename LegalTermT = LegalTerm>
    TermDetails& WithLegalTerm(LegalTermT&& value) { SetLegalTerm(std::forward<LegalTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the support terms.</p>
     */
    inline const SupportTerm& GetSupportTerm() const { return m_supportTerm; }
    inline bool SupportTermHasBeenSet() const { return m_supportTermHasBeenSet; }
    template<typename SupportTermT = SupportTerm>
    void SetSupportTerm(SupportTermT&& value) { m_supportTermHasBeenSet = true; m_supportTerm = std::forward<SupportTermT>(value); }
    template<typename SupportTermT = SupportTerm>
    TermDetails& WithSupportTerm(SupportTermT&& value) { SetSupportTerm(std::forward<SupportTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the validity terms.</p>
     */
    inline const ValidityTerm& GetValidityTerm() const { return m_validityTerm; }
    inline bool ValidityTermHasBeenSet() const { return m_validityTermHasBeenSet; }
    template<typename ValidityTermT = ValidityTerm>
    void SetValidityTerm(ValidityTermT&& value) { m_validityTermHasBeenSet = true; m_validityTerm = std::forward<ValidityTermT>(value); }
    template<typename ValidityTermT = ValidityTerm>
    TermDetails& WithValidityTerm(ValidityTermT&& value) { SetValidityTerm(std::forward<ValidityTermT>(value)); return *this;}
    ///@}
  private:

    PricingTerm m_usageBasedPricingTerm;
    bool m_usageBasedPricingTermHasBeenSet = false;

    LegalTerm m_legalTerm;
    bool m_legalTermHasBeenSet = false;

    SupportTerm m_supportTerm;
    bool m_supportTermHasBeenSet = false;

    ValidityTerm m_validityTerm;
    bool m_validityTermHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
