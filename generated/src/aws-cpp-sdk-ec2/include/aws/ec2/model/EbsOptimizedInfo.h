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
   * <p>Describes the optimized EBS performance for supported instance
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsOptimizedInfo">AWS
   * API Reference</a></p>
   */
  class EbsOptimizedInfo
  {
  public:
    AWS_EC2_API EbsOptimizedInfo();
    AWS_EC2_API EbsOptimizedInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsOptimizedInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The baseline bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline int GetBaselineBandwidthInMbps() const{ return m_baselineBandwidthInMbps; }

    /**
     * <p>The baseline bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline bool BaselineBandwidthInMbpsHasBeenSet() const { return m_baselineBandwidthInMbpsHasBeenSet; }

    /**
     * <p>The baseline bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline void SetBaselineBandwidthInMbps(int value) { m_baselineBandwidthInMbpsHasBeenSet = true; m_baselineBandwidthInMbps = value; }

    /**
     * <p>The baseline bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline EbsOptimizedInfo& WithBaselineBandwidthInMbps(int value) { SetBaselineBandwidthInMbps(value); return *this;}


    /**
     * <p>The baseline throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline double GetBaselineThroughputInMBps() const{ return m_baselineThroughputInMBps; }

    /**
     * <p>The baseline throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline bool BaselineThroughputInMBpsHasBeenSet() const { return m_baselineThroughputInMBpsHasBeenSet; }

    /**
     * <p>The baseline throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline void SetBaselineThroughputInMBps(double value) { m_baselineThroughputInMBpsHasBeenSet = true; m_baselineThroughputInMBps = value; }

    /**
     * <p>The baseline throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline EbsOptimizedInfo& WithBaselineThroughputInMBps(double value) { SetBaselineThroughputInMBps(value); return *this;}


    /**
     * <p>The baseline input/output storage operations per seconds for an EBS-optimized
     * instance type.</p>
     */
    inline int GetBaselineIops() const{ return m_baselineIops; }

    /**
     * <p>The baseline input/output storage operations per seconds for an EBS-optimized
     * instance type.</p>
     */
    inline bool BaselineIopsHasBeenSet() const { return m_baselineIopsHasBeenSet; }

    /**
     * <p>The baseline input/output storage operations per seconds for an EBS-optimized
     * instance type.</p>
     */
    inline void SetBaselineIops(int value) { m_baselineIopsHasBeenSet = true; m_baselineIops = value; }

    /**
     * <p>The baseline input/output storage operations per seconds for an EBS-optimized
     * instance type.</p>
     */
    inline EbsOptimizedInfo& WithBaselineIops(int value) { SetBaselineIops(value); return *this;}


    /**
     * <p>The maximum bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline int GetMaximumBandwidthInMbps() const{ return m_maximumBandwidthInMbps; }

    /**
     * <p>The maximum bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline bool MaximumBandwidthInMbpsHasBeenSet() const { return m_maximumBandwidthInMbpsHasBeenSet; }

    /**
     * <p>The maximum bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline void SetMaximumBandwidthInMbps(int value) { m_maximumBandwidthInMbpsHasBeenSet = true; m_maximumBandwidthInMbps = value; }

    /**
     * <p>The maximum bandwidth performance for an EBS-optimized instance type, in
     * Mbps.</p>
     */
    inline EbsOptimizedInfo& WithMaximumBandwidthInMbps(int value) { SetMaximumBandwidthInMbps(value); return *this;}


    /**
     * <p>The maximum throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline double GetMaximumThroughputInMBps() const{ return m_maximumThroughputInMBps; }

    /**
     * <p>The maximum throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline bool MaximumThroughputInMBpsHasBeenSet() const { return m_maximumThroughputInMBpsHasBeenSet; }

    /**
     * <p>The maximum throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline void SetMaximumThroughputInMBps(double value) { m_maximumThroughputInMBpsHasBeenSet = true; m_maximumThroughputInMBps = value; }

    /**
     * <p>The maximum throughput performance for an EBS-optimized instance type, in
     * MB/s.</p>
     */
    inline EbsOptimizedInfo& WithMaximumThroughputInMBps(double value) { SetMaximumThroughputInMBps(value); return *this;}


    /**
     * <p>The maximum input/output storage operations per second for an EBS-optimized
     * instance type.</p>
     */
    inline int GetMaximumIops() const{ return m_maximumIops; }

    /**
     * <p>The maximum input/output storage operations per second for an EBS-optimized
     * instance type.</p>
     */
    inline bool MaximumIopsHasBeenSet() const { return m_maximumIopsHasBeenSet; }

    /**
     * <p>The maximum input/output storage operations per second for an EBS-optimized
     * instance type.</p>
     */
    inline void SetMaximumIops(int value) { m_maximumIopsHasBeenSet = true; m_maximumIops = value; }

    /**
     * <p>The maximum input/output storage operations per second for an EBS-optimized
     * instance type.</p>
     */
    inline EbsOptimizedInfo& WithMaximumIops(int value) { SetMaximumIops(value); return *this;}

  private:

    int m_baselineBandwidthInMbps;
    bool m_baselineBandwidthInMbpsHasBeenSet = false;

    double m_baselineThroughputInMBps;
    bool m_baselineThroughputInMBpsHasBeenSet = false;

    int m_baselineIops;
    bool m_baselineIopsHasBeenSet = false;

    int m_maximumBandwidthInMbps;
    bool m_maximumBandwidthInMbpsHasBeenSet = false;

    double m_maximumThroughputInMBps;
    bool m_maximumThroughputInMBpsHasBeenSet = false;

    int m_maximumIops;
    bool m_maximumIopsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
