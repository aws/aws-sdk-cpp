/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningTimeoutAction.h>
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
   * <p>The launch specification for Spot instances in the instance fleet, which
   * determines the defined duration and provisioning timeout behavior.</p> <note>
   * <p>The instance fleet configuration is available only in Amazon EMR versions
   * 4.8.0 and later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SpotProvisioningSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API SpotProvisioningSpecification
  {
  public:
    SpotProvisioningSpecification();
    SpotProvisioningSpecification(Aws::Utils::Json::JsonView jsonValue);
    SpotProvisioningSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The spot provisioning timeout period in minutes. If Spot instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline int GetTimeoutDurationMinutes() const{ return m_timeoutDurationMinutes; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline bool TimeoutDurationMinutesHasBeenSet() const { return m_timeoutDurationMinutesHasBeenSet; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline void SetTimeoutDurationMinutes(int value) { m_timeoutDurationMinutesHasBeenSet = true; m_timeoutDurationMinutes = value; }

    /**
     * <p>The spot provisioning timeout period in minutes. If Spot instances are not
     * provisioned within this time period, the <code>TimeOutAction</code> is taken.
     * Minimum value is 5 and maximum value is 1440. The timeout applies only during
     * initial provisioning, when the cluster is first created.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutDurationMinutes(int value) { SetTimeoutDurationMinutes(value); return *this;}


    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline const SpotProvisioningTimeoutAction& GetTimeoutAction() const{ return m_timeoutAction; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline void SetTimeoutAction(const SpotProvisioningTimeoutAction& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = value; }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline void SetTimeoutAction(SpotProvisioningTimeoutAction&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::move(value); }

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutAction(const SpotProvisioningTimeoutAction& value) { SetTimeoutAction(value); return *this;}

    /**
     * <p>The action to take when <code>TargetSpotCapacity</code> has not been
     * fulfilled when the <code>TimeoutDurationMinutes</code> has expired; that is,
     * when all Spot instances could not be provisioned within the Spot provisioning
     * timeout. Valid values are <code>TERMINATE_CLUSTER</code> and
     * <code>SWITCH_TO_ON_DEMAND</code>. SWITCH_TO_ON_DEMAND specifies that if no Spot
     * instances are available, On-Demand Instances should be provisioned to fulfill
     * any remaining Spot capacity.</p>
     */
    inline SpotProvisioningSpecification& WithTimeoutAction(SpotProvisioningTimeoutAction&& value) { SetTimeoutAction(std::move(value)); return *this;}


    /**
     * <p>The defined duration for Spot instances (also known as Spot blocks) in
     * minutes. When specified, the Spot instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot instance for termination and provides a Spot instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>The defined duration for Spot instances (also known as Spot blocks) in
     * minutes. When specified, the Spot instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot instance for termination and provides a Spot instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     */
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }

    /**
     * <p>The defined duration for Spot instances (also known as Spot blocks) in
     * minutes. When specified, the Spot instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot instance for termination and provides a Spot instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>The defined duration for Spot instances (also known as Spot blocks) in
     * minutes. When specified, the Spot instance does not terminate before the defined
     * duration expires, and defined duration pricing for Spot instances applies. Valid
     * values are 60, 120, 180, 240, 300, or 360. The duration period starts as soon as
     * a Spot instance receives its instance ID. At the end of the duration, Amazon EC2
     * marks the Spot instance for termination and provides a Spot instance termination
     * notice, which gives the instance a two-minute warning before it terminates. </p>
     */
    inline SpotProvisioningSpecification& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}

  private:

    int m_timeoutDurationMinutes;
    bool m_timeoutDurationMinutesHasBeenSet;

    SpotProvisioningTimeoutAction m_timeoutAction;
    bool m_timeoutActionHasBeenSet;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
