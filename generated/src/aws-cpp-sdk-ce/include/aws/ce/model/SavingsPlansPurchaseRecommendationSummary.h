/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
   * <p>Summary metrics for your Savings Plans Purchase
   * Recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseRecommendationSummary
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline const Aws::String& GetEstimatedROI() const { return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    template<typename EstimatedROIT = Aws::String>
    void SetEstimatedROI(EstimatedROIT&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::forward<EstimatedROIT>(value); }
    template<typename EstimatedROIT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(EstimatedROIT&& value) { SetEstimatedROI(std::forward<EstimatedROIT>(value)); return *this;}
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
    SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline const Aws::String& GetEstimatedTotalCost() const { return m_estimatedTotalCost; }
    inline bool EstimatedTotalCostHasBeenSet() const { return m_estimatedTotalCostHasBeenSet; }
    template<typename EstimatedTotalCostT = Aws::String>
    void SetEstimatedTotalCost(EstimatedTotalCostT&& value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost = std::forward<EstimatedTotalCostT>(value); }
    template<typename EstimatedTotalCostT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(EstimatedTotalCostT&& value) { SetEstimatedTotalCost(std::forward<EstimatedTotalCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline const Aws::String& GetCurrentOnDemandSpend() const { return m_currentOnDemandSpend; }
    inline bool CurrentOnDemandSpendHasBeenSet() const { return m_currentOnDemandSpendHasBeenSet; }
    template<typename CurrentOnDemandSpendT = Aws::String>
    void SetCurrentOnDemandSpend(CurrentOnDemandSpendT&& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = std::forward<CurrentOnDemandSpendT>(value); }
    template<typename CurrentOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(CurrentOnDemandSpendT&& value) { SetCurrentOnDemandSpend(std::forward<CurrentOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const { return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    template<typename EstimatedSavingsAmountT = Aws::String>
    void SetEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::forward<EstimatedSavingsAmountT>(value); }
    template<typename EstimatedSavingsAmountT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { SetEstimatedSavingsAmount(std::forward<EstimatedSavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline const Aws::String& GetTotalRecommendationCount() const { return m_totalRecommendationCount; }
    inline bool TotalRecommendationCountHasBeenSet() const { return m_totalRecommendationCountHasBeenSet; }
    template<typename TotalRecommendationCountT = Aws::String>
    void SetTotalRecommendationCount(TotalRecommendationCountT&& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = std::forward<TotalRecommendationCountT>(value); }
    template<typename TotalRecommendationCountT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(TotalRecommendationCountT&& value) { SetTotalRecommendationCount(std::forward<TotalRecommendationCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline const Aws::String& GetDailyCommitmentToPurchase() const { return m_dailyCommitmentToPurchase; }
    inline bool DailyCommitmentToPurchaseHasBeenSet() const { return m_dailyCommitmentToPurchaseHasBeenSet; }
    template<typename DailyCommitmentToPurchaseT = Aws::String>
    void SetDailyCommitmentToPurchase(DailyCommitmentToPurchaseT&& value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase = std::forward<DailyCommitmentToPurchaseT>(value); }
    template<typename DailyCommitmentToPurchaseT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(DailyCommitmentToPurchaseT&& value) { SetDailyCommitmentToPurchase(std::forward<DailyCommitmentToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const { return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    void SetHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::forward<HourlyCommitmentToPurchaseT>(value); }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { SetHourlyCommitmentToPurchase(std::forward<HourlyCommitmentToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const { return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    void SetEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::forward<EstimatedSavingsPercentageT>(value); }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { SetEstimatedSavingsPercentage(std::forward<EstimatedSavingsPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const { return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    void SetEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::forward<EstimatedMonthlySavingsAmountT>(value); }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { SetEstimatedMonthlySavingsAmount(std::forward<EstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const { return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    void SetEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value); }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_estimatedROI;
    bool m_estimatedROIHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_estimatedTotalCost;
    bool m_estimatedTotalCostHasBeenSet = false;

    Aws::String m_currentOnDemandSpend;
    bool m_currentOnDemandSpendHasBeenSet = false;

    Aws::String m_estimatedSavingsAmount;
    bool m_estimatedSavingsAmountHasBeenSet = false;

    Aws::String m_totalRecommendationCount;
    bool m_totalRecommendationCountHasBeenSet = false;

    Aws::String m_dailyCommitmentToPurchase;
    bool m_dailyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_hourlyCommitmentToPurchase;
    bool m_hourlyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_estimatedOnDemandCostWithCurrentCommitment;
    bool m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
