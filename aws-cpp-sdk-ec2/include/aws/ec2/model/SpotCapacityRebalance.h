/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ReplacementStrategy.h>
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
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-configuration-strategies.html#spot-fleet-capacity-rebalance">Capacity
   * rebalancing</a> in the <i>Amazon EC2 User Guide for Linux
   * Instances</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotCapacityRebalance">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotCapacityRebalance
  {
  public:
    SpotCapacityRebalance();
    SpotCapacityRebalance(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotCapacityRebalance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline const ReplacementStrategy& GetReplacementStrategy() const{ return m_replacementStrategy; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline bool ReplacementStrategyHasBeenSet() const { return m_replacementStrategyHasBeenSet; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline void SetReplacementStrategy(const ReplacementStrategy& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = value; }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline void SetReplacementStrategy(ReplacementStrategy&& value) { m_replacementStrategyHasBeenSet = true; m_replacementStrategy = std::move(value); }

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline SpotCapacityRebalance& WithReplacementStrategy(const ReplacementStrategy& value) { SetReplacementStrategy(value); return *this;}

    /**
     * <p>The replacement strategy to use. Only available for fleets of type
     * <code>maintain</code>. You must specify a value, otherwise you get an error.</p>
     * <p>To allow Spot Fleet to launch a replacement Spot Instance when an instance
     * rebalance notification is emitted for a Spot Instance in the fleet, specify
     * <code>launch</code>.</p>  <p>When a replacement instance is launched, the
     * instance marked for rebalance is not automatically terminated. You can terminate
     * it, or you can leave it running. You are charged for all instances while they
     * are running.</p> 
     */
    inline SpotCapacityRebalance& WithReplacementStrategy(ReplacementStrategy&& value) { SetReplacementStrategy(std::move(value)); return *this;}

  private:

    ReplacementStrategy m_replacementStrategy;
    bool m_replacementStrategyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
