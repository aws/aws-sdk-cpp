/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/Integration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {

Integration::Integration(const XmlNode& xmlNode) { *this = xmlNode; }

Integration& Integration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode integrationTypeNode = resultNode.FirstChild("IntegrationType");
    if (!integrationTypeNode.IsNull()) {
      m_integrationType = IntegrationTypeMapper::GetIntegrationTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(integrationTypeNode.GetText()).c_str()));
      m_integrationTypeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = IntegrationStatusMapper::GetIntegrationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void Integration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_integrationTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".IntegrationType=" << StringUtils::URLEncode(IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType)) << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(IntegrationStatusMapper::GetNameForIntegrationStatus(m_status)) << "&";
  }
}

void Integration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_integrationTypeHasBeenSet) {
    oStream << location
            << ".IntegrationType=" << StringUtils::URLEncode(IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType)) << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(IntegrationStatusMapper::GetNameForIntegrationStatus(m_status)) << "&";
  }
}

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
