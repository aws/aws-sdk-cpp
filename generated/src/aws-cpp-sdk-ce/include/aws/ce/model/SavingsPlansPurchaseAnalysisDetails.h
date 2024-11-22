/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/RecommendationDetailHourlyMetrics.h>
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
   * <p>Details about the Savings Plans purchase analysis.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseAnalysisDetails">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseAnalysisDetails
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails();
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The currency code used for the analysis.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period in hours that's used to generate the analysis.</p>
     */
    inline const Aws::String& GetLookbackPeriodInHours() const{ return m_lookbackPeriodInHours; }
    inline bool LookbackPeriodInHoursHasBeenSet() const { return m_lookbackPeriodInHoursHasBeenSet; }
    inline void SetLookbackPeriodInHours(const Aws::String& value) { m_lookbackPeriodInHoursHasBeenSet = true; m_lookbackPeriodInHours = value; }
    inline void SetLookbackPeriodInHours(Aws::String&& value) { m_lookbackPeriodInHoursHasBeenSet = true; m_lookbackPeriodInHours = std::move(value); }
    inline void SetLookbackPeriodInHours(const char* value) { m_lookbackPeriodInHoursHasBeenSet = true; m_lookbackPeriodInHours.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithLookbackPeriodInHours(const Aws::String& value) { SetLookbackPeriodInHours(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithLookbackPeriodInHours(Aws::String&& value) { SetLookbackPeriodInHours(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithLookbackPeriodInHours(const char* value) { SetLookbackPeriodInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentAverageCoverage() const{ return m_currentAverageCoverage; }
    inline bool CurrentAverageCoverageHasBeenSet() const { return m_currentAverageCoverageHasBeenSet; }
    inline void SetCurrentAverageCoverage(const Aws::String& value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage = value; }
    inline void SetCurrentAverageCoverage(Aws::String&& value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage = std::move(value); }
    inline void SetCurrentAverageCoverage(const char* value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageCoverage(const Aws::String& value) { SetCurrentAverageCoverage(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageCoverage(Aws::String&& value) { SetCurrentAverageCoverage(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageCoverage(const char* value) { SetCurrentAverageCoverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentAverageHourlyOnDemandSpend() const{ return m_currentAverageHourlyOnDemandSpend; }
    inline bool CurrentAverageHourlyOnDemandSpendHasBeenSet() const { return m_currentAverageHourlyOnDemandSpendHasBeenSet; }
    inline void SetCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = value; }
    inline void SetCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = std::move(value); }
    inline void SetCurrentAverageHourlyOnDemandSpend(const char* value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { SetCurrentAverageHourlyOnDemandSpend(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageHourlyOnDemandSpend(const char* value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentMaximumHourlyOnDemandSpend() const{ return m_currentMaximumHourlyOnDemandSpend; }
    inline bool CurrentMaximumHourlyOnDemandSpendHasBeenSet() const { return m_currentMaximumHourlyOnDemandSpendHasBeenSet; }
    inline void SetCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = value; }
    inline void SetCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = std::move(value); }
    inline void SetCurrentMaximumHourlyOnDemandSpend(const char* value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMaximumHourlyOnDemandSpend(const char* value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentMinimumHourlyOnDemandSpend() const{ return m_currentMinimumHourlyOnDemandSpend; }
    inline bool CurrentMinimumHourlyOnDemandSpendHasBeenSet() const { return m_currentMinimumHourlyOnDemandSpendHasBeenSet; }
    inline void SetCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = value; }
    inline void SetCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = std::move(value); }
    inline void SetCurrentMinimumHourlyOnDemandSpend(const char* value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentMinimumHourlyOnDemandSpend(const char* value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current total On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentOnDemandSpend() const{ return m_currentOnDemandSpend; }
    inline bool CurrentOnDemandSpendHasBeenSet() const { return m_currentOnDemandSpendHasBeenSet; }
    inline void SetCurrentOnDemandSpend(const Aws::String& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = value; }
    inline void SetCurrentOnDemandSpend(Aws::String&& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = std::move(value); }
    inline void SetCurrentOnDemandSpend(const char* value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentOnDemandSpend(const Aws::String& value) { SetCurrentOnDemandSpend(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentOnDemandSpend(Aws::String&& value) { SetCurrentOnDemandSpend(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithCurrentOnDemandSpend(const char* value) { SetCurrentOnDemandSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline const Aws::String& GetExistingHourlyCommitment() const{ return m_existingHourlyCommitment; }
    inline bool ExistingHourlyCommitmentHasBeenSet() const { return m_existingHourlyCommitmentHasBeenSet; }
    inline void SetExistingHourlyCommitment(const Aws::String& value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment = value; }
    inline void SetExistingHourlyCommitment(Aws::String&& value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment = std::move(value); }
    inline void SetExistingHourlyCommitment(const char* value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithExistingHourlyCommitment(const Aws::String& value) { SetExistingHourlyCommitment(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithExistingHourlyCommitment(Aws::String&& value) { SetExistingHourlyCommitment(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithExistingHourlyCommitment(const char* value) { SetExistingHourlyCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended or custom hourly commitment.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const{ return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    inline void SetHourlyCommitmentToPurchase(const Aws::String& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = value; }
    inline void SetHourlyCommitmentToPurchase(Aws::String&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::move(value); }
    inline void SetHourlyCommitmentToPurchase(const char* value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithHourlyCommitmentToPurchase(const Aws::String& value) { SetHourlyCommitmentToPurchase(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithHourlyCommitmentToPurchase(Aws::String&& value) { SetHourlyCommitmentToPurchase(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithHourlyCommitmentToPurchase(const char* value) { SetHourlyCommitmentToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated coverage of the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageCoverage() const{ return m_estimatedAverageCoverage; }
    inline bool EstimatedAverageCoverageHasBeenSet() const { return m_estimatedAverageCoverageHasBeenSet; }
    inline void SetEstimatedAverageCoverage(const Aws::String& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = value; }
    inline void SetEstimatedAverageCoverage(Aws::String&& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = std::move(value); }
    inline void SetEstimatedAverageCoverage(const char* value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageCoverage(const Aws::String& value) { SetEstimatedAverageCoverage(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageCoverage(Aws::String&& value) { SetEstimatedAverageCoverage(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageCoverage(const char* value) { SetEstimatedAverageCoverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated utilization of the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const{ return m_estimatedAverageUtilization; }
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }
    inline void SetEstimatedAverageUtilization(const Aws::String& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = value; }
    inline void SetEstimatedAverageUtilization(Aws::String&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::move(value); }
    inline void SetEstimatedAverageUtilization(const char* value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageUtilization(const Aws::String& value) { SetEstimatedAverageUtilization(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageUtilization(Aws::String&& value) { SetEstimatedAverageUtilization(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageUtilization(const char* value) { SetEstimatedAverageUtilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount based on the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the Savings Plan
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const{ return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    inline void SetEstimatedOnDemandCost(const Aws::String& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }
    inline void SetEstimatedOnDemandCost(Aws::String&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::move(value); }
    inline void SetEstimatedOnDemandCost(const char* value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCost(const Aws::String& value) { SetEstimatedOnDemandCost(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCost(Aws::String&& value) { SetEstimatedOnDemandCost(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCost(const char* value) { SetEstimatedOnDemandCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated On-Demand cost you expect with no additional commitment based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const{ return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = value; }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::move(value); }
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const char* value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCostWithCurrentCommitment(const char* value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated return on investment that's based on the Savings Plan and
     * estimated savings. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const{ return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    inline void SetEstimatedROI(const Aws::String& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = value; }
    inline void SetEstimatedROI(Aws::String&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::move(value); }
    inline void SetEstimatedROI(const char* value) { m_estimatedROIHasBeenSet = true; m_estimatedROI.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedROI(const Aws::String& value) { SetEstimatedROI(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedROI(Aws::String&& value) { SetEstimatedROI(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedROI(const char* value) { SetEstimatedROI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings amount that's based on the Savings Plan over the length
     * of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const{ return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    inline void SetEstimatedSavingsAmount(const Aws::String& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = value; }
    inline void SetEstimatedSavingsAmount(Aws::String&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::move(value); }
    inline void SetEstimatedSavingsAmount(const char* value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsAmount(const Aws::String& value) { SetEstimatedSavingsAmount(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsAmount(Aws::String&& value) { SetEstimatedSavingsAmount(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsAmount(const char* value) { SetEstimatedSavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    inline void SetEstimatedSavingsPercentage(const Aws::String& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }
    inline void SetEstimatedSavingsPercentage(Aws::String&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::move(value); }
    inline void SetEstimatedSavingsPercentage(const char* value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsPercentage(const Aws::String& value) { SetEstimatedSavingsPercentage(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsPercentage(Aws::String&& value) { SetEstimatedSavingsPercentage(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsPercentage(const char* value) { SetEstimatedSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated cost of the Savings Plan over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedCommitmentCost() const{ return m_estimatedCommitmentCost; }
    inline bool EstimatedCommitmentCostHasBeenSet() const { return m_estimatedCommitmentCostHasBeenSet; }
    inline void SetEstimatedCommitmentCost(const Aws::String& value) { m_estimatedCommitmentCostHasBeenSet = true; m_estimatedCommitmentCost = value; }
    inline void SetEstimatedCommitmentCost(Aws::String&& value) { m_estimatedCommitmentCostHasBeenSet = true; m_estimatedCommitmentCost = std::move(value); }
    inline void SetEstimatedCommitmentCost(const char* value) { m_estimatedCommitmentCostHasBeenSet = true; m_estimatedCommitmentCost.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedCommitmentCost(const Aws::String& value) { SetEstimatedCommitmentCost(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedCommitmentCost(Aws::String&& value) { SetEstimatedCommitmentCost(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithEstimatedCommitmentCost(const char* value) { SetEstimatedCommitmentCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last hour that went into the analysis.</p>
     */
    inline const Aws::String& GetLatestUsageTimestamp() const{ return m_latestUsageTimestamp; }
    inline bool LatestUsageTimestampHasBeenSet() const { return m_latestUsageTimestampHasBeenSet; }
    inline void SetLatestUsageTimestamp(const Aws::String& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = value; }
    inline void SetLatestUsageTimestamp(Aws::String&& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = std::move(value); }
    inline void SetLatestUsageTimestamp(const char* value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithLatestUsageTimestamp(const Aws::String& value) { SetLatestUsageTimestamp(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithLatestUsageTimestamp(Aws::String&& value) { SetLatestUsageTimestamp(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithLatestUsageTimestamp(const char* value) { SetLatestUsageTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront cost of the Savings Plan based on the selected payment
     * option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata that might be applicable to the commitment.</p>
     */
    inline const Aws::String& GetAdditionalMetadata() const{ return m_additionalMetadata; }
    inline bool AdditionalMetadataHasBeenSet() const { return m_additionalMetadataHasBeenSet; }
    inline void SetAdditionalMetadata(const Aws::String& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = value; }
    inline void SetAdditionalMetadata(Aws::String&& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = std::move(value); }
    inline void SetAdditionalMetadata(const char* value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata.assign(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithAdditionalMetadata(const Aws::String& value) { SetAdditionalMetadata(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithAdditionalMetadata(Aws::String&& value) { SetAdditionalMetadata(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithAdditionalMetadata(const char* value) { SetAdditionalMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline const Aws::Vector<RecommendationDetailHourlyMetrics>& GetMetricsOverLookbackPeriod() const{ return m_metricsOverLookbackPeriod; }
    inline bool MetricsOverLookbackPeriodHasBeenSet() const { return m_metricsOverLookbackPeriodHasBeenSet; }
    inline void SetMetricsOverLookbackPeriod(const Aws::Vector<RecommendationDetailHourlyMetrics>& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod = value; }
    inline void SetMetricsOverLookbackPeriod(Aws::Vector<RecommendationDetailHourlyMetrics>&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod = std::move(value); }
    inline SavingsPlansPurchaseAnalysisDetails& WithMetricsOverLookbackPeriod(const Aws::Vector<RecommendationDetailHourlyMetrics>& value) { SetMetricsOverLookbackPeriod(value); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& WithMetricsOverLookbackPeriod(Aws::Vector<RecommendationDetailHourlyMetrics>&& value) { SetMetricsOverLookbackPeriod(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisDetails& AddMetricsOverLookbackPeriod(const RecommendationDetailHourlyMetrics& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.push_back(value); return *this; }
    inline SavingsPlansPurchaseAnalysisDetails& AddMetricsOverLookbackPeriod(RecommendationDetailHourlyMetrics&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_lookbackPeriodInHours;
    bool m_lookbackPeriodInHoursHasBeenSet = false;

    Aws::String m_currentAverageCoverage;
    bool m_currentAverageCoverageHasBeenSet = false;

    Aws::String m_currentAverageHourlyOnDemandSpend;
    bool m_currentAverageHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMaximumHourlyOnDemandSpend;
    bool m_currentMaximumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMinimumHourlyOnDemandSpend;
    bool m_currentMinimumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentOnDemandSpend;
    bool m_currentOnDemandSpendHasBeenSet = false;

    Aws::String m_existingHourlyCommitment;
    bool m_existingHourlyCommitmentHasBeenSet = false;

    Aws::String m_hourlyCommitmentToPurchase;
    bool m_hourlyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_estimatedAverageCoverage;
    bool m_estimatedAverageCoverageHasBeenSet = false;

    Aws::String m_estimatedAverageUtilization;
    bool m_estimatedAverageUtilizationHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_estimatedOnDemandCost;
    bool m_estimatedOnDemandCostHasBeenSet = false;

    Aws::String m_estimatedOnDemandCostWithCurrentCommitment;
    bool m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = false;

    Aws::String m_estimatedROI;
    bool m_estimatedROIHasBeenSet = false;

    Aws::String m_estimatedSavingsAmount;
    bool m_estimatedSavingsAmountHasBeenSet = false;

    Aws::String m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    Aws::String m_estimatedCommitmentCost;
    bool m_estimatedCommitmentCostHasBeenSet = false;

    Aws::String m_latestUsageTimestamp;
    bool m_latestUsageTimestampHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_additionalMetadata;
    bool m_additionalMetadataHasBeenSet = false;

    Aws::Vector<RecommendationDetailHourlyMetrics> m_metricsOverLookbackPeriod;
    bool m_metricsOverLookbackPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
