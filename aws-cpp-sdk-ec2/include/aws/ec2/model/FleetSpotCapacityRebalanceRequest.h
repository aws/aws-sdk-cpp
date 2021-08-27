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
   * <p>The Spot Instance replacement strategy to use when Amazon EC2 emits a signal
   * that your Spot Instance is at an elevated risk of being interrupted. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-configuration-strategies.html#ec2-fleet-capacity-rebalance">Capacity
   * rebalancing</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetSpotCapacityRebalanceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API FleetSpotCapacityRebalanceRequest
  {
  public:
    FleetSpotCapacityRebalanceRequest();
    FleetSpotCapacityRebalanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetSpotCapacityRebalanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline const FleetReplacementStrategy& GetReplacementStrategy() const{ return m_replacementStrategy; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline bool ReplacementStrategyHasBeenSet() const { return m_replacementStrategyHasBeenSet; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline void SetReplacementStrategy(const FleetReplacementStrategy& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = value; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline void SetReplacementStrategy(FleetReplacementStrategy&& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = std::move(value); }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline FleetSpotCapacityRebalanceRequest& WithReplacementStrategy(const FleetReplacementStrategy& value) { SetReplacementStrategy(value); return *this;}

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>.</p> <p>To allow EC2 Fleet to launch a replacement Spot
     * Instance when an instance rebalance notification is emitted for an existing Spot
     * Instance in the fleet, specify <code>launch</code>. You must specify a value,
     * otherwise you get an error.</p>  <p>When a replacement instance is
     * launched, the instance marked for rebalance is not automatically terminated. You
     * can terminate it, or you can leave it running. You are charged for all instances
     * while they are running.</p> 
     */
    inline FleetSpotCapacityRebalanceRequest& WithReplacementStrategy(FleetReplacementStrategy&& value) { SetReplacementStrategy(std::move(value)); return *this;}

  private:

    FleetReplacementStrategy m_replacementStrategy;
    bool m_replacementStrategyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
