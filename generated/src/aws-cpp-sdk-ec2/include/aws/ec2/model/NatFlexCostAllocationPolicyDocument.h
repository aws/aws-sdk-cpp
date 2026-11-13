/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationCidrRangeSpecifications.h>
#include <aws/ec2/model/FlexCostAllocationCostDimension.h>
#include <aws/ec2/model/FlexCostAllocationReportingGranularity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the cost allocation policy document for NAT gateways.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NatFlexCostAllocationPolicyDocument">AWS
 * API Reference</a></p>
 */
class NatFlexCostAllocationPolicyDocument {
 public:
  AWS_EC2_API NatFlexCostAllocationPolicyDocument() = default;
  AWS_EC2_API NatFlexCostAllocationPolicyDocument(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API NatFlexCostAllocationPolicyDocument& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The resource granularity level at which networking costs are allocated. This
   * parameter is required. Specify exactly one value. Valid values are
   * <code>eni</code>, <code>ec2</code>, <code>subnet</code>, <code>vpc</code>,
   * <code>account</code>, and <code>cidr</code>.</p>
   */
  inline const Aws::Vector<FlexCostAllocationReportingGranularity>& GetReportingGranularity() const { return m_reportingGranularity; }
  inline bool ReportingGranularityHasBeenSet() const { return m_reportingGranularityHasBeenSet; }
  template <typename ReportingGranularityT = Aws::Vector<FlexCostAllocationReportingGranularity>>
  void SetReportingGranularity(ReportingGranularityT&& value) {
    m_reportingGranularityHasBeenSet = true;
    m_reportingGranularity = std::forward<ReportingGranularityT>(value);
  }
  template <typename ReportingGranularityT = Aws::Vector<FlexCostAllocationReportingGranularity>>
  NatFlexCostAllocationPolicyDocument& WithReportingGranularity(ReportingGranularityT&& value) {
    SetReportingGranularity(std::forward<ReportingGranularityT>(value));
    return *this;
  }
  inline NatFlexCostAllocationPolicyDocument& AddReportingGranularity(FlexCostAllocationReportingGranularity value) {
    m_reportingGranularityHasBeenSet = true;
    m_reportingGranularity.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cost dimensions to report. This parameter is required. Valid values are
   * <code>data-transfer</code> and <code>data-processing</code>.</p>
   */
  inline const Aws::Vector<FlexCostAllocationCostDimension>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Vector<FlexCostAllocationCostDimension>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Vector<FlexCostAllocationCostDimension>>
  NatFlexCostAllocationPolicyDocument& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  inline NatFlexCostAllocationPolicyDocument& AddDimensions(FlexCostAllocationCostDimension value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDR range mappings to use for cost allocation. Specify this value when
   * <code>ReportingGranularity</code> is <code>cidr</code>, and omit it
   * otherwise.</p>
   */
  inline const FlexCostAllocationCidrRangeSpecifications& GetCidrRangeSpecifications() const { return m_cidrRangeSpecifications; }
  inline bool CidrRangeSpecificationsHasBeenSet() const { return m_cidrRangeSpecificationsHasBeenSet; }
  template <typename CidrRangeSpecificationsT = FlexCostAllocationCidrRangeSpecifications>
  void SetCidrRangeSpecifications(CidrRangeSpecificationsT&& value) {
    m_cidrRangeSpecificationsHasBeenSet = true;
    m_cidrRangeSpecifications = std::forward<CidrRangeSpecificationsT>(value);
  }
  template <typename CidrRangeSpecificationsT = FlexCostAllocationCidrRangeSpecifications>
  NatFlexCostAllocationPolicyDocument& WithCidrRangeSpecifications(CidrRangeSpecificationsT&& value) {
    SetCidrRangeSpecifications(std::forward<CidrRangeSpecificationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FlexCostAllocationReportingGranularity> m_reportingGranularity;

  Aws::Vector<FlexCostAllocationCostDimension> m_dimensions;

  FlexCostAllocationCidrRangeSpecifications m_cidrRangeSpecifications;
  bool m_reportingGranularityHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_cidrRangeSpecificationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
