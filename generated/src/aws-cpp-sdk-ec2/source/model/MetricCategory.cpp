/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/MetricCategory.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

MetricCategory::MetricCategory(const XmlNode& xmlNode) { *this = xmlNode; }

MetricCategory& MetricCategory::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode metricCategoryIdNode = resultNode.FirstChild("metricCategoryId");
    if (!metricCategoryIdNode.IsNull()) {
      m_metricCategoryId = Aws::Utils::Xml::DecodeEscapedXmlText(metricCategoryIdNode.GetText());
      m_metricCategoryIdHasBeenSet = true;
    }
    XmlNode metricsNode = resultNode.FirstChild("metricSet");
    if (!metricsNode.IsNull()) {
      XmlNode metricsMember = metricsNode.FirstChild("item");
      m_metricsHasBeenSet = !metricsMember.IsNull();
      while (!metricsMember.IsNull()) {
        m_metrics.push_back(metricsMember.GetText());
        metricsMember = metricsMember.NextNode("item");
      }

      m_metricsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void MetricCategory::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_metricCategoryIdHasBeenSet) {
    oStream << location << index << locationValue << ".MetricCategoryId=" << StringUtils::URLEncode(m_metricCategoryId.c_str()) << "&";
  }

  if (m_metricsHasBeenSet) {
    unsigned metricsIdx = 1;
    for (auto& item : m_metrics) {
      oStream << location << index << locationValue << ".MetricSet." << metricsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void MetricCategory::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_metricCategoryIdHasBeenSet) {
    oStream << location << ".MetricCategoryId=" << StringUtils::URLEncode(m_metricCategoryId.c_str()) << "&";
  }
  if (m_metricsHasBeenSet) {
    unsigned metricsIdx = 1;
    for (auto& item : m_metrics) {
      oStream << location << ".MetricSet." << metricsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
