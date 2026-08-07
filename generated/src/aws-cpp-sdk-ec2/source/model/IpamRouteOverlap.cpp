/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamRouteOverlap.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamRouteOverlap::IpamRouteOverlap(const XmlNode& xmlNode) { *this = xmlNode; }

IpamRouteOverlap& IpamRouteOverlap::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode prefixNode = resultNode.FirstChild("prefix");
    if (!prefixNode.IsNull()) {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode asnNode = resultNode.FirstChild("asn");
    if (!asnNode.IsNull()) {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
    }
    XmlNode detectedAtNode = resultNode.FirstChild("detectedAt");
    if (!detectedAtNode.IsNull()) {
      m_detectedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(detectedAtNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_detectedAtHasBeenSet = true;
    }
  }

  return *this;
}

void IpamRouteOverlap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_prefixHasBeenSet) {
    oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if (m_asnHasBeenSet) {
    oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if (m_detectedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".DetectedAt=" << StringUtils::URLEncode(m_detectedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void IpamRouteOverlap::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_prefixHasBeenSet) {
    oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if (m_asnHasBeenSet) {
    oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if (m_detectedAtHasBeenSet) {
    oStream << location << ".DetectedAt=" << StringUtils::URLEncode(m_detectedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
