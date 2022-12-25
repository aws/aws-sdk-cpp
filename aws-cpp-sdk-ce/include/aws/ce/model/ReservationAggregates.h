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
    AWS_COSTEXPLORER_API ReservationAggregates();
    AWS_COSTEXPLORER_API ReservationAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const{ return m_utilizationPercentage; }

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline bool UtilizationPercentageHasBeenSet() const { return m_utilizationPercentageHasBeenSet; }

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline void SetUtilizationPercentage(const Aws::String& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = value; }

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline void SetUtilizationPercentage(Aws::String&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::move(value); }

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline void SetUtilizationPercentage(const char* value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage.assign(value); }

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const Aws::String& value) { SetUtilizationPercentage(value); return *this;}

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(Aws::String&& value) { SetUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of reservation time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const char* value) { SetUtilizationPercentage(value); return *this;}


    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline const Aws::String& GetUtilizationPercentageInUnits() const{ return m_utilizationPercentageInUnits; }

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline bool UtilizationPercentageInUnitsHasBeenSet() const { return m_utilizationPercentageInUnitsHasBeenSet; }

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetUtilizationPercentageInUnits(const Aws::String& value) { m_utilizationPercentageInUnitsHasBeenSet = true; m_utilizationPercentageInUnits = value; }

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetUtilizationPercentageInUnits(Aws::String&& value) { m_utilizationPercentageInUnitsHasBeenSet = true; m_utilizationPercentageInUnits = std::move(value); }

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetUtilizationPercentageInUnits(const char* value) { m_utilizationPercentageInUnitsHasBeenSet = true; m_utilizationPercentageInUnits.assign(value); }

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentageInUnits(const Aws::String& value) { SetUtilizationPercentageInUnits(value); return *this;}

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentageInUnits(Aws::String&& value) { SetUtilizationPercentageInUnits(std::move(value)); return *this;}

    /**
     * <p>The percentage of Amazon EC2 reservation time that you used. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentageInUnits(const char* value) { SetUtilizationPercentageInUnits(value); return *this;}


    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline const Aws::String& GetPurchasedHours() const{ return m_purchasedHours; }

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline bool PurchasedHoursHasBeenSet() const { return m_purchasedHoursHasBeenSet; }

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const Aws::String& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = value; }

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline void SetPurchasedHours(Aws::String&& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = std::move(value); }

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const char* value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours.assign(value); }

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const Aws::String& value) { SetPurchasedHours(value); return *this;}

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(Aws::String&& value) { SetPurchasedHours(std::move(value)); return *this;}

    /**
     * <p>How many reservation hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const char* value) { SetPurchasedHours(value); return *this;}


    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline const Aws::String& GetPurchasedUnits() const{ return m_purchasedUnits; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline bool PurchasedUnitsHasBeenSet() const { return m_purchasedUnitsHasBeenSet; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetPurchasedUnits(const Aws::String& value) { m_purchasedUnitsHasBeenSet = true; m_purchasedUnits = value; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetPurchasedUnits(Aws::String&& value) { m_purchasedUnitsHasBeenSet = true; m_purchasedUnits = std::move(value); }

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline void SetPurchasedUnits(const char* value) { m_purchasedUnitsHasBeenSet = true; m_purchasedUnits.assign(value); }

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithPurchasedUnits(const Aws::String& value) { SetPurchasedUnits(value); return *this;}

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithPurchasedUnits(Aws::String&& value) { SetPurchasedUnits(std::move(value)); return *this;}

    /**
     * <p>The number of Amazon EC2 reservation hours that you purchased. It's converted
     * to normalized units. Normalized units are available only for Amazon EC2 usage
     * after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithPurchasedUnits(const char* value) { SetPurchasedUnits(value); return *this;}


    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline const Aws::String& GetTotalActualHours() const{ return m_totalActualHours; }

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline bool TotalActualHoursHasBeenSet() const { return m_totalActualHoursHasBeenSet; }

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline void SetTotalActualHours(const Aws::String& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = value; }

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline void SetTotalActualHours(Aws::String&& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = std::move(value); }

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline void SetTotalActualHours(const char* value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours.assign(value); }

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const Aws::String& value) { SetTotalActualHours(value); return *this;}

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(Aws::String&& value) { SetTotalActualHours(std::move(value)); return *this;}

    /**
     * <p>The total number of reservation hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const char* value) { SetTotalActualHours(value); return *this;}


    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline const Aws::String& GetTotalActualUnits() const{ return m_totalActualUnits; }

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline bool TotalActualUnitsHasBeenSet() const { return m_totalActualUnitsHasBeenSet; }

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetTotalActualUnits(const Aws::String& value) { m_totalActualUnitsHasBeenSet = true; m_totalActualUnits = value; }

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetTotalActualUnits(Aws::String&& value) { m_totalActualUnitsHasBeenSet = true; m_totalActualUnits = std::move(value); }

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetTotalActualUnits(const char* value) { m_totalActualUnitsHasBeenSet = true; m_totalActualUnits.assign(value); }

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithTotalActualUnits(const Aws::String& value) { SetTotalActualUnits(value); return *this;}

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithTotalActualUnits(Aws::String&& value) { SetTotalActualUnits(std::move(value)); return *this;}

    /**
     * <p>The total number of Amazon EC2 reservation hours that you used. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithTotalActualUnits(const char* value) { SetTotalActualUnits(value); return *this;}


    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline const Aws::String& GetUnusedHours() const{ return m_unusedHours; }

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline bool UnusedHoursHasBeenSet() const { return m_unusedHoursHasBeenSet; }

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const Aws::String& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = value; }

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline void SetUnusedHours(Aws::String&& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = std::move(value); }

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const char* value) { m_unusedHoursHasBeenSet = true; m_unusedHours.assign(value); }

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const Aws::String& value) { SetUnusedHours(value); return *this;}

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(Aws::String&& value) { SetUnusedHours(std::move(value)); return *this;}

    /**
     * <p>The number of reservation hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const char* value) { SetUnusedHours(value); return *this;}


    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline const Aws::String& GetUnusedUnits() const{ return m_unusedUnits; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline bool UnusedUnitsHasBeenSet() const { return m_unusedUnitsHasBeenSet; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetUnusedUnits(const Aws::String& value) { m_unusedUnitsHasBeenSet = true; m_unusedUnits = value; }

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetUnusedUnits(Aws::String&& value) { m_unusedUnitsHasBeenSet = true; m_unusedUnits = std::move(value); }

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline void SetUnusedUnits(const char* value) { m_unusedUnitsHasBeenSet = true; m_unusedUnits.assign(value); }

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUnusedUnits(const Aws::String& value) { SetUnusedUnits(value); return *this;}

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUnusedUnits(Aws::String&& value) { SetUnusedUnits(std::move(value)); return *this;}

    /**
     * <p>The number of Amazon EC2 reservation hours that you didn't use. It's
     * converted to normalized units. Normalized units are available only for Amazon
     * EC2 usage after November 11, 2017.</p>
     */
    inline ReservationAggregates& WithUnusedUnits(const char* value) { SetUnusedUnits(value); return *this;}


    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline const Aws::String& GetOnDemandCostOfRIHoursUsed() const{ return m_onDemandCostOfRIHoursUsed; }

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline bool OnDemandCostOfRIHoursUsedHasBeenSet() const { return m_onDemandCostOfRIHoursUsedHasBeenSet; }

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(const Aws::String& value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed = value; }

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(Aws::String&& value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed = std::move(value); }

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(const char* value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed.assign(value); }

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(const Aws::String& value) { SetOnDemandCostOfRIHoursUsed(value); return *this;}

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(Aws::String&& value) { SetOnDemandCostOfRIHoursUsed(std::move(value)); return *this;}

    /**
     * <p>How much your reservation costs if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(const char* value) { SetOnDemandCostOfRIHoursUsed(value); return *this;}


    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline const Aws::String& GetNetRISavings() const{ return m_netRISavings; }

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline bool NetRISavingsHasBeenSet() const { return m_netRISavingsHasBeenSet; }

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(const Aws::String& value) { m_netRISavingsHasBeenSet = true; m_netRISavings = value; }

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(Aws::String&& value) { m_netRISavingsHasBeenSet = true; m_netRISavings = std::move(value); }

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(const char* value) { m_netRISavingsHasBeenSet = true; m_netRISavings.assign(value); }

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(const Aws::String& value) { SetNetRISavings(value); return *this;}

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(Aws::String&& value) { SetNetRISavings(std::move(value)); return *this;}

    /**
     * <p>How much you saved due to purchasing and utilizing reservation. Amazon Web
     * Services calculates this by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(const char* value) { SetNetRISavings(value); return *this;}


    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline const Aws::String& GetTotalPotentialRISavings() const{ return m_totalPotentialRISavings; }

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline bool TotalPotentialRISavingsHasBeenSet() const { return m_totalPotentialRISavingsHasBeenSet; }

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(const Aws::String& value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings = value; }

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(Aws::String&& value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings = std::move(value); }

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(const char* value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings.assign(value); }

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(const Aws::String& value) { SetTotalPotentialRISavings(value); return *this;}

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(Aws::String&& value) { SetTotalPotentialRISavings(std::move(value)); return *this;}

    /**
     * <p>How much you might save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(const char* value) { SetTotalPotentialRISavings(value); return *this;}


    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetAmortizedUpfrontFee() const{ return m_amortizedUpfrontFee; }

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline bool AmortizedUpfrontFeeHasBeenSet() const { return m_amortizedUpfrontFeeHasBeenSet; }

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedUpfrontFee(const Aws::String& value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee = value; }

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedUpfrontFee(Aws::String&& value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee = std::move(value); }

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedUpfrontFee(const char* value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee.assign(value); }

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(const Aws::String& value) { SetAmortizedUpfrontFee(value); return *this;}

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(Aws::String&& value) { SetAmortizedUpfrontFee(std::move(value)); return *this;}

    /**
     * <p>The upfront cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(const char* value) { SetAmortizedUpfrontFee(value); return *this;}


    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetAmortizedRecurringFee() const{ return m_amortizedRecurringFee; }

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline bool AmortizedRecurringFeeHasBeenSet() const { return m_amortizedRecurringFeeHasBeenSet; }

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedRecurringFee(const Aws::String& value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee = value; }

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedRecurringFee(Aws::String&& value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee = std::move(value); }

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetAmortizedRecurringFee(const char* value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee.assign(value); }

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(const Aws::String& value) { SetAmortizedRecurringFee(value); return *this;}

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(Aws::String&& value) { SetAmortizedRecurringFee(std::move(value)); return *this;}

    /**
     * <p>The monthly cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(const char* value) { SetAmortizedRecurringFee(value); return *this;}


    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline const Aws::String& GetTotalAmortizedFee() const{ return m_totalAmortizedFee; }

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline bool TotalAmortizedFeeHasBeenSet() const { return m_totalAmortizedFeeHasBeenSet; }

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetTotalAmortizedFee(const Aws::String& value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee = value; }

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetTotalAmortizedFee(Aws::String&& value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee = std::move(value); }

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline void SetTotalAmortizedFee(const char* value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee.assign(value); }

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(const Aws::String& value) { SetTotalAmortizedFee(value); return *this;}

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(Aws::String&& value) { SetTotalAmortizedFee(std::move(value)); return *this;}

    /**
     * <p>The total cost of your reservation. It's amortized over the reservation
     * period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(const char* value) { SetTotalAmortizedFee(value); return *this;}


    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline const Aws::String& GetRICostForUnusedHours() const{ return m_rICostForUnusedHours; }

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline bool RICostForUnusedHoursHasBeenSet() const { return m_rICostForUnusedHoursHasBeenSet; }

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline void SetRICostForUnusedHours(const Aws::String& value) { m_rICostForUnusedHoursHasBeenSet = true; m_rICostForUnusedHours = value; }

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline void SetRICostForUnusedHours(Aws::String&& value) { m_rICostForUnusedHoursHasBeenSet = true; m_rICostForUnusedHours = std::move(value); }

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline void SetRICostForUnusedHours(const char* value) { m_rICostForUnusedHoursHasBeenSet = true; m_rICostForUnusedHours.assign(value); }

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline ReservationAggregates& WithRICostForUnusedHours(const Aws::String& value) { SetRICostForUnusedHours(value); return *this;}

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline ReservationAggregates& WithRICostForUnusedHours(Aws::String&& value) { SetRICostForUnusedHours(std::move(value)); return *this;}

    /**
     * <p>The cost of unused hours for your reservation.</p>
     */
    inline ReservationAggregates& WithRICostForUnusedHours(const char* value) { SetRICostForUnusedHours(value); return *this;}


    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline const Aws::String& GetRealizedSavings() const{ return m_realizedSavings; }

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline bool RealizedSavingsHasBeenSet() const { return m_realizedSavingsHasBeenSet; }

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline void SetRealizedSavings(const Aws::String& value) { m_realizedSavingsHasBeenSet = true; m_realizedSavings = value; }

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline void SetRealizedSavings(Aws::String&& value) { m_realizedSavingsHasBeenSet = true; m_realizedSavings = std::move(value); }

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline void SetRealizedSavings(const char* value) { m_realizedSavingsHasBeenSet = true; m_realizedSavings.assign(value); }

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithRealizedSavings(const Aws::String& value) { SetRealizedSavings(value); return *this;}

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithRealizedSavings(Aws::String&& value) { SetRealizedSavings(std::move(value)); return *this;}

    /**
     * <p>The realized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithRealizedSavings(const char* value) { SetRealizedSavings(value); return *this;}


    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline const Aws::String& GetUnrealizedSavings() const{ return m_unrealizedSavings; }

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline bool UnrealizedSavingsHasBeenSet() const { return m_unrealizedSavingsHasBeenSet; }

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline void SetUnrealizedSavings(const Aws::String& value) { m_unrealizedSavingsHasBeenSet = true; m_unrealizedSavings = value; }

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline void SetUnrealizedSavings(Aws::String&& value) { m_unrealizedSavingsHasBeenSet = true; m_unrealizedSavings = std::move(value); }

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline void SetUnrealizedSavings(const char* value) { m_unrealizedSavingsHasBeenSet = true; m_unrealizedSavings.assign(value); }

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithUnrealizedSavings(const Aws::String& value) { SetUnrealizedSavings(value); return *this;}

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithUnrealizedSavings(Aws::String&& value) { SetUnrealizedSavings(std::move(value)); return *this;}

    /**
     * <p>The unrealized savings because of purchasing and using a reservation.</p>
     */
    inline ReservationAggregates& WithUnrealizedSavings(const char* value) { SetUnrealizedSavings(value); return *this;}

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
