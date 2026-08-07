/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamRouteOriginAuthorization.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamRouteOriginAuthorization::IpamRouteOriginAuthorization(const XmlNode& xmlNode) { *this = xmlNode; }

IpamRouteOriginAuthorization& IpamRouteOriginAuthorization::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode asnNode = resultNode.FirstChild("asn");
    if (!asnNode.IsNull()) {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("prefix");
    if (!prefixNode.IsNull()) {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode maxLengthNode = resultNode.FirstChild("maxLength");
    if (!maxLengthNode.IsNull()) {
      m_maxLength =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxLengthNode.GetText()).c_str()).c_str());
      m_maxLengthHasBeenSet = true;
    }
    XmlNode matchNode = resultNode.FirstChild("match");
    if (!matchNode.IsNull()) {
      m_match = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(matchNode.GetText()).c_str()).c_str());
      m_matchHasBeenSet = true;
    }
    XmlNode expirationNode = resultNode.FirstChild("expiration");
    if (!expirationNode.IsNull()) {
      m_expiration = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_expirationHasBeenSet = true;
    }
  }

  return *this;
}

void IpamRouteOriginAuthorization::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_asnHasBeenSet) {
    oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if (m_prefixHasBeenSet) {
    oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if (m_maxLengthHasBeenSet) {
    oStream << location << index << locationValue << ".MaxLength=" << m_maxLength << "&";
  }

  if (m_matchHasBeenSet) {
    oStream << location << index << locationValue << ".Match=" << std::boolalpha << m_match << "&";
  }

  if (m_expirationHasBeenSet) {
    oStream << location << index << locationValue
            << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void IpamRouteOriginAuthorization::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_asnHasBeenSet) {
    oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if (m_prefixHasBeenSet) {
    oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if (m_maxLengthHasBeenSet) {
    oStream << location << ".MaxLength=" << m_maxLength << "&";
  }
  if (m_matchHasBeenSet) {
    oStream << location << ".Match=" << std::boolalpha << m_match << "&";
  }
  if (m_expirationHasBeenSet) {
    oStream << location << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
