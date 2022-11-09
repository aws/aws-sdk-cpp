﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
   * (Gbps).</p>  <p>Setting the minimum bandwidth does not guarantee that your
   * instance will achieve the minimum bandwidth. Amazon EC2 will identify instance
   * types that support the specified minimum bandwidth, but the actual bandwidth of
   * your instance might go below the specified minimum at times. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-network-bandwidth.html#available-instance-bandwidth">Available
   * instance bandwidth</a> in the <i>Amazon EC2 User Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkBandwidthGbpsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API NetworkBandwidthGbpsRequest
  {
  public:
    NetworkBandwidthGbpsRequest();
    NetworkBandwidthGbpsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkBandwidthGbpsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum amount of network bandwidth, in Gbps. To specify no minimum
     * limit, omit this parameter.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The minimum amount of network bandwidth, in Gbps. To specify no minimum
     * limit, omit this parameter.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum amount of network bandwidth, in Gbps. To specify no minimum
     * limit, omit this parameter.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum amount of network bandwidth, in Gbps. To specify no minimum
     * limit, omit this parameter.</p>
     */
    inline NetworkBandwidthGbpsRequest& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The maximum amount of network bandwidth, in Gbps. To specify no maximum
     * limit, omit this parameter.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum amount of network bandwidth, in Gbps. To specify no maximum
     * limit, omit this parameter.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum amount of network bandwidth, in Gbps. To specify no maximum
     * limit, omit this parameter.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum amount of network bandwidth, in Gbps. To specify no maximum
     * limit, omit this parameter.</p>
     */
    inline NetworkBandwidthGbpsRequest& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
