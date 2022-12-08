/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningTimeoutAction.h>
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
   * <p>The launch specification for Spot Instances in the instance fleet, which
   * determines the defined duration, provisioning timeout behavior, and allocation
   * strategy.</p>  <p>The instance fleet configuration is available only in
   * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. Spot Instance
   * allocation strategy is available in Amazon EMR version 5.12.1 and later.</p>
   *   <p>Spot Instances with a defined duration (also known as Spot
   * blocks) are no longer available to new customers from July 1, 2021. For
   * customers who have previously used the feature, we will continue to support Spot
   * Instances with a defined duration until December 31, 2022. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SpotProvisioningSpecification">AWS
   * API Reference</a></p>
   */
  class SpotProvisioningSpecification
  {
  public:
    AWS_EMR_API SpotProvisioningSpecification();
    AWS_EMR_API SpotProvisioningSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SpotProvisioningSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The spot provisioning timeout period in minutes. If Spot Instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline int GetTimeoutDurationMinutes() const{ return m_timeoutDurationMinutes; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot Instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline bool TimeoutDurationMinutesHasBeenSet() const { return m_timeoutDurationMinutesHasBeenSet; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot Instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline void SetTimeoutDurationMinutes(int value) { m_timeoutDurationMinutesHasBeenSet = true; m_timeoutDurationMinutes = value; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot Instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutDurationMinutes(int value) { SetTimeoutDurationMinutes(value); return *this;}


    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline const SpotProvisioningTimeoutAction& GetTimeoutAction() const{ return m_timeoutAction; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline void SetTimeoutAction(const SpotProvisioningTimeoutAction& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = value; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline void SetTimeoutAction(SpotProvisioningTimeoutAction&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::move(value); }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutAction(const SpotProvisioningTimeoutAction& value) { SetTimeoutAction(value); return *this;}

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot Instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * Instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutAction(SpotProvisioningTimeoutAction&& value) { SetTimeoutAction(std::move(value)); return *this;}


    /**
     * <p>The defined duration for Spot Instances (also known as Spot blocks) in
     * minutes. When specified, the Spot Instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot Instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot Instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot Instance for termination and provides a Spot Instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     *  <p>Spot Instances with a defined duration (also known as Spot blocks) are
     * no longer available to new customers from July 1, 2021. For customers who have
     * previously used the feature, we will continue to support Spot Instances with a
     * defined duration until December 31, 2022. </p> 
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>The defined duration for Spot Instances (also known as Spot blocks) in
     * minutes. When specified, the Spot Instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot Instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot Instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot Instance for termination and provides a Spot Instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     *  <p>Spot Instances with a defined duration (also known as Spot blocks) are
     * no longer available to new customers from July 1, 2021. For customers who have
     * previously used the feature, we will continue to support Spot Instances with a
     * defined duration until December 31, 2022. </p> 
     */
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }

    /**
     * <p>The defined duration for Spot Instances (also known as Spot blocks) in
     * minutes. When specified, the Spot Instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot Instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot Instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot Instance for termination and provides a Spot Instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     *  <p>Spot Instances with a defined duration (also known as Spot blocks) are
     * no longer available to new customers from July 1, 2021. For customers who have
     * previously used the feature, we will continue to support Spot Instances with a
     * defined duration until December 31, 2022. </p> 
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>The defined duration for Spot Instances (also known as Spot blocks) in
     * minutes. When specified, the Spot Instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot Instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot Instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot Instance for termination and provides a Spot Instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     *  <p>Spot Instances with a defined duration (also known as Spot blocks) are
     * no longer available to new customers from July 1, 2021. For customers who have
     * previously used the feature, we will continue to support Spot Instances with a
     * defined duration until December 31, 2022. </p> 
     */
    inline SpotProvisioningSpecification& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}


    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline const SpotProvisioningAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline void SetAllocationStrategy(const SpotProvisioningAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline void SetAllocationStrategy(SpotProvisioningAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline SpotProvisioningSpecification& WithAllocationStrategy(const SpotProvisioningAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p> Specifies the strategy to use in launching Spot Instance fleets. Currently,
     * the only option is capacity-optimized (the default), which launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. </p>
     */
    inline SpotProvisioningSpecification& WithAllocationStrategy(SpotProvisioningAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}

  private:

    int m_timeoutDurationMinutes;
    bool m_timeoutDurationMinutesHasBeenSet = false;

    SpotProvisioningTimeoutAction m_timeoutAction;
    bool m_timeoutActionHasBeenSet = false;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet = false;

    SpotProvisioningAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
