/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamInternetRegistryAssociationCidr.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamInternetRegistryAssociationCidr::IpamInternetRegistryAssociationCidr(const XmlNode& xmlNode) { *this = xmlNode; }

IpamInternetRegistryAssociationCidr& IpamInternetRegistryAssociationCidr::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode lastObservedAtNode = resultNode.FirstChild("lastObservedAt");
    if (!lastObservedAtNode.IsNull()) {
      m_lastObservedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastObservedAtNode.GetText()).c_str()).c_str(),
                                  Aws::Utils::DateFormat::ISO_8601);
      m_lastObservedAtHasBeenSet = true;
    }
  }

  return *this;
}

void IpamInternetRegistryAssociationCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                         const char* locationValue) const {
  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if (m_lastObservedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".LastObservedAt=" << StringUtils::URLEncode(m_lastObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void IpamInternetRegistryAssociationCidr::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if (m_lastObservedAtHasBeenSet) {
    oStream << location
            << ".LastObservedAt=" << StringUtils::URLEncode(m_lastObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
