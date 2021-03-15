/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/OnDemandCapacityReservationUsageStrategy.h>
#include <aws/elasticmapreduce/model/OnDemandCapacityReservationPreference.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Describes the strategy for using unused Capacity Reservations for fulfilling
   * On-Demand capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OnDemandCapacityReservationOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API OnDemandCapacityReservationOptions
  {
  public:
    OnDemandCapacityReservationOptions();
    OnDemandCapacityReservationOptions(Aws::Utils::Json::JsonView jsonValue);
    OnDemandCapacityReservationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline const OnDemandCapacityReservationUsageStrategy& GetUsageStrategy() const{ return m_usageStrategy; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline bool UsageStrategyHasBeenSet() const { return m_usageStrategyHasBeenSet; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline void SetUsageStrategy(const OnDemandCapacityReservationUsageStrategy& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = value; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline void SetUsageStrategy(OnDemandCapacityReservationUsageStrategy&& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = std::move(value); }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline OnDemandCapacityReservationOptions& WithUsageStrategy(const OnDemandCapacityReservationUsageStrategy& value) { SetUsageStrategy(value); return *this;}

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code>) is applied. If the number of
     * unused Capacity Reservations is less than the On-Demand target capacity, the
     * remaining On-Demand target capacity is launched according to the On-Demand
     * allocation strategy (<code>lowest-price</code>).</p> <p>If you do not specify a
     * value, the fleet fulfils the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline OnDemandCapacityReservationOptions& WithUsageStrategy(OnDemandCapacityReservationUsageStrategy&& value) { SetUsageStrategy(std::move(value)); return *this;}


    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline const OnDemandCapacityReservationPreference& GetCapacityReservationPreference() const{ return m_capacityReservationPreference; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(const OnDemandCapacityReservationPreference& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(OnDemandCapacityReservationPreference&& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = std::move(value); }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline OnDemandCapacityReservationOptions& WithCapacityReservationPreference(const OnDemandCapacityReservationPreference& value) { SetCapacityReservationPreference(value); return *this;}

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline OnDemandCapacityReservationOptions& WithCapacityReservationPreference(OnDemandCapacityReservationPreference&& value) { SetCapacityReservationPreference(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const{ return m_capacityReservationResourceGroupArn; }

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(const Aws::String& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = value; }

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(Aws::String&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(const char* value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline OnDemandCapacityReservationOptions& WithCapacityReservationResourceGroupArn(const Aws::String& value) { SetCapacityReservationResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline OnDemandCapacityReservationOptions& WithCapacityReservationResourceGroupArn(Aws::String&& value) { SetCapacityReservationResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline OnDemandCapacityReservationOptions& WithCapacityReservationResourceGroupArn(const char* value) { SetCapacityReservationResourceGroupArn(value); return *this;}

  private:

    OnDemandCapacityReservationUsageStrategy m_usageStrategy;
    bool m_usageStrategyHasBeenSet;

    OnDemandCapacityReservationPreference m_capacityReservationPreference;
    bool m_capacityReservationPreferenceHasBeenSet;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
