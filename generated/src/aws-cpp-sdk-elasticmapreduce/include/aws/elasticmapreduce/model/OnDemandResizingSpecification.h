/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningAllocationStrategy.h>
#include <aws/elasticmapreduce/model/OnDemandCapacityReservationOptions.h>
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
   * <p>The resize specification for On-Demand Instances in the instance fleet, which
   * contains the resize timeout period. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OnDemandResizingSpecification">AWS
   * API Reference</a></p>
   */
  class OnDemandResizingSpecification
  {
  public:
    AWS_EMR_API OnDemandResizingSpecification() = default;
    AWS_EMR_API OnDemandResizingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API OnDemandResizingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>On-Demand resize timeout in minutes. If On-Demand Instances are not
     * provisioned within this time, the resize workflow stops. The minimum value is 5
     * minutes, and the maximum value is 10,080 minutes (7 days). The timeout applies
     * to all resize workflows on the Instance Fleet. The resize could be triggered by
     * Amazon EMR Managed Scaling or by the customer (via Amazon EMR Console, Amazon
     * EMR CLI modify-instance-fleet or Amazon EMR SDK ModifyInstanceFleet API) or by
     * Amazon EMR due to Amazon EC2 Spot Reclamation.</p>
     */
    inline int GetTimeoutDurationMinutes() const { return m_timeoutDurationMinutes; }
    inline bool TimeoutDurationMinutesHasBeenSet() const { return m_timeoutDurationMinutesHasBeenSet; }
    inline void SetTimeoutDurationMinutes(int value) { m_timeoutDurationMinutesHasBeenSet = true; m_timeoutDurationMinutes = value; }
    inline OnDemandResizingSpecification& WithTimeoutDurationMinutes(int value) { SetTimeoutDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the allocation strategy to use to launch On-Demand instances during
     * a resize. The default is <code>lowest-price</code>.</p>
     */
    inline OnDemandProvisioningAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(OnDemandProvisioningAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline OnDemandResizingSpecification& WithAllocationStrategy(OnDemandProvisioningAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandCapacityReservationOptions& GetCapacityReservationOptions() const { return m_capacityReservationOptions; }
    inline bool CapacityReservationOptionsHasBeenSet() const { return m_capacityReservationOptionsHasBeenSet; }
    template<typename CapacityReservationOptionsT = OnDemandCapacityReservationOptions>
    void SetCapacityReservationOptions(CapacityReservationOptionsT&& value) { m_capacityReservationOptionsHasBeenSet = true; m_capacityReservationOptions = std::forward<CapacityReservationOptionsT>(value); }
    template<typename CapacityReservationOptionsT = OnDemandCapacityReservationOptions>
    OnDemandResizingSpecification& WithCapacityReservationOptions(CapacityReservationOptionsT&& value) { SetCapacityReservationOptions(std::forward<CapacityReservationOptionsT>(value)); return *this;}
    ///@}
  private:

    int m_timeoutDurationMinutes{0};
    bool m_timeoutDurationMinutesHasBeenSet = false;

    OnDemandProvisioningAllocationStrategy m_allocationStrategy{OnDemandProvisioningAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    OnDemandCapacityReservationOptions m_capacityReservationOptions;
    bool m_capacityReservationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
