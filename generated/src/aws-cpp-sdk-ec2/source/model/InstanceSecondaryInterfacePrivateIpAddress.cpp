/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceSecondaryInterfacePrivateIpAddress.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceSecondaryInterfacePrivateIpAddress::InstanceSecondaryInterfacePrivateIpAddress(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceSecondaryInterfacePrivateIpAddress& InstanceSecondaryInterfacePrivateIpAddress::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if (!privateIpAddressNode.IsNull()) {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceSecondaryInterfacePrivateIpAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                                const char* locationValue) const {
  if (m_privateIpAddressHasBeenSet) {
    oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

void InstanceSecondaryInterfacePrivateIpAddress::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_privateIpAddressHasBeenSet) {
    oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
