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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary();
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline const Aws::String& GetEstimatedROI() const{ return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    inline void SetEstimatedROI(const Aws::String& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = value; }
    inline void SetEstimatedROI(Aws::String&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::move(value); }
    inline void SetEstimatedROI(const char* value) { m_estimatedROIHasBeenSet = true; m_estimatedROI.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(const Aws::String& value) { SetEstimatedROI(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(Aws::String&& value) { SetEstimatedROI(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(const char* value) { SetEstimatedROI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline const Aws::String& GetEstimatedTotalCost() const{ return m_estimatedTotalCost; }
    inline bool EstimatedTotalCostHasBeenSet() const { return m_estimatedTotalCostHasBeenSet; }
    inline void SetEstimatedTotalCost(const Aws::String& value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost = value; }
    inline void SetEstimatedTotalCost(Aws::String&& value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost = std::move(value); }
    inline void SetEstimatedTotalCost(const char* value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(const Aws::String& value) { SetEstimatedTotalCost(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(Aws::String&& value) { SetEstimatedTotalCost(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(const char* value) { SetEstimatedTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline const Aws::String& GetCurrentOnDemandSpend() const{ return m_currentOnDemandSpend; }
    inline bool CurrentOnDemandSpendHasBeenSet() const { return m_currentOnDemandSpendHasBeenSet; }
    inline void SetCurrentOnDemandSpend(const Aws::String& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = value; }
    inline void SetCurrentOnDemandSpend(Aws::String&& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = std::move(value); }
    inline void SetCurrentOnDemandSpend(const char* value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(const Aws::String& value) { SetCurrentOnDemandSpend(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(Aws::String&& value) { SetCurrentOnDemandSpend(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(const char* value) { SetCurrentOnDemandSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const{ return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    inline void SetEstimatedSavingsAmount(const Aws::String& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = value; }
    inline void SetEstimatedSavingsAmount(Aws::String&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::move(value); }
    inline void SetEstimatedSavingsAmount(const char* value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(const Aws::String& value) { SetEstimatedSavingsAmount(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(Aws::String&& value) { SetEstimatedSavingsAmount(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(const char* value) { SetEstimatedSavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline const Aws::String& GetTotalRecommendationCount() const{ return m_totalRecommendationCount; }
    inline bool TotalRecommendationCountHasBeenSet() const { return m_totalRecommendationCountHasBeenSet; }
    inline void SetTotalRecommendationCount(const Aws::String& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = value; }
    inline void SetTotalRecommendationCount(Aws::String&& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = std::move(value); }
    inline void SetTotalRecommendationCount(const char* value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(const Aws::String& value) { SetTotalRecommendationCount(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(Aws::String&& value) { SetTotalRecommendationCount(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(const char* value) { SetTotalRecommendationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline const Aws::String& GetDailyCommitmentToPurchase() const{ return m_dailyCommitmentToPurchase; }
    inline bool DailyCommitmentToPurchaseHasBeenSet() const { return m_dailyCommitmentToPurchaseHasBeenSet; }
    inline void SetDailyCommitmentToPurchase(const Aws::String& value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase = value; }
    inline void SetDailyCommitmentToPurchase(Aws::String&& value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase = std::move(value); }
    inline void SetDailyCommitmentToPurchase(const char* value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(const Aws::String& value) { SetDailyCommitmentToPurchase(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(Aws::String&& value) { SetDailyCommitmentToPurchase(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(const char* value) { SetDailyCommitmentToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const{ return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    inline void SetHourlyCommitmentToPurchase(const Aws::String& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = value; }
    inline void SetHourlyCommitmentToPurchase(Aws::String&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::move(value); }
    inline void SetHourlyCommitmentToPurchase(const char* value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(const Aws::String& value) { SetHourlyCommitmentToPurchase(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(Aws::String&& value) { SetHourlyCommitmentToPurchase(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(const char* value) { SetHourlyCommitmentToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    inline void SetEstimatedSavingsPercentage(const Aws::String& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }
    inline void SetEstimatedSavingsPercentage(Aws::String&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::move(value); }
    inline void SetEstimatedSavingsPercentage(const char* value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(const Aws::String& value) { SetEstimatedSavingsPercentage(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(Aws::String&& value) { SetEstimatedSavingsPercentage(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(const char* value) { SetEstimatedSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const{ return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = value; }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::move(value); }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const char* value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment.assign(value); }
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::move(value)); return *this;}
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(const char* value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}
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
