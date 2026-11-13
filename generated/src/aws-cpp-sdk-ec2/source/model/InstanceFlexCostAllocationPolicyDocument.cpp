/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceFlexCostAllocationPolicyDocument.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceFlexCostAllocationPolicyDocument::InstanceFlexCostAllocationPolicyDocument(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceFlexCostAllocationPolicyDocument& InstanceFlexCostAllocationPolicyDocument::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode reportingGranularityNode = resultNode.FirstChild("ReportingGranularity");
    if (!reportingGranularityNode.IsNull()) {
      XmlNode reportingGranularityMember = reportingGranularityNode.FirstChild("item");
      m_reportingGranularityHasBeenSet = !reportingGranularityMember.IsNull();
      while (!reportingGranularityMember.IsNull()) {
        m_reportingGranularity.push_back(FlexCostAllocationReportingGranularityMapper::GetFlexCostAllocationReportingGranularityForName(
            StringUtils::Trim(reportingGranularityMember.GetText().c_str())));
        reportingGranularityMember = reportingGranularityMember.NextNode("item");
      }

      m_reportingGranularityHasBeenSet = true;
    }
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if (!dimensionsNode.IsNull()) {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("item");
      m_dimensionsHasBeenSet = !dimensionsMember.IsNull();
      while (!dimensionsMember.IsNull()) {
        m_dimensions.push_back(FlexCostAllocationCostDimensionMapper::GetFlexCostAllocationCostDimensionForName(
            StringUtils::Trim(dimensionsMember.GetText().c_str())));
        dimensionsMember = dimensionsMember.NextNode("item");
      }

      m_dimensionsHasBeenSet = true;
    }
    XmlNode cidrRangeSpecificationsNode = resultNode.FirstChild("CidrRangeSpecifications");
    if (!cidrRangeSpecificationsNode.IsNull()) {
      m_cidrRangeSpecifications = cidrRangeSpecificationsNode;
      m_cidrRangeSpecificationsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceFlexCostAllocationPolicyDocument::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                              const char* locationValue) const {
  if (m_reportingGranularityHasBeenSet) {
    unsigned reportingGranularityIdx = 1;
    for (auto& item : m_reportingGranularity) {
      oStream << location << index << locationValue << ".ReportingGranularity." << reportingGranularityIdx++ << "="
              << StringUtils::URLEncode(
                     FlexCostAllocationReportingGranularityMapper::GetNameForFlexCostAllocationReportingGranularity(item))
              << "&";
    }
  }

  if (m_dimensionsHasBeenSet) {
    unsigned dimensionsIdx = 1;
    for (auto& item : m_dimensions) {
      oStream << location << index << locationValue << ".Dimensions." << dimensionsIdx++ << "="
              << StringUtils::URLEncode(FlexCostAllocationCostDimensionMapper::GetNameForFlexCostAllocationCostDimension(item)) << "&";
    }
  }

  if (m_cidrRangeSpecificationsHasBeenSet) {
    Aws::StringStream cidrRangeSpecificationsLocationAndMemberSs;
    cidrRangeSpecificationsLocationAndMemberSs << location << index << locationValue << ".CidrRangeSpecifications";
    m_cidrRangeSpecifications.OutputToStream(oStream, cidrRangeSpecificationsLocationAndMemberSs.str().c_str());
  }
}

void InstanceFlexCostAllocationPolicyDocument::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_reportingGranularityHasBeenSet) {
    unsigned reportingGranularityIdx = 1;
    for (auto& item : m_reportingGranularity) {
      oStream << location << ".ReportingGranularity." << reportingGranularityIdx++ << "="
              << StringUtils::URLEncode(
                     FlexCostAllocationReportingGranularityMapper::GetNameForFlexCostAllocationReportingGranularity(item))
              << "&";
    }
  }
  if (m_dimensionsHasBeenSet) {
    unsigned dimensionsIdx = 1;
    for (auto& item : m_dimensions) {
      oStream << location << ".Dimensions." << dimensionsIdx++ << "="
              << StringUtils::URLEncode(FlexCostAllocationCostDimensionMapper::GetNameForFlexCostAllocationCostDimension(item)) << "&";
    }
  }
  if (m_cidrRangeSpecificationsHasBeenSet) {
    Aws::String cidrRangeSpecificationsLocationAndMember(location);
    cidrRangeSpecificationsLocationAndMember += ".CidrRangeSpecifications";
    m_cidrRangeSpecifications.OutputToStream(oStream, cidrRangeSpecificationsLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
