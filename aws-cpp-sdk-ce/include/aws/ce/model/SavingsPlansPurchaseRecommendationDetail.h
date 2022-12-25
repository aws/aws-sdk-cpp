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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail();
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline const SavingsPlansDetails& GetSavingsPlansDetails() const{ return m_savingsPlansDetails; }

    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline bool SavingsPlansDetailsHasBeenSet() const { return m_savingsPlansDetailsHasBeenSet; }

    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline void SetSavingsPlansDetails(const SavingsPlansDetails& value) { m_savingsPlansDetailsHasBeenSet = true; m_savingsPlansDetails = value; }

    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline void SetSavingsPlansDetails(SavingsPlansDetails&& value) { m_savingsPlansDetailsHasBeenSet = true; m_savingsPlansDetails = std::move(value); }

    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithSavingsPlansDetails(const SavingsPlansDetails& value) { SetSavingsPlansDetails(value); return *this;}

    /**
     * <p>Details for your recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithSavingsPlansDetails(SavingsPlansDetails&& value) { SetSavingsPlansDetails(std::move(value)); return *this;}


    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountID</code> the recommendation is generated for.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}

    /**
     * <p>The upfront cost of the recommended Savings Plans, based on the selected
     * payment option.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}


    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline const Aws::String& GetEstimatedROI() const{ return m_estimatedROI; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline bool EstimatedROIHasBeenSet() const { return m_estimatedROIHasBeenSet; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline void SetEstimatedROI(const Aws::String& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = value; }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline void SetEstimatedROI(Aws::String&& value) { m_estimatedROIHasBeenSet = true; m_estimatedROI = std::move(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline void SetEstimatedROI(const char* value) { m_estimatedROIHasBeenSet = true; m_estimatedROI.assign(value); }

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedROI(const Aws::String& value) { SetEstimatedROI(value); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedROI(Aws::String&& value) { SetEstimatedROI(std::move(value)); return *this;}

    /**
     * <p>The estimated return on investment that's based on the recommended Savings
     * Plans that you purchased. This is calculated as
     * <code>estimatedSavingsAmount</code>/ <code>estimatedSPCost</code>*100.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedROI(const char* value) { SetEstimatedROI(value); return *this;}


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
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to generate the
     * recommendations and present potential savings.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline const Aws::String& GetEstimatedSPCost() const{ return m_estimatedSPCost; }

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline bool EstimatedSPCostHasBeenSet() const { return m_estimatedSPCostHasBeenSet; }

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(const Aws::String& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = value; }

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(Aws::String&& value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost = std::move(value); }

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline void SetEstimatedSPCost(const char* value) { m_estimatedSPCostHasBeenSet = true; m_estimatedSPCost.assign(value); }

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSPCost(const Aws::String& value) { SetEstimatedSPCost(value); return *this;}

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSPCost(Aws::String&& value) { SetEstimatedSPCost(std::move(value)); return *this;}

    /**
     * <p>The cost of the recommended Savings Plans over the length of the lookback
     * period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSPCost(const char* value) { SetEstimatedSPCost(value); return *this;}


    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const{ return m_estimatedOnDemandCost; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const Aws::String& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(Aws::String&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::move(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const char* value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost.assign(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCost(const Aws::String& value) { SetEstimatedOnDemandCost(value); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCost(Aws::String&& value) { SetEstimatedOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plans, over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCost(const char* value) { SetEstimatedOnDemandCost(value); return *this;}


    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline const Aws::String& GetEstimatedOnDemandCostWithCurrentCommitment() const{ return m_estimatedOnDemandCostWithCurrentCommitment; }

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline bool EstimatedOnDemandCostWithCurrentCommitmentHasBeenSet() const { return m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet; }

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = value; }

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment = std::move(value); }

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline void SetEstimatedOnDemandCostWithCurrentCommitment(const char* value) { m_estimatedOnDemandCostWithCurrentCommitmentHasBeenSet = true; m_estimatedOnDemandCostWithCurrentCommitment.assign(value); }

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCostWithCurrentCommitment(const Aws::String& value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCostWithCurrentCommitment(Aws::String&& value) { SetEstimatedOnDemandCostWithCurrentCommitment(std::move(value)); return *this;}

    /**
     * <p> The estimated On-Demand costs you expect with no additional commitment,
     * based on your usage of the selected time period and the Savings Plans you own.
     * </p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedOnDemandCostWithCurrentCommitment(const char* value) { SetEstimatedOnDemandCostWithCurrentCommitment(value); return *this;}


    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsAmount() const{ return m_estimatedSavingsAmount; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline bool EstimatedSavingsAmountHasBeenSet() const { return m_estimatedSavingsAmountHasBeenSet; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(const Aws::String& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = value; }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(Aws::String&& value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount = std::move(value); }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline void SetEstimatedSavingsAmount(const char* value) { m_estimatedSavingsAmountHasBeenSet = true; m_estimatedSavingsAmount.assign(value); }

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsAmount(const Aws::String& value) { SetEstimatedSavingsAmount(value); return *this;}

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsAmount(Aws::String&& value) { SetEstimatedSavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated savings amount that's based on the recommended Savings Plans
     * over the length of the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsAmount(const char* value) { SetEstimatedSavingsAmount(value); return *this;}


    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedSavingsPercentage() const{ return m_estimatedSavingsPercentage; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline bool EstimatedSavingsPercentageHasBeenSet() const { return m_estimatedSavingsPercentageHasBeenSet; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(const Aws::String& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = value; }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(Aws::String&& value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage = std::move(value); }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline void SetEstimatedSavingsPercentage(const char* value) { m_estimatedSavingsPercentageHasBeenSet = true; m_estimatedSavingsPercentage.assign(value); }

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsPercentage(const Aws::String& value) { SetEstimatedSavingsPercentage(value); return *this;}

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsPercentage(Aws::String&& value) { SetEstimatedSavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>The estimated savings percentage relative to the total cost of applicable
     * On-Demand usage over the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedSavingsPercentage(const char* value) { SetEstimatedSavingsPercentage(value); return *this;}


    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline const Aws::String& GetHourlyCommitmentToPurchase() const{ return m_hourlyCommitmentToPurchase; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline bool HourlyCommitmentToPurchaseHasBeenSet() const { return m_hourlyCommitmentToPurchaseHasBeenSet; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const Aws::String& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = value; }

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(Aws::String&& value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase = std::move(value); }

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline void SetHourlyCommitmentToPurchase(const char* value) { m_hourlyCommitmentToPurchaseHasBeenSet = true; m_hourlyCommitmentToPurchase.assign(value); }

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithHourlyCommitmentToPurchase(const Aws::String& value) { SetHourlyCommitmentToPurchase(value); return *this;}

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithHourlyCommitmentToPurchase(Aws::String&& value) { SetHourlyCommitmentToPurchase(std::move(value)); return *this;}

    /**
     * <p>The recommended hourly commitment level for the Savings Plans type and the
     * configuration that's based on the usage during the lookback period.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithHourlyCommitmentToPurchase(const char* value) { SetHourlyCommitmentToPurchase(value); return *this;}


    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline const Aws::String& GetEstimatedAverageUtilization() const{ return m_estimatedAverageUtilization; }

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline bool EstimatedAverageUtilizationHasBeenSet() const { return m_estimatedAverageUtilizationHasBeenSet; }

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedAverageUtilization(const Aws::String& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = value; }

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedAverageUtilization(Aws::String&& value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization = std::move(value); }

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline void SetEstimatedAverageUtilization(const char* value) { m_estimatedAverageUtilizationHasBeenSet = true; m_estimatedAverageUtilization.assign(value); }

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedAverageUtilization(const Aws::String& value) { SetEstimatedAverageUtilization(value); return *this;}

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedAverageUtilization(Aws::String&& value) { SetEstimatedAverageUtilization(std::move(value)); return *this;}

    /**
     * <p>The estimated utilization of the recommended Savings Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedAverageUtilization(const char* value) { SetEstimatedAverageUtilization(value); return *this;}


    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The estimated monthly savings amount based on the recommended Savings
     * Plans.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMinimumHourlyOnDemandSpend() const{ return m_currentMinimumHourlyOnDemandSpend; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentMinimumHourlyOnDemandSpendHasBeenSet() const { return m_currentMinimumHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = value; }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMinimumHourlyOnDemandSpend(const char* value) { m_currentMinimumHourlyOnDemandSpendHasBeenSet = true; m_currentMinimumHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMinimumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMinimumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMinimumHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The lowest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMinimumHourlyOnDemandSpend(const char* value) { SetCurrentMinimumHourlyOnDemandSpend(value); return *this;}


    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentMaximumHourlyOnDemandSpend() const{ return m_currentMaximumHourlyOnDemandSpend; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentMaximumHourlyOnDemandSpendHasBeenSet() const { return m_currentMaximumHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = value; }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentMaximumHourlyOnDemandSpend(const char* value) { m_currentMaximumHourlyOnDemandSpendHasBeenSet = true; m_currentMaximumHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMaximumHourlyOnDemandSpend(const Aws::String& value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMaximumHourlyOnDemandSpend(Aws::String&& value) { SetCurrentMaximumHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The highest value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentMaximumHourlyOnDemandSpend(const char* value) { SetCurrentMaximumHourlyOnDemandSpend(value); return *this;}


    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline const Aws::String& GetCurrentAverageHourlyOnDemandSpend() const{ return m_currentAverageHourlyOnDemandSpend; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline bool CurrentAverageHourlyOnDemandSpendHasBeenSet() const { return m_currentAverageHourlyOnDemandSpendHasBeenSet; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = value; }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend = std::move(value); }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline void SetCurrentAverageHourlyOnDemandSpend(const char* value) { m_currentAverageHourlyOnDemandSpendHasBeenSet = true; m_currentAverageHourlyOnDemandSpend.assign(value); }

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentAverageHourlyOnDemandSpend(const Aws::String& value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentAverageHourlyOnDemandSpend(Aws::String&& value) { SetCurrentAverageHourlyOnDemandSpend(std::move(value)); return *this;}

    /**
     * <p>The average value of hourly On-Demand spend over the lookback period of the
     * applicable usage type.</p>
     */
    inline SavingsPlansPurchaseRecommendationDetail& WithCurrentAverageHourlyOnDemandSpend(const char* value) { SetCurrentAverageHourlyOnDemandSpend(value); return *this;}

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
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
