/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamInternetRegistryAssociationAsn.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamInternetRegistryAssociationAsn::IpamInternetRegistryAssociationAsn(const XmlNode& xmlNode) { *this = xmlNode; }

IpamInternetRegistryAssociationAsn& IpamInternetRegistryAssociationAsn::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode asnNode = resultNode.FirstChild("asn");
    if (!asnNode.IsNull()) {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
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

void IpamInternetRegistryAssociationAsn::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_asnHasBeenSet) {
    oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if (m_lastObservedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".LastObservedAt=" << StringUtils::URLEncode(m_lastObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void IpamInternetRegistryAssociationAsn::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_asnHasBeenSet) {
    oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if (m_lastObservedAtHasBeenSet) {
    oStream << location
            << ".LastObservedAt=" << StringUtils::URLEncode(m_lastObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
