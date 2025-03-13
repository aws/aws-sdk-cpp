/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details for your recommended Savings Plans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseRecommendationDetail
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline const SavingsPlansDetails& GetSavingsPlansDetails() const { return m_savingsPlansDetails; }
    inline bool SavingsPlansDetailsHasBeenSet() const { return m_savingsPlansDetailsHasBeenSet; }
    template<typename SavingsPlansDetailsT = SavingsPlansDetails>
    void SetSavingsPlansDetails(SavingsPlansDetailsT&& value) { m_savingsPlansDetailsHasBeenSet = true; m_savingsPlansDetails = std::forward<SavingsPlansDetailsT>(value); }
    template<typename SavingsPlansDetailsT = SavingsPlansDetails>
    SavingsPlansPurchaseRecommendationDetail& WithSavingsPlansDetails(SavingsPlansDetailsT&& value) { SetSavingsPlansDetails(std::forward<SavingsPlansDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const { return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    template<typename EstimatedROIT = Aws::String>
    void SetEstimatedROI(EstimatedROIT&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::forward<EstimatedROIT>(value); }
    template<typename EstimatedROIT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedROI(EstimatedROIT&& value) { SetEstimatedROI(std::forward<EstimatedROIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedSPCost() const { return m_estimatedSPCost; }
    inline bool EstimatedSPCostHasBeenSet() const { return m_estimatedSPCostHasBeenSet; }
    template<typename EstimatedSPCostT = Aws::String>
    void SetEstimatedSPCost(EstimatedSPCostT&& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = std::forward<EstimatedSPCostT>(value); }
    template<typename EstimatedSPCostT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedSPCost(EstimatedSPCostT&& value) { SetEstimatedSPCost(std::forward<EstimatedSPCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    template<typename EstimatedOnDemandCostT = Aws::String>
    void SetEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::forward<EstimatedOnDemandCostT>(value); }
    template<typename EstimatedOnDemandCostT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { SetEstimatedOnDemandCost(std::forward<EstimatedOnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const { return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    void SetEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value); }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const { return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    template<typename EstimatedSavingsAmountT = Aws::String>
    void SetEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::forward<EstimatedSavingsAmountT>(value); }
    template<typename EstimatedSavingsAmountT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { SetEstimatedSavingsAmount(std::forward<EstimatedSavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const { return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    void SetEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::forward<EstimatedSavingsPercentageT>(value); }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { SetEstimatedSavingsPercentage(std::forward<EstimatedSavingsPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const { return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    void SetHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::forward<HourlyCommitmentToPurchaseT>(value); }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { SetHourlyCommitmentToPurchase(std::forward<HourlyCommitmentToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const { return m_estimatedAverageUtilization; }
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    void SetEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::forward<EstimatedAverageUtilizationT>(value); }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { SetEstimatedAverageUtilization(std::forward<EstimatedAverageUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const { return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    void SetEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::forward<EstimatedMonthlySavingsAmountT>(value); }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { SetEstimatedMonthlySavingsAmount(std::forward<EstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMinimumHourlyOnDemandSpend() const { return m_currentMinimumHourlyOnDemandSpend; }
    inline bool CurrentMinimumHourlyOnDemandSpendHasBeenSet() const { return m_currentMinimumHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentMinimumHourlyOnDemandSpendT = Aws::String>
    void SetCurrentMinimumHourlyOnDemandSpend(CurrentMinimumHourlyOnDemandSpendT&& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = std::forward<CurrentMinimumHourlyOnDemandSpendT>(value); }
    template<typename CurrentMinimumHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithCurrentMinimumHourlyOnDemandSpend(CurrentMinimumHourlyOnDemandSpendT&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::forward<CurrentMinimumHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMaximumHourlyOnDemandSpend() const { return m_currentMaximumHourlyOnDemandSpend; }
    inline bool CurrentMaximumHourlyOnDemandSpendHasBeenSet() const { return m_currentMaximumHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentMaximumHourlyOnDemandSpendT = Aws::String>
    void SetCurrentMaximumHourlyOnDemandSpend(CurrentMaximumHourlyOnDemandSpendT&& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = std::forward<CurrentMaximumHourlyOnDemandSpendT>(value); }
    template<typename CurrentMaximumHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithCurrentMaximumHourlyOnDemandSpend(CurrentMaximumHourlyOnDemandSpendT&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::forward<CurrentMaximumHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentAverageHourlyOnDemandSpend() const { return m_currentAverageHourlyOnDemandSpend; }
    inline bool CurrentAverageHourlyOnDemandSpendHasBeenSet() const { return m_currentAverageHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentAverageHourlyOnDemandSpendT = Aws::String>
    void SetCurrentAverageHourlyOnDemandSpend(CurrentAverageHourlyOnDemandSpendT&& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = std::forward<CurrentAverageHourlyOnDemandSpendT>(value); }
    template<typename CurrentAverageHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithCurrentAverageHourlyOnDemandSpend(CurrentAverageHourlyOnDemandSpendT&& value) { SetCurrentAverageHourlyOnDemandSpend(std::forward<CurrentAverageHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline const Aws::String& GetRecommendationDetailId() const { return m_recommendationDetailId; }
    inline bool RecommendationDetailIdHasBeenSet() const { return m_recommendationDetailIdHasBeenSet; }
    template<typename RecommendationDetailIdT = Aws::String>
    void SetRecommendationDetailId(RecommendationDetailIdT&& value) { m_recommendationDetailIdHasBeenSet = true; m_recommendationDetailId = std::forward<RecommendationDetailIdT>(value); }
    template<typename RecommendationDetailIdT = Aws::String>
    SavingsPlansPurchaseRecommendationDetail& WithRecommendationDetailId(RecommendationDetailIdT&& value) { SetRecommendationDetailId(std::forward<RecommendationDetailIdT>(value)); return *this;}
    ///@}
  private:

    SavingsPlansDetails m_savingsPlansDetails;
    bool m_savingsPlansDetailsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_estimatedROI;
    bool m_estimatedROIHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_estimatedSPCost;
    bool m_estimatedSPCostHasBeenSet = false;

    Aws::String m_estimatedOnDemandCost;
    bool m_estimatedOnDemandCostHasBeenSet = false;

    Aws::String m_estimatedOnDemandCostWithCurrentCommitment;
    bool m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = false;

    Aws::String m_estimatedSavingsAmount;
    bool m_estimatedSavingsAmountHasBeenSet = false;

    Aws::String m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    Aws::String m_hourlyCommitmentToPurchase;
    bool m_hourlyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_estimatedAverageUtilization;
    bool m_estimatedAverageUtilizationHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_currentMinimumHourlyOnDemandSpend;
    bool m_currentMinimumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMaximumHourlyOnDemandSpend;
    bool m_currentMaximumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentAverageHourlyOnDemandSpend;
    bool m_currentAverageHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_recommendationDetailId;
    bool m_recommendationDetailIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
