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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The currency code used for the analysis.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period in hours that's used to generate the analysis.</p>
     */
    inline const Aws::String& GetLookbackPeriodInHours() const { return m_lookbackPeriodInHours; }
    inline bool LookbackPeriodInHoursHasBeenSet() const { return m_lookbackPeriodInHoursHasBeenSet; }
    template<typename LookbackPeriodInHoursT = Aws::String>
    void SetLookbackPeriodInHours(LookbackPeriodInHoursT&& value) { m_lookbackPeriodInHoursHasBeenSet = true; m_lookbackPeriodInHours = std::forward<LookbackPeriodInHoursT>(value); }
    template<typename LookbackPeriodInHoursT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithLookbackPeriodInHours(LookbackPeriodInHoursT&& value) { SetLookbackPeriodInHours(std::forward<LookbackPeriodInHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of hourly coverage over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentAverageCoverage() const { return m_currentAverageCoverage; }
    inline bool CurrentAverageCoverageHasBeenSet() const { return m_currentAverageCoverageHasBeenSet; }
    template<typename CurrentAverageCoverageT = Aws::String>
    void SetCurrentAverageCoverage(CurrentAverageCoverageT&& value) { m_currentAverageCoverageHasBeenSet = true; m_currentAverageCoverage = std::forward<CurrentAverageCoverageT>(value); }
    template<typename CurrentAverageCoverageT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageCoverage(CurrentAverageCoverageT&& value) { SetCurrentAverageCoverage(std::forward<CurrentAverageCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentAverageHourlyOnDemandSpend() const { return m_currentAverageHourlyOnDemandSpend; }
    inline bool CurrentAverageHourlyOnDemandSpendHasBeenSet() const { return m_currentAverageHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentAverageHourlyOnDemandSpendT = Aws::String>
    void SetCurrentAverageHourlyOnDemandSpend(CurrentAverageHourlyOnDemandSpendT&& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = std::forward<CurrentAverageHourlyOnDemandSpendT>(value); }
    template<typename CurrentAverageHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrentAverageHourlyOnDemandSpend(CurrentAverageHourlyOnDemandSpendT&& value) { SetCurrentAverageHourlyOnDemandSpend(std::forward<CurrentAverageHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentMaximumHourlyOnDemandSpend() const { return m_currentMaximumHourlyOnDemandSpend; }
    inline bool CurrentMaximumHourlyOnDemandSpendHasBeenSet() const { return m_currentMaximumHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentMaximumHourlyOnDemandSpendT = Aws::String>
    void SetCurrentMaximumHourlyOnDemandSpend(CurrentMaximumHourlyOnDemandSpendT&& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = std::forward<CurrentMaximumHourlyOnDemandSpendT>(value); }
    template<typename CurrentMaximumHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrentMaximumHourlyOnDemandSpend(CurrentMaximumHourlyOnDemandSpendT&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::forward<CurrentMaximumHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentMinimumHourlyOnDemandSpend() const { return m_currentMinimumHourlyOnDemandSpend; }
    inline bool CurrentMinimumHourlyOnDemandSpendHasBeenSet() const { return m_currentMinimumHourlyOnDemandSpendHasBeenSet; }
    template<typename CurrentMinimumHourlyOnDemandSpendT = Aws::String>
    void SetCurrentMinimumHourlyOnDemandSpend(CurrentMinimumHourlyOnDemandSpendT&& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = std::forward<CurrentMinimumHourlyOnDemandSpendT>(value); }
    template<typename CurrentMinimumHourlyOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrentMinimumHourlyOnDemandSpend(CurrentMinimumHourlyOnDemandSpendT&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::forward<CurrentMinimumHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current total On-Demand spend over the lookback period.</p>
     */
    inline const Aws::String& GetCurrentOnDemandSpend() const { return m_currentOnDemandSpend; }
    inline bool CurrentOnDemandSpendHasBeenSet() const { return m_currentOnDemandSpendHasBeenSet; }
    template<typename CurrentOnDemandSpendT = Aws::String>
    void SetCurrentOnDemandSpend(CurrentOnDemandSpendT&& value) { m_currentOnDemandSpendHasBeenSet = true; m_currentOnDemandSpend = std::forward<CurrentOnDemandSpendT>(value); }
    template<typename CurrentOnDemandSpendT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithCurrentOnDemandSpend(CurrentOnDemandSpendT&& value) { SetCurrentOnDemandSpend(std::forward<CurrentOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing hourly commitment for the Savings Plan type.</p>
     */
    inline const Aws::String& GetExistingHourlyCommitment() const { return m_existingHourlyCommitment; }
    inline bool ExistingHourlyCommitmentHasBeenSet() const { return m_existingHourlyCommitmentHasBeenSet; }
    template<typename ExistingHourlyCommitmentT = Aws::String>
    void SetExistingHourlyCommitment(ExistingHourlyCommitmentT&& value) { m_existingHourlyCommitmentHasBeenSet = true; m_existingHourlyCommitment = std::forward<ExistingHourlyCommitmentT>(value); }
    template<typename ExistingHourlyCommitmentT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithExistingHourlyCommitment(ExistingHourlyCommitmentT&& value) { SetExistingHourlyCommitment(std::forward<ExistingHourlyCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended or custom hourly commitment.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const { return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    void SetHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::forward<HourlyCommitmentToPurchaseT>(value); }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { SetHourlyCommitmentToPurchase(std::forward<HourlyCommitmentToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated coverage of the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageCoverage() const { return m_estimatedAverageCoverage; }
    inline bool EstimatedAverageCoverageHasBeenSet() const { return m_estimatedAverageCoverageHasBeenSet; }
    template<typename EstimatedAverageCoverageT = Aws::String>
    void SetEstimatedAverageCoverage(EstimatedAverageCoverageT&& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = std::forward<EstimatedAverageCoverageT>(value); }
    template<typename EstimatedAverageCoverageT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageCoverage(EstimatedAverageCoverageT&& value) { SetEstimatedAverageCoverage(std::forward<EstimatedAverageCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated utilization of the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const { return m_estimatedAverageUtilization; }
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    void SetEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::forward<EstimatedAverageUtilizationT>(value); }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { SetEstimatedAverageUtilization(std::forward<EstimatedAverageUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount based on the Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const { return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    void SetEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::forward<EstimatedMonthlySavingsAmountT>(value); }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { SetEstimatedMonthlySavingsAmount(std::forward<EstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the Savings Plan
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    template<typename EstimatedOnDemandCostT = Aws::String>
    void SetEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::forward<EstimatedOnDemandCostT>(value); }
    template<typename EstimatedOnDemandCostT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { SetEstimatedOnDemandCost(std::forward<EstimatedOnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated On-Demand cost you expect with no additional commitment based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const { return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    void SetEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value); }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated return on investment that's based on the Savings Plan and
     * estimated savings. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const { return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    template<typename EstimatedROIT = Aws::String>
    void SetEstimatedROI(EstimatedROIT&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::forward<EstimatedROIT>(value); }
    template<typename EstimatedROIT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedROI(EstimatedROIT&& value) { SetEstimatedROI(std::forward<EstimatedROIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings amount that's based on the Savings Plan over the length
     * of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const { return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    template<typename EstimatedSavingsAmountT = Aws::String>
    void SetEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::forward<EstimatedSavingsAmountT>(value); }
    template<typename EstimatedSavingsAmountT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { SetEstimatedSavingsAmount(std::forward<EstimatedSavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings percentage relative to the total cost over the cost
     * calculation lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const { return m_estimatedSavingsPercentage; }
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    void SetEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::forward<EstimatedSavingsPercentageT>(value); }
    template<typename EstimatedSavingsPercentageT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { SetEstimatedSavingsPercentage(std::forward<EstimatedSavingsPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated cost of the Savings Plan over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedCommitmentCost() const { return m_estimatedCommitmentCost; }
    inline bool EstimatedCommitmentCostHasBeenSet() const { return m_estimatedCommitmentCostHasBeenSet; }
    template<typename EstimatedCommitmentCostT = Aws::String>
    void SetEstimatedCommitmentCost(EstimatedCommitmentCostT&& value) { m_estimatedCommitmentCostHasBeenSet = true; m_estimatedCommitmentCost = std::forward<EstimatedCommitmentCostT>(value); }
    template<typename EstimatedCommitmentCostT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithEstimatedCommitmentCost(EstimatedCommitmentCostT&& value) { SetEstimatedCommitmentCost(std::forward<EstimatedCommitmentCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last hour that went into the analysis.</p>
     */
    inline const Aws::String& GetLatestUsageTimestamp() const { return m_latestUsageTimestamp; }
    inline bool LatestUsageTimestampHasBeenSet() const { return m_latestUsageTimestampHasBeenSet; }
    template<typename LatestUsageTimestampT = Aws::String>
    void SetLatestUsageTimestamp(LatestUsageTimestampT&& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = std::forward<LatestUsageTimestampT>(value); }
    template<typename LatestUsageTimestampT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithLatestUsageTimestamp(LatestUsageTimestampT&& value) { SetLatestUsageTimestamp(std::forward<LatestUsageTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront cost of the Savings Plan based on the selected payment
     * option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata that might be applicable to the commitment.</p>
     */
    inline const Aws::String& GetAdditionalMetadata() const { return m_additionalMetadata; }
    inline bool AdditionalMetadataHasBeenSet() const { return m_additionalMetadataHasBeenSet; }
    template<typename AdditionalMetadataT = Aws::String>
    void SetAdditionalMetadata(AdditionalMetadataT&& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = std::forward<AdditionalMetadataT>(value); }
    template<typename AdditionalMetadataT = Aws::String>
    SavingsPlansPurchaseAnalysisDetails& WithAdditionalMetadata(AdditionalMetadataT&& value) { SetAdditionalMetadata(std::forward<AdditionalMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The related hourly cost, coverage, and utilization metrics over the lookback
     * period.</p>
     */
    inline const Aws::Vector<RecommendationDetailHourlyMetrics>& GetMetricsOverLookbackPeriod() const { return m_metricsOverLookbackPeriod; }
    inline bool MetricsOverLookbackPeriodHasBeenSet() const { return m_metricsOverLookbackPeriodHasBeenSet; }
    template<typename MetricsOverLookbackPeriodT = Aws::Vector<RecommendationDetailHourlyMetrics>>
    void SetMetricsOverLookbackPeriod(MetricsOverLookbackPeriodT&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod = std::forward<MetricsOverLookbackPeriodT>(value); }
    template<typename MetricsOverLookbackPeriodT = Aws::Vector<RecommendationDetailHourlyMetrics>>
    SavingsPlansPurchaseAnalysisDetails& WithMetricsOverLookbackPeriod(MetricsOverLookbackPeriodT&& value) { SetMetricsOverLookbackPeriod(std::forward<MetricsOverLookbackPeriodT>(value)); return *this;}
    template<typename MetricsOverLookbackPeriodT = RecommendationDetailHourlyMetrics>
    SavingsPlansPurchaseAnalysisDetails& AddMetricsOverLookbackPeriod(MetricsOverLookbackPeriodT&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.emplace_back(std::forward<MetricsOverLookbackPeriodT>(value)); return *this; }
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
