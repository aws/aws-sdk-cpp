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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendation();
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
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested Savings Plans recommendation type.</p>
     */
    inline const SupportedSavingsPlansType& GetSavingsPlansType() const{ return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(const SupportedSavingsPlansType& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType&& value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansType(const SupportedSavingsPlansType& value) { SetSavingsPlansType(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansType(SupportedSavingsPlansType&& value) { SetSavingsPlansType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans recommendation term in years. It's used to generate the
     * recommendation.</p>
     */
    inline const TermInYears& GetTermInYears() const{ return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(const TermInYears& value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline void SetTermInYears(TermInYears&& value) { m_termInYearsHasBeenSet = true; m_termInYears = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithTermInYears(const TermInYears& value) { SetTermInYears(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithTermInYears(TermInYears&& value) { SetTermInYears(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option that's used to generate the recommendation.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period in days that's used to generate the recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the Savings Plans that we recommend that you purchase to cover
     * existing Savings Plans eligible workloads.</p>
     */
    inline const Aws::Vector<SavingsPlansPurchaseRecommendationDetail>& GetSavingsPlansPurchaseRecommendationDetails() const{ return m_savingsPlansPurchaseRecommendationDetails; }
    inline bool SavingsPlansPurchaseRecommendationDetailsHasBeenSet() const { return m_savingsPlansPurchaseRecommendationDetailsHasBeenSet; }
    inline void SetSavingsPlansPurchaseRecommendationDetails(const Aws::Vector<SavingsPlansPurchaseRecommendationDetail>& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails = value; }
    inline void SetSavingsPlansPurchaseRecommendationDetails(Aws::Vector<SavingsPlansPurchaseRecommendationDetail>&& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationDetails(const Aws::Vector<SavingsPlansPurchaseRecommendationDetail>& value) { SetSavingsPlansPurchaseRecommendationDetails(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationDetails(Aws::Vector<SavingsPlansPurchaseRecommendationDetail>&& value) { SetSavingsPlansPurchaseRecommendationDetails(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendation& AddSavingsPlansPurchaseRecommendationDetails(const SavingsPlansPurchaseRecommendationDetail& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails.push_back(value); return *this; }
    inline SavingsPlansPurchaseRecommendation& AddSavingsPlansPurchaseRecommendationDetails(SavingsPlansPurchaseRecommendationDetail&& value) { m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = true; m_savingsPlansPurchaseRecommendationDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summary metrics for your Savings Plans Recommendations. </p>
     */
    inline const SavingsPlansPurchaseRecommendationSummary& GetSavingsPlansPurchaseRecommendationSummary() const{ return m_savingsPlansPurchaseRecommendationSummary; }
    inline bool SavingsPlansPurchaseRecommendationSummaryHasBeenSet() const { return m_savingsPlansPurchaseRecommendationSummaryHasBeenSet; }
    inline void SetSavingsPlansPurchaseRecommendationSummary(const SavingsPlansPurchaseRecommendationSummary& value) { m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = true; m_savingsPlansPurchaseRecommendationSummary = value; }
    inline void SetSavingsPlansPurchaseRecommendationSummary(SavingsPlansPurchaseRecommendationSummary&& value) { m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = true; m_savingsPlansPurchaseRecommendationSummary = std::move(value); }
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationSummary(const SavingsPlansPurchaseRecommendationSummary& value) { SetSavingsPlansPurchaseRecommendationSummary(value); return *this;}
    inline SavingsPlansPurchaseRecommendation& WithSavingsPlansPurchaseRecommendationSummary(SavingsPlansPurchaseRecommendationSummary&& value) { SetSavingsPlansPurchaseRecommendationSummary(std::move(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType;
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears;
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Vector<SavingsPlansPurchaseRecommendationDetail> m_savingsPlansPurchaseRecommendationDetails;
    bool m_savingsPlansPurchaseRecommendationDetailsHasBeenSet = false;

    SavingsPlansPurchaseRecommendationSummary m_savingsPlansPurchaseRecommendationSummary;
    bool m_savingsPlansPurchaseRecommendationSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
