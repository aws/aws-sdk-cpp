/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/RunInstancesMonitoringEnabled.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

RunInstancesMonitoringEnabled::RunInstancesMonitoringEnabled(const XmlNode& xmlNode) { *this = xmlNode; }

RunInstancesMonitoringEnabled& RunInstancesMonitoringEnabled::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
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
    XmlNode enabledNode = resultNode.FirstChild("enabled");
    if (!enabledNode.IsNull()) {
      m_enabled =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
  }

  return *this;
}

void RunInstancesMonitoringEnabled::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << index << locationValue << ".MetricCategoryId." << metricCategoryIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_enabledHasBeenSet) {
    oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
}

void RunInstancesMonitoringEnabled::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << ".MetricCategoryId." << metricCategoryIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_enabledHasBeenSet) {
    oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
