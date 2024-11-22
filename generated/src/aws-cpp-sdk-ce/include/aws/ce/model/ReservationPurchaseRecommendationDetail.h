/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/InstanceDetails.h>
#include <aws/ce/model/ReservedCapacityDetails.h>
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
   * <p>Details about your recommended reservation purchase.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class ReservationPurchaseRecommendationDetail
  {
  public:
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail();
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account that this Reserved Instance (RI) recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const{ return m_instanceDetails; }
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }
    inline void SetInstanceDetails(const InstanceDetails& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = value; }
    inline void SetInstanceDetails(InstanceDetails&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::move(value); }
    inline ReservationPurchaseRecommendationDetail& WithInstanceDetails(const InstanceDetails& value) { SetInstanceDetails(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithInstanceDetails(InstanceDetails&& value) { SetInstanceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetRecommendedNumberOfInstancesToPurchase() const{ return m_recommendedNumberOfInstancesToPurchase; }
    inline bool RecommendedNumberOfInstancesToPurchaseHasBeenSet() const { return m_recommendedNumberOfInstancesToPurchaseHasBeenSet; }
    inline void SetRecommendedNumberOfInstancesToPurchase(const Aws::String& value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase = value; }
    inline void SetRecommendedNumberOfInstancesToPurchase(Aws::String&& value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase = std::move(value); }
    inline void SetRecommendedNumberOfInstancesToPurchase(const char* value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(const Aws::String& value) { SetRecommendedNumberOfInstancesToPurchase(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(Aws::String&& value) { SetRecommendedNumberOfInstancesToPurchase(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(const char* value) { SetRecommendedNumberOfInstancesToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetRecommendedNormalizedUnitsToPurchase() const{ return m_recommendedNormalizedUnitsToPurchase; }
    inline bool RecommendedNormalizedUnitsToPurchaseHasBeenSet() const { return m_recommendedNormalizedUnitsToPurchaseHasBeenSet; }
    inline void SetRecommendedNormalizedUnitsToPurchase(const Aws::String& value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase = value; }
    inline void SetRecommendedNormalizedUnitsToPurchase(Aws::String&& value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase = std::move(value); }
    inline void SetRecommendedNormalizedUnitsToPurchase(const char* value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(const Aws::String& value) { SetRecommendedNormalizedUnitsToPurchase(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(Aws::String&& value) { SetRecommendedNormalizedUnitsToPurchase(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(const char* value) { SetRecommendedNormalizedUnitsToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNumberOfInstancesUsedPerHour() const{ return m_minimumNumberOfInstancesUsedPerHour; }
    inline bool MinimumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_minimumNumberOfInstancesUsedPerHourHasBeenSet; }
    inline void SetMinimumNumberOfInstancesUsedPerHour(const Aws::String& value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour = value; }
    inline void SetMinimumNumberOfInstancesUsedPerHour(Aws::String&& value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour = std::move(value); }
    inline void SetMinimumNumberOfInstancesUsedPerHour(const char* value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(const Aws::String& value) { SetMinimumNumberOfInstancesUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(Aws::String&& value) { SetMinimumNumberOfInstancesUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(const char* value) { SetMinimumNumberOfInstancesUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNormalizedUnitsUsedPerHour() const{ return m_minimumNormalizedUnitsUsedPerHour; }
    inline bool MinimumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_minimumNormalizedUnitsUsedPerHourHasBeenSet; }
    inline void SetMinimumNormalizedUnitsUsedPerHour(const Aws::String& value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour = value; }
    inline void SetMinimumNormalizedUnitsUsedPerHour(Aws::String&& value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour = std::move(value); }
    inline void SetMinimumNormalizedUnitsUsedPerHour(const char* value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(const Aws::String& value) { SetMinimumNormalizedUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(Aws::String&& value) { SetMinimumNormalizedUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(const char* value) { SetMinimumNormalizedUnitsUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNumberOfInstancesUsedPerHour() const{ return m_maximumNumberOfInstancesUsedPerHour; }
    inline bool MaximumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_maximumNumberOfInstancesUsedPerHourHasBeenSet; }
    inline void SetMaximumNumberOfInstancesUsedPerHour(const Aws::String& value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour = value; }
    inline void SetMaximumNumberOfInstancesUsedPerHour(Aws::String&& value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour = std::move(value); }
    inline void SetMaximumNumberOfInstancesUsedPerHour(const char* value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(const Aws::String& value) { SetMaximumNumberOfInstancesUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(Aws::String&& value) { SetMaximumNumberOfInstancesUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(const char* value) { SetMaximumNumberOfInstancesUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNormalizedUnitsUsedPerHour() const{ return m_maximumNormalizedUnitsUsedPerHour; }
    inline bool MaximumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_maximumNormalizedUnitsUsedPerHourHasBeenSet; }
    inline void SetMaximumNormalizedUnitsUsedPerHour(const Aws::String& value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour = value; }
    inline void SetMaximumNormalizedUnitsUsedPerHour(Aws::String&& value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour = std::move(value); }
    inline void SetMaximumNormalizedUnitsUsedPerHour(const char* value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(const Aws::String& value) { SetMaximumNormalizedUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(Aws::String&& value) { SetMaximumNormalizedUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(const char* value) { SetMaximumNormalizedUnitsUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNumberOfInstancesUsedPerHour() const{ return m_averageNumberOfInstancesUsedPerHour; }
    inline bool AverageNumberOfInstancesUsedPerHourHasBeenSet() const { return m_averageNumberOfInstancesUsedPerHourHasBeenSet; }
    inline void SetAverageNumberOfInstancesUsedPerHour(const Aws::String& value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour = value; }
    inline void SetAverageNumberOfInstancesUsedPerHour(Aws::String&& value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour = std::move(value); }
    inline void SetAverageNumberOfInstancesUsedPerHour(const char* value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(const Aws::String& value) { SetAverageNumberOfInstancesUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(Aws::String&& value) { SetAverageNumberOfInstancesUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(const char* value) { SetAverageNumberOfInstancesUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNormalizedUnitsUsedPerHour() const{ return m_averageNormalizedUnitsUsedPerHour; }
    inline bool AverageNormalizedUnitsUsedPerHourHasBeenSet() const { return m_averageNormalizedUnitsUsedPerHourHasBeenSet; }
    inline void SetAverageNormalizedUnitsUsedPerHour(const Aws::String& value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour = value; }
    inline void SetAverageNormalizedUnitsUsedPerHour(Aws::String&& value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour = std::move(value); }
    inline void SetAverageNormalizedUnitsUsedPerHour(const char* value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(const Aws::String& value) { SetAverageNormalizedUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(Aws::String&& value) { SetAverageNormalizedUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(const char* value) { SetAverageNormalizedUnitsUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average utilization of your instances. Amazon Web Services uses this to
     * calculate your recommended reservation purchases.</p>
     */
    inline const Aws::String& GetAverageUtilization() const{ return m_averageUtilization; }
    inline bool AverageUtilizationHasBeenSet() const { return m_averageUtilizationHasBeenSet; }
    inline void SetAverageUtilization(const Aws::String& value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization = value; }
    inline void SetAverageUtilization(Aws::String&& value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization = std::move(value); }
    inline void SetAverageUtilization(const char* value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(const Aws::String& value) { SetAverageUtilization(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(Aws::String&& value) { SetAverageUtilization(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(const char* value) { SetAverageUtilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long Amazon Web Services estimates that it takes for this instance to
     * start saving you money, in months.</p>
     */
    inline const Aws::String& GetEstimatedBreakEvenInMonths() const{ return m_estimatedBreakEvenInMonths; }
    inline bool EstimatedBreakEvenInMonthsHasBeenSet() const { return m_estimatedBreakEvenInMonthsHasBeenSet; }
    inline void SetEstimatedBreakEvenInMonths(const Aws::String& value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths = value; }
    inline void SetEstimatedBreakEvenInMonths(Aws::String&& value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths = std::move(value); }
    inline void SetEstimatedBreakEvenInMonths(const char* value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(const Aws::String& value) { SetEstimatedBreakEvenInMonths(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(Aws::String&& value) { SetEstimatedBreakEvenInMonths(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(const char* value) { SetEstimatedBreakEvenInMonths(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that this specific recommendation
     * might save you in a month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that this specific recommendation
     * might save you in a month, as a percentage of your overall costs.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsPercentage() const{ return m_estimatedMonthlySavingsPercentage; }
    inline bool EstimatedMonthlySavingsPercentageHasBeenSet() const { return m_estimatedMonthlySavingsPercentageHasBeenSet; }
    inline void SetEstimatedMonthlySavingsPercentage(const Aws::String& value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage = value; }
    inline void SetEstimatedMonthlySavingsPercentage(Aws::String&& value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage = std::move(value); }
    inline void SetEstimatedMonthlySavingsPercentage(const char* value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(const Aws::String& value) { SetEstimatedMonthlySavingsPercentage(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(Aws::String&& value) { SetEstimatedMonthlySavingsPercentage(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(const char* value) { SetEstimatedMonthlySavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that you spend on On-Demand Instances
     * in a month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyOnDemandCost() const{ return m_estimatedMonthlyOnDemandCost; }
    inline bool EstimatedMonthlyOnDemandCostHasBeenSet() const { return m_estimatedMonthlyOnDemandCostHasBeenSet; }
    inline void SetEstimatedMonthlyOnDemandCost(const Aws::String& value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost = value; }
    inline void SetEstimatedMonthlyOnDemandCost(Aws::String&& value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost = std::move(value); }
    inline void SetEstimatedMonthlyOnDemandCost(const char* value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(const Aws::String& value) { SetEstimatedMonthlyOnDemandCost(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(Aws::String&& value) { SetEstimatedMonthlyOnDemandCost(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(const char* value) { SetEstimatedMonthlyOnDemandCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that you might spend for all usage
     * during the specified historical period if you had a reservation.</p>
     */
    inline const Aws::String& GetEstimatedReservationCostForLookbackPeriod() const{ return m_estimatedReservationCostForLookbackPeriod; }
    inline bool EstimatedReservationCostForLookbackPeriodHasBeenSet() const { return m_estimatedReservationCostForLookbackPeriodHasBeenSet; }
    inline void SetEstimatedReservationCostForLookbackPeriod(const Aws::String& value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod = value; }
    inline void SetEstimatedReservationCostForLookbackPeriod(Aws::String&& value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod = std::move(value); }
    inline void SetEstimatedReservationCostForLookbackPeriod(const char* value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(const Aws::String& value) { SetEstimatedReservationCostForLookbackPeriod(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(Aws::String&& value) { SetEstimatedReservationCostForLookbackPeriod(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(const char* value) { SetEstimatedReservationCostForLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetRecurringStandardMonthlyCost() const{ return m_recurringStandardMonthlyCost; }
    inline bool RecurringStandardMonthlyCostHasBeenSet() const { return m_recurringStandardMonthlyCostHasBeenSet; }
    inline void SetRecurringStandardMonthlyCost(const Aws::String& value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost = value; }
    inline void SetRecurringStandardMonthlyCost(Aws::String&& value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost = std::move(value); }
    inline void SetRecurringStandardMonthlyCost(const char* value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(const Aws::String& value) { SetRecurringStandardMonthlyCost(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(Aws::String&& value) { SetRecurringStandardMonthlyCost(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(const char* value) { SetRecurringStandardMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const ReservedCapacityDetails& GetReservedCapacityDetails() const{ return m_reservedCapacityDetails; }
    inline bool ReservedCapacityDetailsHasBeenSet() const { return m_reservedCapacityDetailsHasBeenSet; }
    inline void SetReservedCapacityDetails(const ReservedCapacityDetails& value) { m_reservedCapacityDetailsHasBeenSet = true; m_reservedCapacityDetails = value; }
    inline void SetReservedCapacityDetails(ReservedCapacityDetails&& value) { m_reservedCapacityDetailsHasBeenSet = true; m_reservedCapacityDetails = std::move(value); }
    inline ReservationPurchaseRecommendationDetail& WithReservedCapacityDetails(const ReservedCapacityDetails& value) { SetReservedCapacityDetails(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithReservedCapacityDetails(ReservedCapacityDetails&& value) { SetReservedCapacityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved capacity units that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline const Aws::String& GetRecommendedNumberOfCapacityUnitsToPurchase() const{ return m_recommendedNumberOfCapacityUnitsToPurchase; }
    inline bool RecommendedNumberOfCapacityUnitsToPurchaseHasBeenSet() const { return m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet; }
    inline void SetRecommendedNumberOfCapacityUnitsToPurchase(const Aws::String& value) { m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet = true; m_recommendedNumberOfCapacityUnitsToPurchase = value; }
    inline void SetRecommendedNumberOfCapacityUnitsToPurchase(Aws::String&& value) { m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet = true; m_recommendedNumberOfCapacityUnitsToPurchase = std::move(value); }
    inline void SetRecommendedNumberOfCapacityUnitsToPurchase(const char* value) { m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet = true; m_recommendedNumberOfCapacityUnitsToPurchase.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfCapacityUnitsToPurchase(const Aws::String& value) { SetRecommendedNumberOfCapacityUnitsToPurchase(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfCapacityUnitsToPurchase(Aws::String&& value) { SetRecommendedNumberOfCapacityUnitsToPurchase(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfCapacityUnitsToPurchase(const char* value) { SetRecommendedNumberOfCapacityUnitsToPurchase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNumberOfCapacityUnitsUsedPerHour() const{ return m_minimumNumberOfCapacityUnitsUsedPerHour; }
    inline bool MinimumNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    inline void SetMinimumNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_minimumNumberOfCapacityUnitsUsedPerHour = value; }
    inline void SetMinimumNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_minimumNumberOfCapacityUnitsUsedPerHour = std::move(value); }
    inline void SetMinimumNumberOfCapacityUnitsUsedPerHour(const char* value) { m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_minimumNumberOfCapacityUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { SetMinimumNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { SetMinimumNumberOfCapacityUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfCapacityUnitsUsedPerHour(const char* value) { SetMinimumNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNumberOfCapacityUnitsUsedPerHour() const{ return m_maximumNumberOfCapacityUnitsUsedPerHour; }
    inline bool MaximumNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    inline void SetMaximumNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_maximumNumberOfCapacityUnitsUsedPerHour = value; }
    inline void SetMaximumNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_maximumNumberOfCapacityUnitsUsedPerHour = std::move(value); }
    inline void SetMaximumNumberOfCapacityUnitsUsedPerHour(const char* value) { m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_maximumNumberOfCapacityUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { SetMaximumNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { SetMaximumNumberOfCapacityUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfCapacityUnitsUsedPerHour(const char* value) { SetMaximumNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNumberOfCapacityUnitsUsedPerHour() const{ return m_averageNumberOfCapacityUnitsUsedPerHour; }
    inline bool AverageNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    inline void SetAverageNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_averageNumberOfCapacityUnitsUsedPerHour = value; }
    inline void SetAverageNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_averageNumberOfCapacityUnitsUsedPerHour = std::move(value); }
    inline void SetAverageNumberOfCapacityUnitsUsedPerHour(const char* value) { m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_averageNumberOfCapacityUnitsUsedPerHour.assign(value); }
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfCapacityUnitsUsedPerHour(const Aws::String& value) { SetAverageNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfCapacityUnitsUsedPerHour(Aws::String&& value) { SetAverageNumberOfCapacityUnitsUsedPerHour(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfCapacityUnitsUsedPerHour(const char* value) { SetAverageNumberOfCapacityUnitsUsedPerHour(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    InstanceDetails m_instanceDetails;
    bool m_instanceDetailsHasBeenSet = false;

    Aws::String m_recommendedNumberOfInstancesToPurchase;
    bool m_recommendedNumberOfInstancesToPurchaseHasBeenSet = false;

    Aws::String m_recommendedNormalizedUnitsToPurchase;
    bool m_recommendedNormalizedUnitsToPurchaseHasBeenSet = false;

    Aws::String m_minimumNumberOfInstancesUsedPerHour;
    bool m_minimumNumberOfInstancesUsedPerHourHasBeenSet = false;

    Aws::String m_minimumNormalizedUnitsUsedPerHour;
    bool m_minimumNormalizedUnitsUsedPerHourHasBeenSet = false;

    Aws::String m_maximumNumberOfInstancesUsedPerHour;
    bool m_maximumNumberOfInstancesUsedPerHourHasBeenSet = false;

    Aws::String m_maximumNormalizedUnitsUsedPerHour;
    bool m_maximumNormalizedUnitsUsedPerHourHasBeenSet = false;

    Aws::String m_averageNumberOfInstancesUsedPerHour;
    bool m_averageNumberOfInstancesUsedPerHourHasBeenSet = false;

    Aws::String m_averageNormalizedUnitsUsedPerHour;
    bool m_averageNormalizedUnitsUsedPerHourHasBeenSet = false;

    Aws::String m_averageUtilization;
    bool m_averageUtilizationHasBeenSet = false;

    Aws::String m_estimatedBreakEvenInMonths;
    bool m_estimatedBreakEvenInMonthsHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_estimatedMonthlySavingsPercentage;
    bool m_estimatedMonthlySavingsPercentageHasBeenSet = false;

    Aws::String m_estimatedMonthlyOnDemandCost;
    bool m_estimatedMonthlyOnDemandCostHasBeenSet = false;

    Aws::String m_estimatedReservationCostForLookbackPeriod;
    bool m_estimatedReservationCostForLookbackPeriodHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_recurringStandardMonthlyCost;
    bool m_recurringStandardMonthlyCostHasBeenSet = false;

    ReservedCapacityDetails m_reservedCapacityDetails;
    bool m_reservedCapacityDetailsHasBeenSet = false;

    Aws::String m_recommendedNumberOfCapacityUnitsToPurchase;
    bool m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet = false;

    Aws::String m_minimumNumberOfCapacityUnitsUsedPerHour;
    bool m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet = false;

    Aws::String m_maximumNumberOfCapacityUnitsUsedPerHour;
    bool m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet = false;

    Aws::String m_averageNumberOfCapacityUnitsUsedPerHour;
    bool m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
