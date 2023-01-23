/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetCapacityReservationUsageStrategy.h>
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
   * <p>Describes the strategy for using unused Capacity Reservations for fulfilling
   * On-Demand capacity.</p>  <p>This strategy can only be used if the EC2
   * Fleet is of type <code>instant</code>.</p>  <p>For more information about
   * Capacity Reservations, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-capacity-reservations.html">On-Demand
   * Capacity Reservations</a> in the <i>Amazon EC2 User Guide</i>. For examples of
   * using Capacity Reservations in an EC2 Fleet, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-examples.html">EC2
   * Fleet example configurations</a> in the <i>Amazon EC2 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationOptions">AWS
   * API Reference</a></p>
   */
  class CapacityReservationOptions
  {
  public:
    AWS_EC2_API CapacityReservationOptions();
    AWS_EC2_API CapacityReservationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline const FleetCapacityReservationUsageStrategy& GetUsageStrategy() const{ return m_usageStrategy; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline bool UsageStrategyHasBeenSet() const { return m_usageStrategyHasBeenSet; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline void SetUsageStrategy(const FleetCapacityReservationUsageStrategy& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = value; }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline void SetUsageStrategy(FleetCapacityReservationUsageStrategy&& value) { m_usageStrategyHasBeenSet = true; m_usageStrategy = std::move(value); }

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline CapacityReservationOptions& WithUsageStrategy(const FleetCapacityReservationUsageStrategy& value) { SetUsageStrategy(value); return *this;}

    /**
     * <p>Indicates whether to use unused Capacity Reservations for fulfilling
     * On-Demand capacity.</p> <p>If you specify
     * <code>use-capacity-reservations-first</code>, the fleet uses unused Capacity
     * Reservations to fulfill On-Demand capacity up to the target On-Demand capacity.
     * If multiple instance pools have unused Capacity Reservations, the On-Demand
     * allocation strategy (<code>lowest-price</code> or <code>prioritized</code>) is
     * applied. If the number of unused Capacity Reservations is less than the
     * On-Demand target capacity, the remaining On-Demand target capacity is launched
     * according to the On-Demand allocation strategy (<code>lowest-price</code> or
     * <code>prioritized</code>).</p> <p>If you do not specify a value, the fleet
     * fulfils the On-Demand capacity according to the chosen On-Demand allocation
     * strategy.</p>
     */
    inline CapacityReservationOptions& WithUsageStrategy(FleetCapacityReservationUsageStrategy&& value) { SetUsageStrategy(std::move(value)); return *this;}

  private:

    FleetCapacityReservationUsageStrategy m_usageStrategy;
    bool m_usageStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
