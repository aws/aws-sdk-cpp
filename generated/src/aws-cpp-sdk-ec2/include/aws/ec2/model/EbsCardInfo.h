/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the performance characteristics of an EBS card on the instance
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsCardInfo">AWS API
 * Reference</a></p>
 */
class EbsCardInfo {
 public:
  AWS_EC2_API EbsCardInfo() = default;
  AWS_EC2_API EbsCardInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API EbsCardInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The index of the EBS card.</p>
   */
  inline int GetEbsCardIndex() const { return m_ebsCardIndex; }
  inline bool EbsCardIndexHasBeenSet() const { return m_ebsCardIndexHasBeenSet; }
  inline void SetEbsCardIndex(int value) {
    m_ebsCardIndexHasBeenSet = true;
    m_ebsCardIndex = value;
  }
  inline EbsCardInfo& WithEbsCardIndex(int value) {
    SetEbsCardIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The baseline bandwidth performance for the EBS card, in Mbps.</p>
   */
  inline int GetBaselineBandwidthInMbps() const { return m_baselineBandwidthInMbps; }
  inline bool BaselineBandwidthInMbpsHasBeenSet() const { return m_baselineBandwidthInMbpsHasBeenSet; }
  inline void SetBaselineBandwidthInMbps(int value) {
    m_baselineBandwidthInMbpsHasBeenSet = true;
    m_baselineBandwidthInMbps = value;
  }
  inline EbsCardInfo& WithBaselineBandwidthInMbps(int value) {
    SetBaselineBandwidthInMbps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The baseline throughput performance for the EBS card, in MBps.</p>
   */
  inline double GetBaselineThroughputInMBps() const { return m_baselineThroughputInMBps; }
  inline bool BaselineThroughputInMBpsHasBeenSet() const { return m_baselineThroughputInMBpsHasBeenSet; }
  inline void SetBaselineThroughputInMBps(double value) {
    m_baselineThroughputInMBpsHasBeenSet = true;
    m_baselineThroughputInMBps = value;
  }
  inline EbsCardInfo& WithBaselineThroughputInMBps(double value) {
    SetBaselineThroughputInMBps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The baseline IOPS performance for the EBS card.</p>
   */
  inline int GetBaselineIops() const { return m_baselineIops; }
  inline bool BaselineIopsHasBeenSet() const { return m_baselineIopsHasBeenSet; }
  inline void SetBaselineIops(int value) {
    m_baselineIopsHasBeenSet = true;
    m_baselineIops = value;
  }
  inline EbsCardInfo& WithBaselineIops(int value) {
    SetBaselineIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bandwidth performance for the EBS card, in Mbps.</p>
   */
  inline int GetMaximumBandwidthInMbps() const { return m_maximumBandwidthInMbps; }
  inline bool MaximumBandwidthInMbpsHasBeenSet() const { return m_maximumBandwidthInMbpsHasBeenSet; }
  inline void SetMaximumBandwidthInMbps(int value) {
    m_maximumBandwidthInMbpsHasBeenSet = true;
    m_maximumBandwidthInMbps = value;
  }
  inline EbsCardInfo& WithMaximumBandwidthInMbps(int value) {
    SetMaximumBandwidthInMbps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum throughput performance for the EBS card, in MBps.</p>
   */
  inline double GetMaximumThroughputInMBps() const { return m_maximumThroughputInMBps; }
  inline bool MaximumThroughputInMBpsHasBeenSet() const { return m_maximumThroughputInMBpsHasBeenSet; }
  inline void SetMaximumThroughputInMBps(double value) {
    m_maximumThroughputInMBpsHasBeenSet = true;
    m_maximumThroughputInMBps = value;
  }
  inline EbsCardInfo& WithMaximumThroughputInMBps(double value) {
    SetMaximumThroughputInMBps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum IOPS performance for the EBS card.</p>
   */
  inline int GetMaximumIops() const { return m_maximumIops; }
  inline bool MaximumIopsHasBeenSet() const { return m_maximumIopsHasBeenSet; }
  inline void SetMaximumIops(int value) {
    m_maximumIopsHasBeenSet = true;
    m_maximumIops = value;
  }
  inline EbsCardInfo& WithMaximumIops(int value) {
    SetMaximumIops(value);
    return *this;
  }
  ///@}
 private:
  int m_ebsCardIndex{0};

  int m_baselineBandwidthInMbps{0};

  double m_baselineThroughputInMBps{0.0};

  int m_baselineIops{0};

  int m_maximumBandwidthInMbps{0};

  double m_maximumThroughputInMBps{0.0};

  int m_maximumIops{0};
  bool m_ebsCardIndexHasBeenSet = false;
  bool m_baselineBandwidthInMbpsHasBeenSet = false;
  bool m_baselineThroughputInMBpsHasBeenSet = false;
  bool m_baselineIopsHasBeenSet = false;
  bool m_maximumBandwidthInMbpsHasBeenSet = false;
  bool m_maximumThroughputInMBpsHasBeenSet = false;
  bool m_maximumIopsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
