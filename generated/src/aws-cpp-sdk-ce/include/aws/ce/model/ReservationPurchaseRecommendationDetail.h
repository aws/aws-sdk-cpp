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
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail() = default;
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account that this Reserved Instance (RI) recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const { return m_instanceDetails; }
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }
    template<typename InstanceDetailsT = InstanceDetails>
    void SetInstanceDetails(InstanceDetailsT&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::forward<InstanceDetailsT>(value); }
    template<typename InstanceDetailsT = InstanceDetails>
    ReservationPurchaseRecommendationDetail& WithInstanceDetails(InstanceDetailsT&& value) { SetInstanceDetails(std::forward<InstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetRecommendedNumberOfInstancesToPurchase() const { return m_recommendedNumberOfInstancesToPurchase; }
    inline bool RecommendedNumberOfInstancesToPurchaseHasBeenSet() const { return m_recommendedNumberOfInstancesToPurchaseHasBeenSet; }
    template<typename RecommendedNumberOfInstancesToPurchaseT = Aws::String>
    void SetRecommendedNumberOfInstancesToPurchase(RecommendedNumberOfInstancesToPurchaseT&& value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase = std::forward<RecommendedNumberOfInstancesToPurchaseT>(value); }
    template<typename RecommendedNumberOfInstancesToPurchaseT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(RecommendedNumberOfInstancesToPurchaseT&& value) { SetRecommendedNumberOfInstancesToPurchase(std::forward<RecommendedNumberOfInstancesToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetRecommendedNormalizedUnitsToPurchase() const { return m_recommendedNormalizedUnitsToPurchase; }
    inline bool RecommendedNormalizedUnitsToPurchaseHasBeenSet() const { return m_recommendedNormalizedUnitsToPurchaseHasBeenSet; }
    template<typename RecommendedNormalizedUnitsToPurchaseT = Aws::String>
    void SetRecommendedNormalizedUnitsToPurchase(RecommendedNormalizedUnitsToPurchaseT&& value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase = std::forward<RecommendedNormalizedUnitsToPurchaseT>(value); }
    template<typename RecommendedNormalizedUnitsToPurchaseT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(RecommendedNormalizedUnitsToPurchaseT&& value) { SetRecommendedNormalizedUnitsToPurchase(std::forward<RecommendedNormalizedUnitsToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNumberOfInstancesUsedPerHour() const { return m_minimumNumberOfInstancesUsedPerHour; }
    inline bool MinimumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_minimumNumberOfInstancesUsedPerHourHasBeenSet; }
    template<typename MinimumNumberOfInstancesUsedPerHourT = Aws::String>
    void SetMinimumNumberOfInstancesUsedPerHour(MinimumNumberOfInstancesUsedPerHourT&& value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour = std::forward<MinimumNumberOfInstancesUsedPerHourT>(value); }
    template<typename MinimumNumberOfInstancesUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(MinimumNumberOfInstancesUsedPerHourT&& value) { SetMinimumNumberOfInstancesUsedPerHour(std::forward<MinimumNumberOfInstancesUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNormalizedUnitsUsedPerHour() const { return m_minimumNormalizedUnitsUsedPerHour; }
    inline bool MinimumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_minimumNormalizedUnitsUsedPerHourHasBeenSet; }
    template<typename MinimumNormalizedUnitsUsedPerHourT = Aws::String>
    void SetMinimumNormalizedUnitsUsedPerHour(MinimumNormalizedUnitsUsedPerHourT&& value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour = std::forward<MinimumNormalizedUnitsUsedPerHourT>(value); }
    template<typename MinimumNormalizedUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(MinimumNormalizedUnitsUsedPerHourT&& value) { SetMinimumNormalizedUnitsUsedPerHour(std::forward<MinimumNormalizedUnitsUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNumberOfInstancesUsedPerHour() const { return m_maximumNumberOfInstancesUsedPerHour; }
    inline bool MaximumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_maximumNumberOfInstancesUsedPerHourHasBeenSet; }
    template<typename MaximumNumberOfInstancesUsedPerHourT = Aws::String>
    void SetMaximumNumberOfInstancesUsedPerHour(MaximumNumberOfInstancesUsedPerHourT&& value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour = std::forward<MaximumNumberOfInstancesUsedPerHourT>(value); }
    template<typename MaximumNumberOfInstancesUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(MaximumNumberOfInstancesUsedPerHourT&& value) { SetMaximumNumberOfInstancesUsedPerHour(std::forward<MaximumNumberOfInstancesUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNormalizedUnitsUsedPerHour() const { return m_maximumNormalizedUnitsUsedPerHour; }
    inline bool MaximumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_maximumNormalizedUnitsUsedPerHourHasBeenSet; }
    template<typename MaximumNormalizedUnitsUsedPerHourT = Aws::String>
    void SetMaximumNormalizedUnitsUsedPerHour(MaximumNormalizedUnitsUsedPerHourT&& value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour = std::forward<MaximumNormalizedUnitsUsedPerHourT>(value); }
    template<typename MaximumNormalizedUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(MaximumNormalizedUnitsUsedPerHourT&& value) { SetMaximumNormalizedUnitsUsedPerHour(std::forward<MaximumNormalizedUnitsUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNumberOfInstancesUsedPerHour() const { return m_averageNumberOfInstancesUsedPerHour; }
    inline bool AverageNumberOfInstancesUsedPerHourHasBeenSet() const { return m_averageNumberOfInstancesUsedPerHourHasBeenSet; }
    template<typename AverageNumberOfInstancesUsedPerHourT = Aws::String>
    void SetAverageNumberOfInstancesUsedPerHour(AverageNumberOfInstancesUsedPerHourT&& value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour = std::forward<AverageNumberOfInstancesUsedPerHourT>(value); }
    template<typename AverageNumberOfInstancesUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(AverageNumberOfInstancesUsedPerHourT&& value) { SetAverageNumberOfInstancesUsedPerHour(std::forward<AverageNumberOfInstancesUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. Amazon Web Services uses this to calculate your recommended
     * reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNormalizedUnitsUsedPerHour() const { return m_averageNormalizedUnitsUsedPerHour; }
    inline bool AverageNormalizedUnitsUsedPerHourHasBeenSet() const { return m_averageNormalizedUnitsUsedPerHourHasBeenSet; }
    template<typename AverageNormalizedUnitsUsedPerHourT = Aws::String>
    void SetAverageNormalizedUnitsUsedPerHour(AverageNormalizedUnitsUsedPerHourT&& value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour = std::forward<AverageNormalizedUnitsUsedPerHourT>(value); }
    template<typename AverageNormalizedUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(AverageNormalizedUnitsUsedPerHourT&& value) { SetAverageNormalizedUnitsUsedPerHour(std::forward<AverageNormalizedUnitsUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average utilization of your instances. Amazon Web Services uses this to
     * calculate your recommended reservation purchases.</p>
     */
    inline const Aws::String& GetAverageUtilization() const { return m_averageUtilization; }
    inline bool AverageUtilizationHasBeenSet() const { return m_averageUtilizationHasBeenSet; }
    template<typename AverageUtilizationT = Aws::String>
    void SetAverageUtilization(AverageUtilizationT&& value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization = std::forward<AverageUtilizationT>(value); }
    template<typename AverageUtilizationT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithAverageUtilization(AverageUtilizationT&& value) { SetAverageUtilization(std::forward<AverageUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long Amazon Web Services estimates that it takes for this instance to
     * start saving you money, in months.</p>
     */
    inline const Aws::String& GetEstimatedBreakEvenInMonths() const { return m_estimatedBreakEvenInMonths; }
    inline bool EstimatedBreakEvenInMonthsHasBeenSet() const { return m_estimatedBreakEvenInMonthsHasBeenSet; }
    template<typename EstimatedBreakEvenInMonthsT = Aws::String>
    void SetEstimatedBreakEvenInMonths(EstimatedBreakEvenInMonthsT&& value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths = std::forward<EstimatedBreakEvenInMonthsT>(value); }
    template<typename EstimatedBreakEvenInMonthsT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(EstimatedBreakEvenInMonthsT&& value) { SetEstimatedBreakEvenInMonths(std::forward<EstimatedBreakEvenInMonthsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that this specific recommendation
     * might save you in a month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const { return m_estimatedMonthlySavingsAmount; }
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    void SetEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::forward<EstimatedMonthlySavingsAmountT>(value); }
    template<typename EstimatedMonthlySavingsAmountT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(EstimatedMonthlySavingsAmountT&& value) { SetEstimatedMonthlySavingsAmount(std::forward<EstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that this specific recommendation
     * might save you in a month, as a percentage of your overall costs.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsPercentage() const { return m_estimatedMonthlySavingsPercentage; }
    inline bool EstimatedMonthlySavingsPercentageHasBeenSet() const { return m_estimatedMonthlySavingsPercentageHasBeenSet; }
    template<typename EstimatedMonthlySavingsPercentageT = Aws::String>
    void SetEstimatedMonthlySavingsPercentage(EstimatedMonthlySavingsPercentageT&& value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage = std::forward<EstimatedMonthlySavingsPercentageT>(value); }
    template<typename EstimatedMonthlySavingsPercentageT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(EstimatedMonthlySavingsPercentageT&& value) { SetEstimatedMonthlySavingsPercentage(std::forward<EstimatedMonthlySavingsPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that you spend on On-Demand Instances
     * in a month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyOnDemandCost() const { return m_estimatedMonthlyOnDemandCost; }
    inline bool EstimatedMonthlyOnDemandCostHasBeenSet() const { return m_estimatedMonthlyOnDemandCostHasBeenSet; }
    template<typename EstimatedMonthlyOnDemandCostT = Aws::String>
    void SetEstimatedMonthlyOnDemandCost(EstimatedMonthlyOnDemandCostT&& value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost = std::forward<EstimatedMonthlyOnDemandCostT>(value); }
    template<typename EstimatedMonthlyOnDemandCostT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(EstimatedMonthlyOnDemandCostT&& value) { SetEstimatedMonthlyOnDemandCost(std::forward<EstimatedMonthlyOnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much Amazon Web Services estimates that you might spend for all usage
     * during the specified historical period if you had a reservation.</p>
     */
    inline const Aws::String& GetEstimatedReservationCostForLookbackPeriod() const { return m_estimatedReservationCostForLookbackPeriod; }
    inline bool EstimatedReservationCostForLookbackPeriodHasBeenSet() const { return m_estimatedReservationCostForLookbackPeriodHasBeenSet; }
    template<typename EstimatedReservationCostForLookbackPeriodT = Aws::String>
    void SetEstimatedReservationCostForLookbackPeriod(EstimatedReservationCostForLookbackPeriodT&& value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod = std::forward<EstimatedReservationCostForLookbackPeriodT>(value); }
    template<typename EstimatedReservationCostForLookbackPeriodT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(EstimatedReservationCostForLookbackPeriodT&& value) { SetEstimatedReservationCostForLookbackPeriod(std::forward<EstimatedReservationCostForLookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetRecurringStandardMonthlyCost() const { return m_recurringStandardMonthlyCost; }
    inline bool RecurringStandardMonthlyCostHasBeenSet() const { return m_recurringStandardMonthlyCostHasBeenSet; }
    template<typename RecurringStandardMonthlyCostT = Aws::String>
    void SetRecurringStandardMonthlyCost(RecurringStandardMonthlyCostT&& value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost = std::forward<RecurringStandardMonthlyCostT>(value); }
    template<typename RecurringStandardMonthlyCostT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(RecurringStandardMonthlyCostT&& value) { SetRecurringStandardMonthlyCost(std::forward<RecurringStandardMonthlyCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const ReservedCapacityDetails& GetReservedCapacityDetails() const { return m_reservedCapacityDetails; }
    inline bool ReservedCapacityDetailsHasBeenSet() const { return m_reservedCapacityDetailsHasBeenSet; }
    template<typename ReservedCapacityDetailsT = ReservedCapacityDetails>
    void SetReservedCapacityDetails(ReservedCapacityDetailsT&& value) { m_reservedCapacityDetailsHasBeenSet = true; m_reservedCapacityDetails = std::forward<ReservedCapacityDetailsT>(value); }
    template<typename ReservedCapacityDetailsT = ReservedCapacityDetails>
    ReservationPurchaseRecommendationDetail& WithReservedCapacityDetails(ReservedCapacityDetailsT&& value) { SetReservedCapacityDetails(std::forward<ReservedCapacityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved capacity units that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline const Aws::String& GetRecommendedNumberOfCapacityUnitsToPurchase() const { return m_recommendedNumberOfCapacityUnitsToPurchase; }
    inline bool RecommendedNumberOfCapacityUnitsToPurchaseHasBeenSet() const { return m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet; }
    template<typename RecommendedNumberOfCapacityUnitsToPurchaseT = Aws::String>
    void SetRecommendedNumberOfCapacityUnitsToPurchase(RecommendedNumberOfCapacityUnitsToPurchaseT&& value) { m_recommendedNumberOfCapacityUnitsToPurchaseHasBeenSet = true; m_recommendedNumberOfCapacityUnitsToPurchase = std::forward<RecommendedNumberOfCapacityUnitsToPurchaseT>(value); }
    template<typename RecommendedNumberOfCapacityUnitsToPurchaseT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfCapacityUnitsToPurchase(RecommendedNumberOfCapacityUnitsToPurchaseT&& value) { SetRecommendedNumberOfCapacityUnitsToPurchase(std::forward<RecommendedNumberOfCapacityUnitsToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetMinimumNumberOfCapacityUnitsUsedPerHour() const { return m_minimumNumberOfCapacityUnitsUsedPerHour; }
    inline bool MinimumNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    template<typename MinimumNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    void SetMinimumNumberOfCapacityUnitsUsedPerHour(MinimumNumberOfCapacityUnitsUsedPerHourT&& value) { m_minimumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_minimumNumberOfCapacityUnitsUsedPerHour = std::forward<MinimumNumberOfCapacityUnitsUsedPerHourT>(value); }
    template<typename MinimumNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMinimumNumberOfCapacityUnitsUsedPerHour(MinimumNumberOfCapacityUnitsUsedPerHourT&& value) { SetMinimumNumberOfCapacityUnitsUsedPerHour(std::forward<MinimumNumberOfCapacityUnitsUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetMaximumNumberOfCapacityUnitsUsedPerHour() const { return m_maximumNumberOfCapacityUnitsUsedPerHour; }
    inline bool MaximumNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    template<typename MaximumNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    void SetMaximumNumberOfCapacityUnitsUsedPerHour(MaximumNumberOfCapacityUnitsUsedPerHourT&& value) { m_maximumNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_maximumNumberOfCapacityUnitsUsedPerHour = std::forward<MaximumNumberOfCapacityUnitsUsedPerHourT>(value); }
    template<typename MaximumNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithMaximumNumberOfCapacityUnitsUsedPerHour(MaximumNumberOfCapacityUnitsUsedPerHourT&& value) { SetMaximumNumberOfCapacityUnitsUsedPerHour(std::forward<MaximumNumberOfCapacityUnitsUsedPerHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average number of provisioned capacity units that you used in an hour
     * during the historical period. Amazon Web Services uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetAverageNumberOfCapacityUnitsUsedPerHour() const { return m_averageNumberOfCapacityUnitsUsedPerHour; }
    inline bool AverageNumberOfCapacityUnitsUsedPerHourHasBeenSet() const { return m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet; }
    template<typename AverageNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    void SetAverageNumberOfCapacityUnitsUsedPerHour(AverageNumberOfCapacityUnitsUsedPerHourT&& value) { m_averageNumberOfCapacityUnitsUsedPerHourHasBeenSet = true; m_averageNumberOfCapacityUnitsUsedPerHour = std::forward<AverageNumberOfCapacityUnitsUsedPerHourT>(value); }
    template<typename AverageNumberOfCapacityUnitsUsedPerHourT = Aws::String>
    ReservationPurchaseRecommendationDetail& WithAverageNumberOfCapacityUnitsUsedPerHour(AverageNumberOfCapacityUnitsUsedPerHourT&& value) { SetAverageNumberOfCapacityUnitsUsedPerHour(std::forward<AverageNumberOfCapacityUnitsUsedPerHourT>(value)); return *this;}
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
