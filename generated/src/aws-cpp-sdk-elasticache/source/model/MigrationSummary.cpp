/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/MigrationSummary.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {

MigrationSummary::MigrationSummary(const XmlNode& xmlNode) { *this = xmlNode; }

MigrationSummary& MigrationSummary::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode migrationEndpointNode = resultNode.FirstChild("MigrationEndpoint");
    if (!migrationEndpointNode.IsNull()) {
      m_migrationEndpoint = migrationEndpointNode;
      m_migrationEndpointHasBeenSet = true;
    }
    XmlNode cutoverModeNode = resultNode.FirstChild("CutoverMode");
    if (!cutoverModeNode.IsNull()) {
      m_cutoverMode = Aws::Utils::Xml::DecodeEscapedXmlText(cutoverModeNode.GetText());
      m_cutoverModeHasBeenSet = true;
    }
  }

  return *this;
}

void MigrationSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if (m_migrationEndpointHasBeenSet) {
    Aws::StringStream migrationEndpointLocationAndMemberSs;
    migrationEndpointLocationAndMemberSs << location << index << locationValue << ".MigrationEndpoint";
    m_migrationEndpoint.OutputToStream(oStream, migrationEndpointLocationAndMemberSs.str().c_str());
  }

  if (m_cutoverModeHasBeenSet) {
    oStream << location << index << locationValue << ".CutoverMode=" << StringUtils::URLEncode(m_cutoverMode.c_str()) << "&";
  }
}

void MigrationSummary::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if (m_migrationEndpointHasBeenSet) {
    Aws::String migrationEndpointLocationAndMember(location);
    migrationEndpointLocationAndMember += ".MigrationEndpoint";
    m_migrationEndpoint.OutputToStream(oStream, migrationEndpointLocationAndMember.c_str());
  }
  if (m_cutoverModeHasBeenSet) {
    oStream << location << ".CutoverMode=" << StringUtils::URLEncode(m_cutoverMode.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
