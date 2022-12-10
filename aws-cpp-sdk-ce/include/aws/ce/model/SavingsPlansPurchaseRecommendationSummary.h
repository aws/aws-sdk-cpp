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


    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline const Aws::String& GetEstimatedROI() const{ return m_estimatedROI; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline void SetEstimatedROI(const Aws::String& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = value; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline void SetEstimatedROI(Aws::String&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::move(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline void SetEstimatedROI(const char* value) { m_estimatedROIHasBeenSet = true; m_estimatedROI.assign(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(const Aws::String& value) { SetEstimatedROI(value); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(Aws::String&& value) { SetEstimatedROI(std::move(value)); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans and estimated savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedROI(const char* value) { SetEstimatedROI(value); return *this;}


    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline const Aws::String& GetEstimatedTotalCost() const{ return m_estimatedTotalCost; }

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline bool EstimatedTotalCostHasBeenSet() const { return m_estimatedTotalCostHasBeenSet; }

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline void SetEstimatedTotalCost(const Aws::String& value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost = value; }

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline void SetEstimatedTotalCost(Aws::String&& value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost = std::move(value); }

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline void SetEstimatedTotalCost(const char* value) { m_estimatedTotalCostHasBeenSet = true; m_estimatedTotalCost.assign(value); }

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(const Aws::String& value) { SetEstimatedTotalCost(value); return *this;}

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(Aws::String&& value) { SetEstimatedTotalCost(std::move(value)); return *this;}

    /**
     * <p>The estimated total cost of the usage after purchasing the recommended
     * Savings Plans. This is a sum of the cost of Savings Plans during this term, and
     * the remaining On-Demand usage.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedTotalCost(const char* value) { SetEstimatedTotalCost(value); return *this;}


    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline const Aws::String& GetCurrentOnDemandSpend() const{ return m_currentOnDemandSpend; }

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline bool CurrentOnDemandSpendHasBeenSet() const { return m_currentOnDemandSpendHasBeenSet; }

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline void SetCurrentOnDemandSpend(const Aws::String& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = value; }

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline void SetCurrentOnDemandSpend(Aws::String&& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = std::move(value); }

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline void SetCurrentOnDemandSpend(const char* value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend.assign(value); }

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(const Aws::String& value) { SetCurrentOnDemandSpend(value); return *this;}

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(Aws::String&& value) { SetCurrentOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The current total on demand spend of the applicable usage types over the
     * lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithCurrentOnDemandSpend(const char* value) { SetCurrentOnDemandSpend(value); return *this;}


    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const{ return m_estimatedSavingsAmount; }

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedSavingsAmount(const Aws::String& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = value; }

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedSavingsAmount(Aws::String&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::move(value); }

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedSavingsAmount(const char* value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount.assign(value); }

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(const Aws::String& value) { SetEstimatedSavingsAmount(value); return *this;}

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(Aws::String&& value) { SetEstimatedSavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated total savings over the lookback period, based on the purchase
     * of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsAmount(const char* value) { SetEstimatedSavingsAmount(value); return *this;}


    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline const Aws::String& GetTotalRecommendationCount() const{ return m_totalRecommendationCount; }

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline bool TotalRecommendationCountHasBeenSet() const { return m_totalRecommendationCountHasBeenSet; }

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline void SetTotalRecommendationCount(const Aws::String& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = value; }

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline void SetTotalRecommendationCount(Aws::String&& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = std::move(value); }

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline void SetTotalRecommendationCount(const char* value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount.assign(value); }

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(const Aws::String& value) { SetTotalRecommendationCount(value); return *this;}

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(Aws::String&& value) { SetTotalRecommendationCount(std::move(value)); return *this;}

    /**
     * <p>The aggregate number of Savings Plans recommendations that exist for your
     * account.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithTotalRecommendationCount(const char* value) { SetTotalRecommendationCount(value); return *this;}


    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline const Aws::String& GetDailyCommitmentToPurchase() const{ return m_dailyCommitmentToPurchase; }

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline bool DailyCommitmentToPurchaseHasBeenSet() const { return m_dailyCommitmentToPurchaseHasBeenSet; }

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline void SetDailyCommitmentToPurchase(const Aws::String& value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase = value; }

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline void SetDailyCommitmentToPurchase(Aws::String&& value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase = std::move(value); }

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline void SetDailyCommitmentToPurchase(const char* value) { m_dailyCommitmentToPurchaseHasBeenSet = true; m_dailyCommitmentToPurchase.assign(value); }

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(const Aws::String& value) { SetDailyCommitmentToPurchase(value); return *this;}

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(Aws::String&& value) { SetDailyCommitmentToPurchase(std::move(value)); return *this;}

    /**
     * <p>The recommended Savings Plans cost on a daily (24 hourly) basis.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithDailyCommitmentToPurchase(const char* value) { SetDailyCommitmentToPurchase(value); return *this;}


    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const{ return m_hourlyCommitmentToPurchase; }

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const Aws::String& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = value; }

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline void SetHourlyCommitmentToPurchase(Aws::String&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::move(value); }

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const char* value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase.assign(value); }

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(const Aws::String& value) { SetHourlyCommitmentToPurchase(value); return *this;}

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(Aws::String&& value) { SetHourlyCommitmentToPurchase(std::move(value)); return *this;}

    /**
     * <p>The recommended hourly commitment that's based on the recommendation
     * parameters.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithHourlyCommitmentToPurchase(const char* value) { SetHourlyCommitmentToPurchase(value); return *this;}


    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline void SetEstimatedSavingsPercentage(const Aws::String& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline void SetEstimatedSavingsPercentage(Aws::String&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::move(value); }

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline void SetEstimatedSavingsPercentage(const char* value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage.assign(value); }

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(const Aws::String& value) { SetEstimatedSavingsPercentage(value); return *this;}

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(Aws::String&& value) { SetEstimatedSavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>The estimated savings relative to the total cost of On-Demand usage, over the
     * lookback period. This is calculated as <code>estimatedSavingsAmount</code>/
     * <code>CurrentOnDemandSpend</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedSavingsPercentage(const char* value) { SetEstimatedSavingsPercentage(value); return *this;}


    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated monthly savings amount that's based on the recommended Savings
     * Plans purchase.</p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const{ return m_estimatedOnDemandCostWithCurrentCommitment; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = value; }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::move(value); }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const char* value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment.assign(value); }

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::move(value)); return *this;}

    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment. It's
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationSummary& WithEstimatedOnDemandCostWithCurrentCommitment(const char* value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}

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
