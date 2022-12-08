/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetReplacementStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The Spot Instance replacement strategy to use when Amazon EC2 emits a
   * rebalance notification signal that your Spot Instance is at an elevated risk of
   * being interrupted. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-capacity-rebalance.html">Capacity
   * rebalancing</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetSpotCapacityRebalanceRequest">AWS
   * API Reference</a></p>
   */
  class FleetSpotCapacityRebalanceRequest
  {
  public:
    AWS_EC2_API FleetSpotCapacityRebalanceRequest();
    AWS_EC2_API FleetSpotCapacityRebalanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetSpotCapacityRebalanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline const FleetReplacementStrategy& GetReplacementStrategy() const{ return m_replacementStrategy; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline bool ReplacementStrategyHasBeenSet() const { return m_replacementStrategyHasBeenSet; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline void SetReplacementStrategy(const FleetReplacementStrategy& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = value; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline void SetReplacementStrategy(FleetReplacementStrategy&& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = std::move(value); }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline FleetSpotCapacityRebalanceRequest& WithReplacementStrategy(const FleetReplacementStrategy& value) { SetReplacementStrategy(value); return *this;}

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p> <code>launch</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet. EC2 Fleet does not terminate the instances
     * that receive a rebalance notification. You can terminate the old instances, or
     * you can leave them running. You are charged for all instances while they are
     * running. </p> <p> <code>launch-before-terminate</code> - EC2 Fleet launches a
     * replacement Spot Instance when a rebalance notification is emitted for an
     * existing Spot Instance in the fleet, and then, after a delay that you specify
     * (in <code>TerminationDelay</code>), terminates the instances that received a
     * rebalance notification.</p>
     */
    inline FleetSpotCapacityRebalanceRequest& WithReplacementStrategy(FleetReplacementStrategy&& value) { SetReplacementStrategy(std::move(value)); return *this;}


    /**
     * <p>The amount of time (in seconds) that Amazon EC2 waits before terminating the
     * old Spot Instance after launching a new replacement Spot Instance.</p>
     * <p>Required when <code>ReplacementStrategy</code> is set to
     * <code>launch-before-terminate</code>.</p> <p>Not valid when
     * <code>ReplacementStrategy</code> is set to <code>launch</code>.</p> <p>Valid
     * values: Minimum value of <code>120</code> seconds. Maximum value of
     * <code>7200</code> seconds.</p>
     */
    inline int GetTerminationDelay() const{ return m_terminationDelay; }

    /**
     * <p>The amount of time (in seconds) that Amazon EC2 waits before terminating the
     * old Spot Instance after launching a new replacement Spot Instance.</p>
     * <p>Required when <code>ReplacementStrategy</code> is set to
     * <code>launch-before-terminate</code>.</p> <p>Not valid when
     * <code>ReplacementStrategy</code> is set to <code>launch</code>.</p> <p>Valid
     * values: Minimum value of <code>120</code> seconds. Maximum value of
     * <code>7200</code> seconds.</p>
     */
    inline bool TerminationDelayHasBeenSet() const { return m_terminationDelayHasBeenSet; }

    /**
     * <p>The amount of time (in seconds) that Amazon EC2 waits before terminating the
     * old Spot Instance after launching a new replacement Spot Instance.</p>
     * <p>Required when <code>ReplacementStrategy</code> is set to
     * <code>launch-before-terminate</code>.</p> <p>Not valid when
     * <code>ReplacementStrategy</code> is set to <code>launch</code>.</p> <p>Valid
     * values: Minimum value of <code>120</code> seconds. Maximum value of
     * <code>7200</code> seconds.</p>
     */
    inline void SetTerminationDelay(int value) { m_terminationDelayHasBeenSet = true; m_terminationDelay = value; }

    /**
     * <p>The amount of time (in seconds) that Amazon EC2 waits before terminating the
     * old Spot Instance after launching a new replacement Spot Instance.</p>
     * <p>Required when <code>ReplacementStrategy</code> is set to
     * <code>launch-before-terminate</code>.</p> <p>Not valid when
     * <code>ReplacementStrategy</code> is set to <code>launch</code>.</p> <p>Valid
     * values: Minimum value of <code>120</code> seconds. Maximum value of
     * <code>7200</code> seconds.</p>
     */
    inline FleetSpotCapacityRebalanceRequest& WithTerminationDelay(int value) { SetTerminationDelay(value); return *this;}

  private:

    FleetReplacementStrategy m_replacementStrategy;
    bool m_replacementStrategyHasBeenSet = false;

    int m_terminationDelay;
    bool m_terminationDelayHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
