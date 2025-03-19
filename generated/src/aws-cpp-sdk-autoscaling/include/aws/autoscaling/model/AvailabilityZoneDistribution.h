/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/CapacityDistributionStrategy.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p> Describes an Availability Zone distribution. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AvailabilityZoneDistribution">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneDistribution
  {
  public:
    AWS_AUTOSCALING_API AvailabilityZoneDistribution() = default;
    AWS_AUTOSCALING_API AvailabilityZoneDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AvailabilityZoneDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> If launches fail in an Availability Zone, the following strategies are
     * available. The default is <code>balanced-best-effort</code>. </p> <ul> <li> <p>
     * <code>balanced-only</code> - If launches fail in an Availability Zone, Auto
     * Scaling will continue to attempt to launch in the unhealthy zone to preserve a
     * balanced distribution.</p> </li> <li> <p> <code>balanced-best-effort</code> - If
     * launches fail in an Availability Zone, Auto Scaling will attempt to launch in
     * another healthy Availability Zone instead.</p> </li> </ul>
     */
    inline CapacityDistributionStrategy GetCapacityDistributionStrategy() const { return m_capacityDistributionStrategy; }
    inline bool CapacityDistributionStrategyHasBeenSet() const { return m_capacityDistributionStrategyHasBeenSet; }
    inline void SetCapacityDistributionStrategy(CapacityDistributionStrategy value) { m_capacityDistributionStrategyHasBeenSet = true; m_capacityDistributionStrategy = value; }
    inline AvailabilityZoneDistribution& WithCapacityDistributionStrategy(CapacityDistributionStrategy value) { SetCapacityDistributionStrategy(value); return *this;}
    ///@}
  private:

    CapacityDistributionStrategy m_capacityDistributionStrategy{CapacityDistributionStrategy::NOT_SET};
    bool m_capacityDistributionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
