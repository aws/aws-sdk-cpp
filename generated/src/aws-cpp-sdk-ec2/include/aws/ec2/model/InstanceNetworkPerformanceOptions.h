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
   * <p>With network performance options, you can adjust your bandwidth preferences
   * to meet the needs of the workload that runs on your instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkPerformanceOptions">AWS
   * API Reference</a></p>
   */
  class InstanceNetworkPerformanceOptions
  {
  public:
    AWS_EC2_API InstanceNetworkPerformanceOptions() = default;
    AWS_EC2_API InstanceNetworkPerformanceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkPerformanceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>When you configure network bandwidth weighting, you can boost your baseline
     * bandwidth for either networking or EBS by up to 25%. The total available
     * baseline bandwidth for your instance remains the same. The default option uses
     * the standard bandwidth configuration for your instance type.</p>
     */
    inline InstanceBandwidthWeighting GetBandwidthWeighting() const { return m_bandwidthWeighting; }
    inline bool BandwidthWeightingHasBeenSet() const { return m_bandwidthWeightingHasBeenSet; }
    inline void SetBandwidthWeighting(InstanceBandwidthWeighting value) { m_bandwidthWeightingHasBeenSet = true; m_bandwidthWeighting = value; }
    inline InstanceNetworkPerformanceOptions& WithBandwidthWeighting(InstanceBandwidthWeighting value) { SetBandwidthWeighting(value); return *this;}
    ///@}
  private:

    InstanceBandwidthWeighting m_bandwidthWeighting{InstanceBandwidthWeighting::NOT_SET};
    bool m_bandwidthWeightingHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
