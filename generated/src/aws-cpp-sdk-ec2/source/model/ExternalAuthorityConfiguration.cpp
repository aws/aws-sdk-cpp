/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ExternalAuthorityConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ExternalAuthorityConfiguration::ExternalAuthorityConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

ExternalAuthorityConfiguration& ExternalAuthorityConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if (!typeNode.IsNull()) {
      m_type = IpamScopeExternalAuthorityTypeMapper::GetIpamScopeExternalAuthorityTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode externalResourceIdentifierNode = resultNode.FirstChild("ExternalResourceIdentifier");
    if (!externalResourceIdentifierNode.IsNull()) {
      m_externalResourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(externalResourceIdentifierNode.GetText());
      m_externalResourceIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void ExternalAuthorityConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                    const char* locationValue) const {
  if (m_typeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Type=" << StringUtils::URLEncode(IpamScopeExternalAuthorityTypeMapper::GetNameForIpamScopeExternalAuthorityType(m_type))
            << "&";
  }

  if (m_externalResourceIdentifierHasBeenSet) {
    oStream << location << index << locationValue
            << ".ExternalResourceIdentifier=" << StringUtils::URLEncode(m_externalResourceIdentifier.c_str()) << "&";
  }
}

void ExternalAuthorityConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_typeHasBeenSet) {
    oStream << location
            << ".Type=" << StringUtils::URLEncode(IpamScopeExternalAuthorityTypeMapper::GetNameForIpamScopeExternalAuthorityType(m_type))
            << "&";
  }
  if (m_externalResourceIdentifierHasBeenSet) {
    oStream << location << ".ExternalResourceIdentifier=" << StringUtils::URLEncode(m_externalResourceIdentifier.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
