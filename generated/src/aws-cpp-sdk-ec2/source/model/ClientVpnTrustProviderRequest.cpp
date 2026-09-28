/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ClientVpnTrustProviderRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ClientVpnTrustProviderRequest::ClientVpnTrustProviderRequest(const XmlNode& xmlNode) { *this = xmlNode; }

ClientVpnTrustProviderRequest& ClientVpnTrustProviderRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode trustProviderTypeNode = resultNode.FirstChild("TrustProviderType");
    if (!trustProviderTypeNode.IsNull()) {
      m_trustProviderType = ClientVpnDeviceTrustProviderTypeMapper::GetClientVpnDeviceTrustProviderTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trustProviderTypeNode.GetText()).c_str()));
      m_trustProviderTypeHasBeenSet = true;
    }
    XmlNode tenantIdNode = resultNode.FirstChild("TenantId");
    if (!tenantIdNode.IsNull()) {
      m_tenantId = Aws::Utils::Xml::DecodeEscapedXmlText(tenantIdNode.GetText());
      m_tenantIdHasBeenSet = true;
    }
    XmlNode publicSigningKeyUrlNode = resultNode.FirstChild("PublicSigningKeyUrl");
    if (!publicSigningKeyUrlNode.IsNull()) {
      m_publicSigningKeyUrl = Aws::Utils::Xml::DecodeEscapedXmlText(publicSigningKeyUrlNode.GetText());
      m_publicSigningKeyUrlHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnTrustProviderRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
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

void ClientVpnTrustProviderRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
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
