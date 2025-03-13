/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
#include <aws/ce/model/SupportedSavingsPlansType.h>
#include <aws/ce/model/TermInYears.h>
#include <aws/ce/model/PaymentOption.h>
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
   * <p>The details and metrics for the given recommendation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RecommendationDetailData">AWS
   * API Reference</a></p>
   */
  class RecommendationDetailData
  {
  public:
    AWS_COSTEXPLORER_API RecommendationDetailData() = default;
    AWS_COSTEXPLORER_API RecommendationDetailData(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RecommendationDetailData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to PAYER. If the value is LINKED, recommendations are
     * calculated for individual member accounts only.</p>
     */
    inline AccountScope GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(AccountScope value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline RecommendationDetailData& WithAccountScope(AccountScope value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many days of previous usage that Amazon Web Services considers when
     * making this recommendation.</p>
     */
    inline LookbackPeriodInDays GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline RecommendationDetailData& WithLookbackPeriodInDays(LookbackPeriodInDays value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested Savings Plan recommendation type.</p>
     */
    inline SupportedSavingsPlansType GetSavingsPlansType() const { return m_savingsPlansType; }
    inline bool SavingsPlansTypeHasBeenSet() const { return m_savingsPlansTypeHasBeenSet; }
    inline void SetSavingsPlansType(SupportedSavingsPlansType value) { m_savingsPlansTypeHasBeenSet = true; m_savingsPlansType = value; }
    inline RecommendationDetailData& WithSavingsPlansType(SupportedSavingsPlansType value) { SetSavingsPlansType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term of the commitment in years.</p>
     */
    inline TermInYears GetTermInYears() const { return m_termInYears; }
    inline bool TermInYearsHasBeenSet() const { return m_termInYearsHasBeenSet; }
    inline void SetTermInYears(TermInYears value) { m_termInYearsHasBeenSet = true; m_termInYears = value; }
    inline RecommendationDetailData& WithTermInYears(TermInYears value) { SetTermInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment (for example, All Upfront or No
     * Upfront).</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline RecommendationDetailData& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AccountID that the recommendation is generated for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RecommendationDetailData& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendation and present potential savings.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    RecommendationDetailData& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    RecommendationDetailData& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region the recommendation is generated for.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RecommendationDetailData& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    RecommendationDetailData& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGenerationTimestamp() const { return m_generationTimestamp; }
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }
    template<typename GenerationTimestampT = Aws::String>
    void SetGenerationTimestamp(GenerationTimestampT&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::forward<GenerationTimestampT>(value); }
    template<typename GenerationTimestampT = Aws::String>
    RecommendationDetailData& WithGenerationTimestamp(GenerationTimestampT&& value) { SetGenerationTimestamp(std::forward<GenerationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLatestUsageTimestamp() const { return m_latestUsageTimestamp; }
    inline bool LatestUsageTimestampHasBeenSet() const { return m_latestUsageTimestampHasBeenSet; }
    template<typename LatestUsageTimestampT = Aws::String>
    void SetLatestUsageTimestamp(LatestUsageTimestampT&& value) { m_latestUsageTimestampHasBeenSet = true; m_latestUsageTimestamp = std::forward<LatestUsageTimestampT>(value); }
    template<typename LatestUsageTimestampT = Aws::String>
    RecommendationDetailData& WithLatestUsageTimestamp(LatestUsageTimestampT&& value) { SetLatestUsageTimestamp(std::forward<LatestUsageTimestampT>(value)); return *this;}
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
    RecommendationDetailData& WithCurrentAverageHourlyOnDemandSpend(CurrentAverageHourlyOnDemandSpendT&& value) { SetCurrentAverageHourlyOnDemandSpend(std::forward<CurrentAverageHourlyOnDemandSpendT>(value)); return *this;}
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
    RecommendationDetailData& WithCurrentMaximumHourlyOnDemandSpend(CurrentMaximumHourlyOnDemandSpendT&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::forward<CurrentMaximumHourlyOnDemandSpendT>(value)); return *this;}
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
    RecommendationDetailData& WithCurrentMinimumHourlyOnDemandSpend(CurrentMinimumHourlyOnDemandSpendT&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::forward<CurrentMinimumHourlyOnDemandSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated utilization of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const { return m_estimatedAverageUtilization; }
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    void SetEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::forward<EstimatedAverageUtilizationT>(value); }
    template<typename EstimatedAverageUtilizationT = Aws::String>
    RecommendationDetailData& WithEstimatedAverageUtilization(EstimatedAverageUtilizationT&& value) { SetEstimatedAverageUtilization(std::forward<EstimatedAverageUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plan.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const { return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    void SetEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::forward<EstimatedMonthlySavingsAmountT>(value); }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    RecommendationDetailData& WithEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { SetEstimatedMonthlySavingsAmount(std::forward<EstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    template<typename EstimatedOnDemandCostT = Aws::String>
    void SetEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::forward<EstimatedOnDemandCostT>(value); }
    template<typename EstimatedOnDemandCostT = Aws::String>
    RecommendationDetailData& WithEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { SetEstimatedOnDemandCost(std::forward<EstimatedOnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated On-Demand costs you expect with no additional commitment, based
     * on your usage of the selected time period and the Savings Plan you own.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const { return m_estimatedOnDemandCostWithCurrentCommitment; }
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    void SetEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value); }
    template<typename EstimatedOnDemandCostWithCurrentCommitmentT = Aws::String>
    RecommendationDetailData& WithEstimatedOnDemandCostWithCurrentCommitment(EstimatedOnDemandCostWithCurrentCommitmentT&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::forward<EstimatedOnDemandCostWithCurrentCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plan that you purchased. This is calculated as
     * estimatedSavingsAmount/estimatedSPCost*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const { return m_estimatedROI; }
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }
    template<typename EstimatedROIT = Aws::String>
    void SetEstimatedROI(EstimatedROIT&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::forward<EstimatedROIT>(value); }
    template<typename EstimatedROIT = Aws::String>
    RecommendationDetailData& WithEstimatedROI(EstimatedROIT&& value) { SetEstimatedROI(std::forward<EstimatedROIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of the recommended Savings Plan over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedSPCost() const { return m_estimatedSPCost; }
    inline bool EstimatedSPCostHasBeenSet() const { return m_estimatedSPCostHasBeenSet; }
    template<typename EstimatedSPCostT = Aws::String>
    void SetEstimatedSPCost(EstimatedSPCostT&& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = std::forward<EstimatedSPCostT>(value); }
    template<typename EstimatedSPCostT = Aws::String>
    RecommendationDetailData& WithEstimatedSPCost(EstimatedSPCostT&& value) { SetEstimatedSPCost(std::forward<EstimatedSPCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plan
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const { return m_estimatedSavingsAmount; }
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }
    template<typename EstimatedSavingsAmountT = Aws::String>
    void SetEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::forward<EstimatedSavingsAmountT>(value); }
    template<typename EstimatedSavingsAmountT = Aws::String>
    RecommendationDetailData& WithEstimatedSavingsAmount(EstimatedSavingsAmountT&& value) { SetEstimatedSavingsAmount(std::forward<EstimatedSavingsAmountT>(value)); return *this;}
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
    RecommendationDetailData& WithEstimatedSavingsPercentage(EstimatedSavingsPercentageT&& value) { SetEstimatedSavingsPercentage(std::forward<EstimatedSavingsPercentageT>(value)); return *this;}
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
    RecommendationDetailData& WithExistingHourlyCommitment(ExistingHourlyCommitmentT&& value) { SetExistingHourlyCommitment(std::forward<ExistingHourlyCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended hourly commitment level for the Savings Plan type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const { return m_hourlyCommitmentToPurchase; }
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    void SetHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::forward<HourlyCommitmentToPurchaseT>(value); }
    template<typename HourlyCommitmentToPurchaseT = Aws::String>
    RecommendationDetailData& WithHourlyCommitmentToPurchase(HourlyCommitmentToPurchaseT&& value) { SetHourlyCommitmentToPurchase(std::forward<HourlyCommitmentToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront cost of the recommended Savings Plan, based on the selected
     * payment option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    RecommendationDetailData& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
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
    RecommendationDetailData& WithCurrentAverageCoverage(CurrentAverageCoverageT&& value) { SetCurrentAverageCoverage(std::forward<CurrentAverageCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated coverage of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedAverageCoverage() const { return m_estimatedAverageCoverage; }
    inline bool EstimatedAverageCoverageHasBeenSet() const { return m_estimatedAverageCoverageHasBeenSet; }
    template<typename EstimatedAverageCoverageT = Aws::String>
    void SetEstimatedAverageCoverage(EstimatedAverageCoverageT&& value) { m_estimatedAverageCoverageHasBeenSet = true; m_estimatedAverageCoverage = std::forward<EstimatedAverageCoverageT>(value); }
    template<typename EstimatedAverageCoverageT = Aws::String>
    RecommendationDetailData& WithEstimatedAverageCoverage(EstimatedAverageCoverageT&& value) { SetEstimatedAverageCoverage(std::forward<EstimatedAverageCoverageT>(value)); return *this;}
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
    RecommendationDetailData& WithMetricsOverLookbackPeriod(MetricsOverLookbackPeriodT&& value) { SetMetricsOverLookbackPeriod(std::forward<MetricsOverLookbackPeriodT>(value)); return *this;}
    template<typename MetricsOverLookbackPeriodT = RecommendationDetailHourlyMetrics>
    RecommendationDetailData& AddMetricsOverLookbackPeriod(MetricsOverLookbackPeriodT&& value) { m_metricsOverLookbackPeriodHasBeenSet = true; m_metricsOverLookbackPeriod.emplace_back(std::forward<MetricsOverLookbackPeriodT>(value)); return *this; }
    ///@}
  private:

    AccountScope m_accountScope{AccountScope::NOT_SET};
    bool m_accountScopeHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays{LookbackPeriodInDays::NOT_SET};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    SupportedSavingsPlansType m_savingsPlansType{SupportedSavingsPlansType::NOT_SET};
    bool m_savingsPlansTypeHasBeenSet = false;

    TermInYears m_termInYears{TermInYears::NOT_SET};
    bool m_termInYearsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet = false;

    Aws::String m_latestUsageTimestamp;
    bool m_latestUsageTimestampHasBeenSet = false;

    Aws::String m_currentAverageHourlyOnDemandSpend;
    bool m_currentAverageHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMaximumHourlyOnDemandSpend;
    bool m_currentMaximumHourlyOnDemandSpendHasBeenSet = false;

    Aws::String m_currentMinimumHourlyOnDemandSpend;
    bool m_currentMinimumHourlyOnDemandSpendHasBeenSet = false;

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

    Aws::String m_estimatedSPCost;
    bool m_estimatedSPCostHasBeenSet = false;

    Aws::String m_estimatedSavingsAmount;
    bool m_estimatedSavingsAmountHasBeenSet = false;

    Aws::String m_estimatedSavingsPercentage;
    bool m_estimatedSavingsPercentageHasBeenSet = false;

    Aws::String m_existingHourlyCommitment;
    bool m_existingHourlyCommitmentHasBeenSet = false;

    Aws::String m_hourlyCommitmentToPurchase;
    bool m_hourlyCommitmentToPurchaseHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_currentAverageCoverage;
    bool m_currentAverageCoverageHasBeenSet = false;

    Aws::String m_estimatedAverageCoverage;
    bool m_estimatedAverageCoverageHasBeenSet = false;

    Aws::Vector<RecommendationDetailHourlyMetrics> m_metricsOverLookbackPeriod;
    bool m_metricsOverLookbackPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
