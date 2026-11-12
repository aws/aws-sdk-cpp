/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/LaunchTemplatesMonitoringRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

LaunchTemplatesMonitoringRequest::LaunchTemplatesMonitoringRequest(const XmlNode& xmlNode) { *this = xmlNode; }

LaunchTemplatesMonitoringRequest& LaunchTemplatesMonitoringRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if (!enabledNode.IsNull()) {
      m_enabled =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode metricCategoryIdsNode = resultNode.FirstChild("MetricCategoryId");
    if (!metricCategoryIdsNode.IsNull()) {
      XmlNode metricCategoryIdsMember = metricCategoryIdsNode.FirstChild("item");
      m_metricCategoryIdsHasBeenSet = !metricCategoryIdsMember.IsNull();
      while (!metricCategoryIdsMember.IsNull()) {
        m_metricCategoryIds.push_back(metricCategoryIdsMember.GetText());
        metricCategoryIdsMember = metricCategoryIdsMember.NextNode("item");
      }

      m_metricCategoryIdsHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplatesMonitoringRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                      const char* locationValue) const {
  if (m_enabledHasBeenSet) {
    oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << index << locationValue << ".MetricCategoryId." << metricCategoryIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void LaunchTemplatesMonitoringRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_enabledHasBeenSet) {
    oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << ".MetricCategoryId." << metricCategoryIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
