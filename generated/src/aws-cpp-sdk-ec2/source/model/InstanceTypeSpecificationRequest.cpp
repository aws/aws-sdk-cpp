/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceTypeSpecificationRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceTypeSpecificationRequest::InstanceTypeSpecificationRequest(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceTypeSpecificationRequest& InstanceTypeSpecificationRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode supportedInstanceTypesNode = resultNode.FirstChild("SupportedInstanceType");
    if (!supportedInstanceTypesNode.IsNull()) {
      XmlNode supportedInstanceTypesMember = supportedInstanceTypesNode.FirstChild("Item");
      m_supportedInstanceTypesHasBeenSet = !supportedInstanceTypesMember.IsNull();
      while (!supportedInstanceTypesMember.IsNull()) {
        m_supportedInstanceTypes.push_back(supportedInstanceTypesMember.GetText());
        supportedInstanceTypesMember = supportedInstanceTypesMember.NextNode("Item");
      }

      m_supportedInstanceTypesHasBeenSet = true;
    }
    XmlNode unsupportedInstanceTypesNode = resultNode.FirstChild("UnsupportedInstanceType");
    if (!unsupportedInstanceTypesNode.IsNull()) {
      XmlNode unsupportedInstanceTypesMember = unsupportedInstanceTypesNode.FirstChild("Item");
      m_unsupportedInstanceTypesHasBeenSet = !unsupportedInstanceTypesMember.IsNull();
      while (!unsupportedInstanceTypesMember.IsNull()) {
        m_unsupportedInstanceTypes.push_back(unsupportedInstanceTypesMember.GetText());
        unsupportedInstanceTypesMember = unsupportedInstanceTypesMember.NextNode("Item");
      }

      m_unsupportedInstanceTypesHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTypeSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                      const char* locationValue) const {
  if (m_supportedInstanceTypesHasBeenSet) {
    unsigned supportedInstanceTypesIdx = 1;
    for (auto& item : m_supportedInstanceTypes) {
      oStream << location << index << locationValue << ".SupportedInstanceType." << supportedInstanceTypesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_unsupportedInstanceTypesHasBeenSet) {
    unsigned unsupportedInstanceTypesIdx = 1;
    for (auto& item : m_unsupportedInstanceTypes) {
      oStream << location << index << locationValue << ".UnsupportedInstanceType." << unsupportedInstanceTypesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void InstanceTypeSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_supportedInstanceTypesHasBeenSet) {
    unsigned supportedInstanceTypesIdx = 1;
    for (auto& item : m_supportedInstanceTypes) {
      oStream << location << ".SupportedInstanceType." << supportedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_unsupportedInstanceTypesHasBeenSet) {
    unsigned unsupportedInstanceTypesIdx = 1;
    for (auto& item : m_unsupportedInstanceTypes) {
      oStream << location << ".UnsupportedInstanceType." << unsupportedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
