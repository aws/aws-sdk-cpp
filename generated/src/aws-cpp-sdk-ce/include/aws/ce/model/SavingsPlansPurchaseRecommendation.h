/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendationSummary.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendationDetail.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Contains your request parameters, Savings Plan Recommendations Summary, and
   * Details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseRecommendation">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseRecommendation
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendation() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations that include the management account and member
     * accounts if the value is set to <code>PAYER</code>. If the value is
     * <code>LINKED</code>, recommendations are calculated for individual member
     * accounts only.</p>
     */
    inline AccountScope GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(AccountScope value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline SavingsPlansPurchaseRecommendation& WithAccountScope(AccountScope value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested Savings Plans recommendation type.</p>
     */
    inline SupportedSavingsPlansType GetSavingsPlansType() const { return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansType(SupportedSavingsPlansType value) { SetSavingsPlansType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans recommendation term in years. It's used to generate the
     * recommendation.</p>
     */
    inline TermInYears GetTermInYears() const { return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(TermInYears value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline SavingsPlansPurchaseRecommendation& WithTermInYears(TermInYears value) { SetTermInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option that's used to generate the recommendation.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline SavingsPlansPurchaseRecommendation& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period in days that's used to generate the recommendation.</p>
     */
    inline LookbackPeriodInDays GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline SavingsPlansPurchaseRecommendation& WithLookbackPeriodInDays(LookbackPeriodInDays value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the Savings Plans that we recommend that you purchase to cover
     * existing Savings Plans eligible workloads.</p>
     */
    inline const Aws::Vector<SavingsPlansPurchaseRecommendationDetail>& GetSavingsPlansPurchaseRecommendationDetails() const { return m_savingsPlansPurchaseRecommendationDetails; }
    inline bool SavingsPlansPurchaseRecommendationDetailsHasBeenSet() const { return m_savingsPlansPurchaseRecommendationDetailsHasBeenSet; }
    template<typename SavingsPlansPurchaseRecommendationDetailsT = Aws::Vector<SavingsPlansPurchaseRecommendationDetail>>
    void SetSavingsPlansPurchaseRecommendationDetails(SavingsPlansPurchaseRecommendationDetailsT&& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails = std::forward<SavingsPlansPurchaseRecommendationDetailsT>(value); }
    template<typename SavingsPlansPurchaseRecommendationDetailsT = Aws::Vector<SavingsPlansPurchaseRecommendationDetail>>
    SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationDetails(SavingsPlansPurchaseRecommendationDetailsT&& value) { SetSavingsPlansPurchaseRecommendationDetails(std::forward<SavingsPlansPurchaseRecommendationDetailsT>(value)); return *this;}
    template<typename SavingsPlansPurchaseRecommendationDetailsT = SavingsPlansPurchaseRecommendationDetail>
    SavingsPlansPurchaseRecommendation& AddSavingsPlansPurchaseRecommendationDetails(SavingsPlansPurchaseRecommendationDetailsT&& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails.emplace_back(std::forward<SavingsPlansPurchaseRecommendationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summary metrics for your Savings Plans Recommendations. </p>
     */
    inline const SavingsPlansPurchaseRecommendationSummary& GetSavingsPlansPurchaseRecommendationSummary() const { return m_savingsPlansPurchaseRecommendationSummary; }
    inline bool SavingsPlansPurchaseRecommendationSummaryHasBeenSet() const { return m_savingsPlansPurchaseRecommendationSummaryHasBeenSet; }
    template<typename SavingsPlansPurchaseRecommendationSummaryT = SavingsPlansPurchaseRecommendationSummary>
    void SetSavingsPlansPurchaseRecommendationSummary(SavingsPlansPurchaseRecommendationSummaryT&& value) { m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = true; m_savingsPlansPurchaseRecommendationSummary = std::forward<SavingsPlansPurchaseRecommendationSummaryT>(value); }
    template<typename SavingsPlansPurchaseRecommendationSummaryT = SavingsPlansPurchaseRecommendationSummary>
    SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationSummary(SavingsPlansPurchaseRecommendationSummaryT&& value) { SetSavingsPlansPurchaseRecommendationSummary(std::forward<SavingsPlansPurchaseRecommendationSummaryT>(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope{AccountScope::NOT_SET};
    bool m_accountScopeHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType{SupportedSavingsPlansType::NOT_SET};
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears{TermInYears::NOT_SET};
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays{LookbackPeriodInDays::NOT_SET};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Vector<SavingsPlansPurchaseRecommendationDetail> m_savingsPlansPurchaseRecommendationDetails;
    bool m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = false;

    SavingsPlansPurchaseRecommendationSummary m_savingsPlansPurchaseRecommendationSummary;
    bool m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
