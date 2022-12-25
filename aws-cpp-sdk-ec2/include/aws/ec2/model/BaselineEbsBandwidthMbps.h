/**
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
   * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
   * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BaselineEbsBandwidthMbps">AWS
   * API Reference</a></p>
   */
  class BaselineEbsBandwidthMbps
  {
  public:
    AWS_EC2_API BaselineEbsBandwidthMbps();
    AWS_EC2_API BaselineEbsBandwidthMbps(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BaselineEbsBandwidthMbps& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no minimum limit.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The minimum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no minimum limit.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no minimum limit.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no minimum limit.</p>
     */
    inline BaselineEbsBandwidthMbps& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p>The maximum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no maximum limit.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The maximum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no maximum limit.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no maximum limit.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum baseline bandwidth, in Mbps. If this parameter is not specified,
     * there is no maximum limit.</p>
     */
    inline BaselineEbsBandwidthMbps& WithMax(int value) { SetMax(value); return *this;}

  private:

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
