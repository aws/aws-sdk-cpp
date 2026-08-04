/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatusesResponseType.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatusesResponseType::ApplicationStatusesResponseType(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatusesResponseType& ApplicationStatusesResponseType::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instancesNode = resultNode.FirstChild("instanceSet");
    if (!instancesNode.IsNull()) {
      XmlNode instancesMember = instancesNode.FirstChild("item");
      m_instancesHasBeenSet = !instancesMember.IsNull();
      while (!instancesMember.IsNull()) {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("item");
      }

      m_instancesHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatusesResponseType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_instancesHasBeenSet) {
    unsigned instancesIdx = 1;
    for (auto& item : m_instances) {
      Aws::StringStream instancesSs;
      instancesSs << location << index << locationValue << ".InstanceSet." << instancesIdx++;
      item.OutputToStream(oStream, instancesSs.str().c_str());
    }
  }
}

void ApplicationStatusesResponseType::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instancesHasBeenSet) {
    unsigned instancesIdx = 1;
    for (auto& item : m_instances) {
      Aws::StringStream instancesSs;
      instancesSs << location << ".InstanceSet." << instancesIdx++;
      item.OutputToStream(oStream, instancesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
