/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPrefixListResolverVersionEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPrefixListResolverVersionEntry::IpamPrefixListResolverVersionEntry(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPrefixListResolverVersionEntry& IpamPrefixListResolverVersionEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPrefixListResolverVersionEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
}

void IpamPrefixListResolverVersionEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
