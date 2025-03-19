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
  class OnDemandCapacityReservationOptions
  {
  public:
    AWS_EMR_API OnDemandCapacityReservationOptions() = default;
    AWS_EMR_API OnDemandCapacityReservationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API OnDemandCapacityReservationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
     * value, the fleet fulfills the On-Demand capacity according to the chosen
     * On-Demand allocation strategy.</p>
     */
    inline OnDemandCapacityReservationUsageStrategy GetUsageStrategy() const { return m_usageStrategy; }
    inline bool UsageStrategyHasBeenSet() const { return m_usageStrategyHasBeenSet; }
    inline void SetUsageStrategy(OnDemandCapacityReservationUsageStrategy value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = value; }
    inline OnDemandCapacityReservationOptions& WithUsageStrategy(OnDemandCapacityReservationUsageStrategy value) { SetUsageStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any open Capacity Reservation that has matching attributes (instance type,
     * platform, Availability Zone).</p> </li> <li> <p> <code>none</code> - The
     * instance avoids running in a Capacity Reservation even if one is available. The
     * instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline OnDemandCapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(OnDemandCapacityReservationPreference value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline OnDemandCapacityReservationOptions& WithCapacityReservationPreference(OnDemandCapacityReservationPreference value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const { return m_capacityReservationResourceGroupArn; }
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    void SetCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::forward<CapacityReservationResourceGroupArnT>(value); }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    OnDemandCapacityReservationOptions& WithCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { SetCapacityReservationResourceGroupArn(std::forward<CapacityReservationResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    OnDemandCapacityReservationUsageStrategy m_usageStrategy{OnDemandCapacityReservationUsageStrategy::NOT_SET};
    bool m_usageStrategyHasBeenSet = false;

    OnDemandCapacityReservationPreference m_capacityReservationPreference{OnDemandCapacityReservationPreference::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
