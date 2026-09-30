/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ClientVpnTrustProvider.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ClientVpnTrustProvider::ClientVpnTrustProvider(const XmlNode& xmlNode) { *this = xmlNode; }

ClientVpnTrustProvider& ClientVpnTrustProvider::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode trustProviderTypeNode = resultNode.FirstChild("trustProviderType");
    if (!trustProviderTypeNode.IsNull()) {
      m_trustProviderType = ClientVpnDeviceTrustProviderTypeMapper::GetClientVpnDeviceTrustProviderTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trustProviderTypeNode.GetText()).c_str()));
      m_trustProviderTypeHasBeenSet = true;
    }
    XmlNode tenantIdNode = resultNode.FirstChild("tenantId");
    if (!tenantIdNode.IsNull()) {
      m_tenantId = Aws::Utils::Xml::DecodeEscapedXmlText(tenantIdNode.GetText());
      m_tenantIdHasBeenSet = true;
    }
    XmlNode publicSigningKeyUrlNode = resultNode.FirstChild("publicSigningKeyUrl");
    if (!publicSigningKeyUrlNode.IsNull()) {
      m_publicSigningKeyUrl = Aws::Utils::Xml::DecodeEscapedXmlText(publicSigningKeyUrlNode.GetText());
      m_publicSigningKeyUrlHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnTrustProvider::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_trustProviderTypeHasBeenSet) {
    oStream << location << index << locationValue << ".TrustProviderType="
            << StringUtils::URLEncode(
                   ClientVpnDeviceTrustProviderTypeMapper::GetNameForClientVpnDeviceTrustProviderType(m_trustProviderType))
            << "&";
  }

  if (m_tenantIdHasBeenSet) {
    oStream << location << index << locationValue << ".TenantId=" << StringUtils::URLEncode(m_tenantId.c_str()) << "&";
  }

  if (m_publicSigningKeyUrlHasBeenSet) {
    oStream << location << index << locationValue << ".PublicSigningKeyUrl=" << StringUtils::URLEncode(m_publicSigningKeyUrl.c_str())
            << "&";
  }
}

void ClientVpnTrustProvider::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_trustProviderTypeHasBeenSet) {
    oStream << location << ".TrustProviderType="
            << StringUtils::URLEncode(
                   ClientVpnDeviceTrustProviderTypeMapper::GetNameForClientVpnDeviceTrustProviderType(m_trustProviderType))
            << "&";
  }
  if (m_tenantIdHasBeenSet) {
    oStream << location << ".TenantId=" << StringUtils::URLEncode(m_tenantId.c_str()) << "&";
  }
  if (m_publicSigningKeyUrlHasBeenSet) {
    oStream << location << ".PublicSigningKeyUrl=" << StringUtils::URLEncode(m_publicSigningKeyUrl.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
