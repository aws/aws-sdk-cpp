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
   * <p>The aggregated numbers for your reservation usage.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationAggregates">AWS
   * API Reference</a></p>
   */
  class ReservationAggregates
  {
  public:
    AWS_COSTEXPLORER_API ReservationAggregates() = default;
    AWS_COSTEXPLORER_API ReservationAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const { return m_utilizationPercentage; }
    inline bool UtilizationPercentageHasBeenSet() const { return m_utilizationPercentageHasBeenSet; }
    template<typename UtilizationPercentageT = Aws::String>
    void SetUtilizationPercentage(UtilizationPercentageT&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::forward<UtilizationPercentageT>(value); }
    template<typename UtilizationPercentageT = Aws::String>
    ReservationAggregates& WithUtilizationPercentage(UtilizationPercentageT&& value) { SetUtilizationPercentage(std::forward<UtilizationPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline const Aws::String& GetUtilizationPercentageInUnits() const { return m_utilizationPercentageInUnits; }
    inline bool UtilizationPercentageInUnitsHasBeenSet() const { return m_utilizationPercentageInUnitsHasBeenSet; }
    template<typename UtilizationPercentageInUnitsT = Aws::String>
    void SetUtilizationPercentageInUnits(UtilizationPercentageInUnitsT&& value) { m_utilizationPercentageInUnitsHasBeenSet = true; m_utilizationPercentageInUnits = std::forward<UtilizationPercentageInUnitsT>(value); }
    template<typename UtilizationPercentageInUnitsT = Aws::String>
    ReservationAggregates& WithUtilizationPercentageInUnits(UtilizationPercentageInUnitsT&& value) { SetUtilizationPercentageInUnits(std::forward<UtilizationPercentageInUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline const Aws::String& GetPurchasedHours() const { return m_purchasedHours; }
    inline bool PurchasedHoursHasBeenSet() const { return m_purchasedHoursHasBeenSet; }
    template<typename PurchasedHoursT = Aws::String>
    void SetPurchasedHours(PurchasedHoursT&& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = std::forward<PurchasedHoursT>(value); }
    template<typename PurchasedHoursT = Aws::String>
    ReservationAggregates& WithPurchasedHours(PurchasedHoursT&& value) { SetPurchasedHours(std::forward<PurchasedHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline const Aws::String& GetPurchasedUnits() const { return m_purchasedUnits; }
    inline bool PurchasedUnitsHasBeenSet() const { return m_purchasedUnitsHasBeenSet; }
    template<typename PurchasedUnitsT = Aws::String>
    void SetPurchasedUnits(PurchasedUnitsT&& value) { m_purchasedUnitsHasBeenSet = true; m_purchasedUnits = std::forward<PurchasedUnitsT>(value); }
    template<typename PurchasedUnitsT = Aws::String>
    ReservationAggregates& WithPurchasedUnits(PurchasedUnitsT&& value) { SetPurchasedUnits(std::forward<PurchasedUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline const Aws::String& GetTotalActualHours() const { return m_totalActualHours; }
    inline bool TotalActualHoursHasBeenSet() const { return m_totalActualHoursHasBeenSet; }
    template<typename TotalActualHoursT = Aws::String>
    void SetTotalActualHours(TotalActualHoursT&& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = std::forward<TotalActualHoursT>(value); }
    template<typename TotalActualHoursT = Aws::String>
    ReservationAggregates& WithTotalActualHours(TotalActualHoursT&& value) { SetTotalActualHours(std::forward<TotalActualHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline const Aws::String& GetTotalActualUnits() const { return m_totalActualUnits; }
    inline bool TotalActualUnitsHasBeenSet() const { return m_totalActualUnitsHasBeenSet; }
    template<typename TotalActualUnitsT = Aws::String>
    void SetTotalActualUnits(TotalActualUnitsT&& value) { m_totalActualUnitsHasBeenSet = true; m_totalActualUnits = std::forward<TotalActualUnitsT>(value); }
    template<typename TotalActualUnitsT = Aws::String>
    ReservationAggregates& WithTotalActualUnits(TotalActualUnitsT&& value) { SetTotalActualUnits(std::forward<TotalActualUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline const Aws::String& GetUnusedHours() const { return m_unusedHours; }
    inline bool UnusedHoursHasBeenSet() const { return m_unusedHoursHasBeenSet; }
    template<typename UnusedHoursT = Aws::String>
    void SetUnusedHours(UnusedHoursT&& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = std::forward<UnusedHoursT>(value); }
    template<typename UnusedHoursT = Aws::String>
    ReservationAggregates& WithUnusedHours(UnusedHoursT&& value) { SetUnusedHours(std::forward<UnusedHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline const Aws::String& GetUnusedUnits() const { return m_unusedUnits; }
    inline bool UnusedUnitsHasBeenSet() const { return m_unusedUnitsHasBeenSet; }
    template<typename UnusedUnitsT = Aws::String>
    void SetUnusedUnits(UnusedUnitsT&& value) { m_unusedUnitsHasBeenSet = true; m_unusedUnits = std::forward<UnusedUnitsT>(value); }
    template<typename UnusedUnitsT = Aws::String>
    ReservationAggregates& WithUnusedUnits(UnusedUnitsT&& value) { SetUnusedUnits(std::forward<UnusedUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline const Aws::String& GetOnDemandCostOfRIHoursUsed() const { return m_onDemandCostOfRIHoursUsed; }
    inline bool OnDemandCostOfRIHoursUsedHasBeenSet() const { return m_onDemandCostOfRIHoursUsedHasBeenSet; }
    template<typename OnDemandCostOfRIHoursUsedT = Aws::String>
    void SetOnDemandCostOfRIHoursUsed(OnDemandCostOfRIHoursUsedT&& value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed = std::forward<OnDemandCostOfRIHoursUsedT>(value); }
    template<typename OnDemandCostOfRIHoursUsedT = Aws::String>
    ReservationAggregates& WithOnDemandCostOfRIHoursUsed(OnDemandCostOfRIHoursUsedT&& value) { SetOnDemandCostOfRIHoursUsed(std::forward<OnDemandCostOfRIHoursUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline const Aws::String& GetNetRISavings() const { return m_netRISavings; }
    inline bool NetRISavingsHasBeenSet() const { return m_netRISavingsHasBeenSet; }
    template<typename NetRISavingsT = Aws::String>
    void SetNetRISavings(NetRISavingsT&& value) { m_netRISavingsHasBeenSet = true; m_netRISavings = std::forward<NetRISavingsT>(value); }
    template<typename NetRISavingsT = Aws::String>
    ReservationAggregates& WithNetRISavings(NetRISavingsT&& value) { SetNetRISavings(std::forward<NetRISavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline const Aws::String& GetTotalPotentialRISavings() const { return m_totalPotentialRISavings; }
    inline bool TotalPotentialRISavingsHasBeenSet() const { return m_totalPotentialRISavingsHasBeenSet; }
    template<typename TotalPotentialRISavingsT = Aws::String>
    void SetTotalPotentialRISavings(TotalPotentialRISavingsT&& value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings = std::forward<TotalPotentialRISavingsT>(value); }
    template<typename TotalPotentialRISavingsT = Aws::String>
    ReservationAggregates& WithTotalPotentialRISavings(TotalPotentialRISavingsT&& value) { SetTotalPotentialRISavings(std::forward<TotalPotentialRISavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetAmortizedUpfrontFee() const { return m_amortizedUpfrontFee; }
    inline bool AmortizedUpfrontFeeHasBeenSet() const { return m_amortizedUpfrontFeeHasBeenSet; }
    template<typename AmortizedUpfrontFeeT = Aws::String>
    void SetAmortizedUpfrontFee(AmortizedUpfrontFeeT&& value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee = std::forward<AmortizedUpfrontFeeT>(value); }
    template<typename AmortizedUpfrontFeeT = Aws::String>
    ReservationAggregates& WithAmortizedUpfrontFee(AmortizedUpfrontFeeT&& value) { SetAmortizedUpfrontFee(std::forward<AmortizedUpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetAmortizedRecurringFee() const { return m_amortizedRecurringFee; }
    inline bool AmortizedRecurringFeeHasBeenSet() const { return m_amortizedRecurringFeeHasBeenSet; }
    template<typename AmortizedRecurringFeeT = Aws::String>
    void SetAmortizedRecurringFee(AmortizedRecurringFeeT&& value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee = std::forward<AmortizedRecurringFeeT>(value); }
    template<typename AmortizedRecurringFeeT = Aws::String>
    ReservationAggregates& WithAmortizedRecurringFee(AmortizedRecurringFeeT&& value) { SetAmortizedRecurringFee(std::forward<AmortizedRecurringFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetTotalAmortizedFee() const { return m_totalAmortizedFee; }
    inline bool TotalAmortizedFeeHasBeenSet() const { return m_totalAmortizedFeeHasBeenSet; }
    template<typename TotalAmortizedFeeT = Aws::String>
    void SetTotalAmortizedFee(TotalAmortizedFeeT&& value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee = std::forward<TotalAmortizedFeeT>(value); }
    template<typename TotalAmortizedFeeT = Aws::String>
    ReservationAggregates& WithTotalAmortizedFee(TotalAmortizedFeeT&& value) { SetTotalAmortizedFee(std::forward<TotalAmortizedFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline const Aws::String& GetRICostForUnusedHours() const { return m_rICostForUnusedHours; }
    inline bool RICostForUnusedHoursHasBeenSet() const { return m_rICostForUnusedHoursHasBeenSet; }
    template<typename RICostForUnusedHoursT = Aws::String>
    void SetRICostForUnusedHours(RICostForUnusedHoursT&& value) { m_rICostForUnusedHoursHasBeenSet = true; m_rICostForUnusedHours = std::forward<RICostForUnusedHoursT>(value); }
    template<typename RICostForUnusedHoursT = Aws::String>
    ReservationAggregates& WithRICostForUnusedHours(RICostForUnusedHoursT&& value) { SetRICostForUnusedHours(std::forward<RICostForUnusedHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline const Aws::String& GetRealizedSavings() const { return m_realizedSavings; }
    inline bool RealizedSavingsHasBeenSet() const { return m_realizedSavingsHasBeenSet; }
    template<typename RealizedSavingsT = Aws::String>
    void SetRealizedSavings(RealizedSavingsT&& value) { m_realizedSavingsHasBeenSet = true; m_realizedSavings = std::forward<RealizedSavingsT>(value); }
    template<typename RealizedSavingsT = Aws::String>
    ReservationAggregates& WithRealizedSavings(RealizedSavingsT&& value) { SetRealizedSavings(std::forward<RealizedSavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline const Aws::String& GetUnrealizedSavings() const { return m_unrealizedSavings; }
    inline bool UnrealizedSavingsHasBeenSet() const { return m_unrealizedSavingsHasBeenSet; }
    template<typename UnrealizedSavingsT = Aws::String>
    void SetUnrealizedSavings(UnrealizedSavingsT&& value) { m_unrealizedSavingsHasBeenSet = true; m_unrealizedSavings = std::forward<UnrealizedSavingsT>(value); }
    template<typename UnrealizedSavingsT = Aws::String>
    ReservationAggregates& WithUnrealizedSavings(UnrealizedSavingsT&& value) { SetUnrealizedSavings(std::forward<UnrealizedSavingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_utilizationPercentage;
    bool m_utilizationPercentageHasBeenSet = false;

    Aws::String m_utilizationPercentageInUnits;
    bool m_utilizationPercentageInUnitsHasBeenSet = false;

    Aws::String m_purchasedHours;
    bool m_purchasedHoursHasBeenSet = false;

    Aws::String m_purchasedUnits;
    bool m_purchasedUnitsHasBeenSet = false;

    Aws::String m_totalActualHours;
    bool m_totalActualHoursHasBeenSet = false;

    Aws::String m_totalActualUnits;
    bool m_totalActualUnitsHasBeenSet = false;

    Aws::String m_unusedHours;
    bool m_unusedHoursHasBeenSet = false;

    Aws::String m_unusedUnits;
    bool m_unusedUnitsHasBeenSet = false;

    Aws::String m_onDemandCostOfRIHoursUsed;
    bool m_onDemandCostOfRIHoursUsedHasBeenSet = false;

    Aws::String m_netRISavings;
    bool m_netRISavingsHasBeenSet = false;

    Aws::String m_totalPotentialRISavings;
    bool m_totalPotentialRISavingsHasBeenSet = false;

    Aws::String m_amortizedUpfrontFee;
    bool m_amortizedUpfrontFeeHasBeenSet = false;

    Aws::String m_amortizedRecurringFee;
    bool m_amortizedRecurringFeeHasBeenSet = false;

    Aws::String m_totalAmortizedFee;
    bool m_totalAmortizedFeeHasBeenSet = false;

    Aws::String m_rICostForUnusedHours;
    bool m_rICostForUnusedHoursHasBeenSet = false;

    Aws::String m_realizedSavings;
    bool m_realizedSavingsHasBeenSet = false;

    Aws::String m_unrealizedSavings;
    bool m_unrealizedSavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
