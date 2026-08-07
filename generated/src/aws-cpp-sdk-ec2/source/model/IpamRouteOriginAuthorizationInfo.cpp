/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamRouteOriginAuthorizationInfo.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamRouteOriginAuthorizationInfo::IpamRouteOriginAuthorizationInfo(const XmlNode& xmlNode) { *this = xmlNode; }

IpamRouteOriginAuthorizationInfo& IpamRouteOriginAuthorizationInfo::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode asnNode = resultNode.FirstChild("asn");
    if (!asnNode.IsNull()) {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
    }
    XmlNode maxLengthNode = resultNode.FirstChild("maxLength");
    if (!maxLengthNode.IsNull()) {
      m_maxLength =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxLengthNode.GetText()).c_str()).c_str());
      m_maxLengthHasBeenSet = true;
    }
  }

  return *this;
}

void IpamRouteOriginAuthorizationInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                      const char* locationValue) const {
  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if (m_asnHasBeenSet) {
    oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if (m_maxLengthHasBeenSet) {
    oStream << location << index << locationValue << ".MaxLength=" << m_maxLength << "&";
  }
}

void IpamRouteOriginAuthorizationInfo::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if (m_asnHasBeenSet) {
    oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if (m_maxLengthHasBeenSet) {
    oStream << location << ".MaxLength=" << m_maxLength << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
