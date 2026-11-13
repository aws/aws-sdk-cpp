/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/Monitoring.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

Monitoring::Monitoring(const XmlNode& xmlNode) { *this = xmlNode; }

Monitoring& Monitoring::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode metricCategoryIdsNode = resultNode.FirstChild("metricCategoryIdSet");
    if (!metricCategoryIdsNode.IsNull()) {
      XmlNode metricCategoryIdsMember = metricCategoryIdsNode.FirstChild("item");
      m_metricCategoryIdsHasBeenSet = !metricCategoryIdsMember.IsNull();
      while (!metricCategoryIdsMember.IsNull()) {
        m_metricCategoryIds.push_back(metricCategoryIdsMember.GetText());
        metricCategoryIdsMember = metricCategoryIdsMember.NextNode("item");
      }

      m_metricCategoryIdsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = MonitoringStateMapper::GetMonitoringStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void Monitoring::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << index << locationValue << ".MetricCategoryIdSet." << metricCategoryIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(MonitoringStateMapper::GetNameForMonitoringState(m_state)) << "&";
  }
}

void Monitoring::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_metricCategoryIdsHasBeenSet) {
    unsigned metricCategoryIdsIdx = 1;
    for (auto& item : m_metricCategoryIds) {
      oStream << location << ".MetricCategoryIdSet." << metricCategoryIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(MonitoringStateMapper::GetNameForMonitoringState(m_state)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
