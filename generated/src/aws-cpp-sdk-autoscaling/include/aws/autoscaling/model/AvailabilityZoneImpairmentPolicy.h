/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/ImpairedZoneHealthCheckBehavior.h>
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
   * <p> Describes an Availability Zone impairment policy. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AvailabilityZoneImpairmentPolicy">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneImpairmentPolicy
  {
  public:
    AWS_AUTOSCALING_API AvailabilityZoneImpairmentPolicy() = default;
    AWS_AUTOSCALING_API AvailabilityZoneImpairmentPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AvailabilityZoneImpairmentPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> If <code>true</code>, enable zonal shift for your Auto Scaling group. </p>
     */
    inline bool GetZonalShiftEnabled() const { return m_zonalShiftEnabled; }
    inline bool ZonalShiftEnabledHasBeenSet() const { return m_zonalShiftEnabledHasBeenSet; }
    inline void SetZonalShiftEnabled(bool value) { m_zonalShiftEnabledHasBeenSet = true; m_zonalShiftEnabled = value; }
    inline AvailabilityZoneImpairmentPolicy& WithZonalShiftEnabled(bool value) { SetZonalShiftEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the health check behavior for the impaired Availability Zone in an
     * active zonal shift. If you select <code>Replace unhealthy</code>, instances that
     * appear unhealthy will be replaced in all Availability Zones. If you select
     * <code>Ignore unhealthy</code>, instances will not be replaced in the
     * Availability Zone with the active zonal shift. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-zonal-shift.html">Auto
     * Scaling group zonal shift</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
     * </p>
     */
    inline ImpairedZoneHealthCheckBehavior GetImpairedZoneHealthCheckBehavior() const { return m_impairedZoneHealthCheckBehavior; }
    inline bool ImpairedZoneHealthCheckBehaviorHasBeenSet() const { return m_impairedZoneHealthCheckBehaviorHasBeenSet; }
    inline void SetImpairedZoneHealthCheckBehavior(ImpairedZoneHealthCheckBehavior value) { m_impairedZoneHealthCheckBehaviorHasBeenSet = true; m_impairedZoneHealthCheckBehavior = value; }
    inline AvailabilityZoneImpairmentPolicy& WithImpairedZoneHealthCheckBehavior(ImpairedZoneHealthCheckBehavior value) { SetImpairedZoneHealthCheckBehavior(value); return *this;}
    ///@}
  private:

    bool m_zonalShiftEnabled{false};
    bool m_zonalShiftEnabledHasBeenSet = false;

    ImpairedZoneHealthCheckBehavior m_impairedZoneHealthCheckBehavior{ImpairedZoneHealthCheckBehavior::NOT_SET};
    bool m_impairedZoneHealthCheckBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
