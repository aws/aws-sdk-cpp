/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Specifies the minimum and maximum for the <code>NetworkBandwidthGbps</code>
   * object when you specify <a>InstanceRequirements</a> for an Auto Scaling
   * group.</p>  <p>Setting the minimum bandwidth does not guarantee that your
   * instance will achieve the minimum bandwidth. Amazon EC2 will identify instance
   * types that support the specified minimum bandwidth, but the actual bandwidth of
   * your instance might go below the specified minimum at times. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-network-bandwidth.html#available-instance-bandwidth">Available
   * instance bandwidth</a> in the <i>Amazon EC2 User Guide for Linux
   * Instances</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/NetworkBandwidthGbpsRequest">AWS
   * API Reference</a></p>
   */
  class NetworkBandwidthGbpsRequest
  {
  public:
    AWS_AUTOSCALING_API NetworkBandwidthGbpsRequest();
    AWS_AUTOSCALING_API NetworkBandwidthGbpsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API NetworkBandwidthGbpsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline NetworkBandwidthGbpsRequest& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The maximum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum amount of network bandwidth, in gigabits per second (Gbps).</p>
     */
    inline NetworkBandwidthGbpsRequest& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
