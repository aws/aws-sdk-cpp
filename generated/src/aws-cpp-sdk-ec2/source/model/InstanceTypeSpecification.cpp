/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceTypeSpecification.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceTypeSpecification::InstanceTypeSpecification(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceTypeSpecification& InstanceTypeSpecification::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode supportedInstanceTypesNode = resultNode.FirstChild("supportedInstanceTypeSet");
    if (!supportedInstanceTypesNode.IsNull()) {
      XmlNode supportedInstanceTypesMember = supportedInstanceTypesNode.FirstChild("item");
      m_supportedInstanceTypesHasBeenSet = !supportedInstanceTypesMember.IsNull();
      while (!supportedInstanceTypesMember.IsNull()) {
        m_supportedInstanceTypes.push_back(supportedInstanceTypesMember);
        supportedInstanceTypesMember = supportedInstanceTypesMember.NextNode("item");
      }

      m_supportedInstanceTypesHasBeenSet = true;
    }
    XmlNode unsupportedInstanceTypesNode = resultNode.FirstChild("unsupportedInstanceTypeSet");
    if (!unsupportedInstanceTypesNode.IsNull()) {
      XmlNode unsupportedInstanceTypesMember = unsupportedInstanceTypesNode.FirstChild("item");
      m_unsupportedInstanceTypesHasBeenSet = !unsupportedInstanceTypesMember.IsNull();
      while (!unsupportedInstanceTypesMember.IsNull()) {
        m_unsupportedInstanceTypes.push_back(unsupportedInstanceTypesMember);
        unsupportedInstanceTypesMember = unsupportedInstanceTypesMember.NextNode("item");
      }

      m_unsupportedInstanceTypesHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTypeSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                               const char* locationValue) const {
  if (m_supportedInstanceTypesHasBeenSet) {
    unsigned supportedInstanceTypesIdx = 1;
    for (auto& item : m_supportedInstanceTypes) {
      Aws::StringStream supportedInstanceTypesSs;
      supportedInstanceTypesSs << location << index << locationValue << ".SupportedInstanceTypeSet." << supportedInstanceTypesIdx++;
      item.OutputToStream(oStream, supportedInstanceTypesSs.str().c_str());
    }
  }

  if (m_unsupportedInstanceTypesHasBeenSet) {
    unsigned unsupportedInstanceTypesIdx = 1;
    for (auto& item : m_unsupportedInstanceTypes) {
      Aws::StringStream unsupportedInstanceTypesSs;
      unsupportedInstanceTypesSs << location << index << locationValue << ".UnsupportedInstanceTypeSet." << unsupportedInstanceTypesIdx++;
      item.OutputToStream(oStream, unsupportedInstanceTypesSs.str().c_str());
    }
  }
}

void InstanceTypeSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_supportedInstanceTypesHasBeenSet) {
    unsigned supportedInstanceTypesIdx = 1;
    for (auto& item : m_supportedInstanceTypes) {
      Aws::StringStream supportedInstanceTypesSs;
      supportedInstanceTypesSs << location << ".SupportedInstanceTypeSet." << supportedInstanceTypesIdx++;
      item.OutputToStream(oStream, supportedInstanceTypesSs.str().c_str());
    }
  }
  if (m_unsupportedInstanceTypesHasBeenSet) {
    unsigned unsupportedInstanceTypesIdx = 1;
    for (auto& item : m_unsupportedInstanceTypes) {
      Aws::StringStream unsupportedInstanceTypesSs;
      unsupportedInstanceTypesSs << location << ".UnsupportedInstanceTypeSet." << unsupportedInstanceTypesIdx++;
      item.OutputToStream(oStream, unsupportedInstanceTypesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
