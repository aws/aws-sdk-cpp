/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceBandwidthWeighting.h>
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
   * <p>When you configure network performance options in your launch template, your
   * instance is geared for performance improvements based on the workload that it
   * runs as soon as it's available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateNetworkPerformanceOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateNetworkPerformanceOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateNetworkPerformanceOptionsRequest() = default;
    AWS_EC2_API LaunchTemplateNetworkPerformanceOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateNetworkPerformanceOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specify the bandwidth weighting option to boost the associated type of
     * baseline bandwidth, as follows:</p> <dl> <dt>default</dt> <dd> <p>This option
     * uses the standard bandwidth configuration for your instance type.</p> </dd>
     * <dt>vpc-1</dt> <dd> <p>This option boosts your networking baseline bandwidth and
     * reduces your EBS baseline bandwidth.</p> </dd> <dt>ebs-1</dt> <dd> <p>This
     * option boosts your EBS baseline bandwidth and reduces your networking baseline
     * bandwidth.</p> </dd> </dl>
     */
    inline InstanceBandwidthWeighting GetBandwidthWeighting() const { return m_bandwidthWeighting; }
    inline bool BandwidthWeightingHasBeenSet() const { return m_bandwidthWeightingHasBeenSet; }
    inline void SetBandwidthWeighting(InstanceBandwidthWeighting value) { m_bandwidthWeightingHasBeenSet = true; m_bandwidthWeighting = value; }
    inline LaunchTemplateNetworkPerformanceOptionsRequest& WithBandwidthWeighting(InstanceBandwidthWeighting value) { SetBandwidthWeighting(value); return *this;}
    ///@}
  private:

    InstanceBandwidthWeighting m_bandwidthWeighting{InstanceBandwidthWeighting::NOT_SET};
    bool m_bandwidthWeightingHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
