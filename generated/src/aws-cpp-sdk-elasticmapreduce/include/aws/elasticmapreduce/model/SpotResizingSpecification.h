/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningAllocationStrategy.h>
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
   * <p>The resize specification for Spot Instances in the instance fleet, which
   * contains the resize timeout period. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SpotResizingSpecification">AWS
   * API Reference</a></p>
   */
  class SpotResizingSpecification
  {
  public:
    AWS_EMR_API SpotResizingSpecification() = default;
    AWS_EMR_API SpotResizingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SpotResizingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Spot resize timeout in minutes. If Spot Instances are not provisioned within
     * this time, the resize workflow will stop provisioning of Spot instances. Minimum
     * value is 5 minutes and maximum value is 10,080 minutes (7 days). The timeout
     * applies to all resize workflows on the Instance Fleet. The resize could be
     * triggered by Amazon EMR Managed Scaling or by the customer (via Amazon EMR
     * Console, Amazon EMR CLI modify-instance-fleet or Amazon EMR SDK
     * ModifyInstanceFleet API) or by Amazon EMR due to Amazon EC2 Spot
     * Reclamation.</p>
     */
    inline int GetTimeoutDurationMinutes() const { return m_timeoutDurationMinutes; }
    inline bool TimeoutDurationMinutesHasBeenSet() const { return m_timeoutDurationMinutesHasBeenSet; }
    inline void SetTimeoutDurationMinutes(int value) { m_timeoutDurationMinutesHasBeenSet = true; m_timeoutDurationMinutes = value; }
    inline SpotResizingSpecification& WithTimeoutDurationMinutes(int value) { SetTimeoutDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the allocation strategy to use to launch Spot instances during a
     * resize. If you run Amazon EMR releases 6.9.0 or higher, the default is
     * <code>price-capacity-optimized</code>. If you run Amazon EMR releases 6.8.0 or
     * lower, the default is <code>capacity-optimized</code>.</p>
     */
    inline SpotProvisioningAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(SpotProvisioningAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline SpotResizingSpecification& WithAllocationStrategy(SpotProvisioningAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}
  private:

    int m_timeoutDurationMinutes{0};
    bool m_timeoutDurationMinutesHasBeenSet = false;

    SpotProvisioningAllocationStrategy m_allocationStrategy{SpotProvisioningAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
