/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/SourceTlsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {

SourceTlsConfiguration::SourceTlsConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

SourceTlsConfiguration& SourceTlsConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceTlsModeNode = resultNode.FirstChild("SourceTlsMode");
    if (!sourceTlsModeNode.IsNull()) {
      m_sourceTlsMode =
          TlsModeMapper::GetTlsModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTlsModeNode.GetText()).c_str()));
      m_sourceTlsModeHasBeenSet = true;
    }
    XmlNode sourceTlsCertificateNode = resultNode.FirstChild("SourceTlsCertificate");
    if (!sourceTlsCertificateNode.IsNull()) {
      m_sourceTlsCertificate = Aws::Utils::Xml::DecodeEscapedXmlText(sourceTlsCertificateNode.GetText());
      m_sourceTlsCertificateHasBeenSet = true;
    }
  }

  return *this;
}

void SourceTlsConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_sourceTlsModeHasBeenSet) {
    oStream << location << index << locationValue
            << ".SourceTlsMode=" << StringUtils::URLEncode(TlsModeMapper::GetNameForTlsMode(m_sourceTlsMode)) << "&";
  }

  if (m_sourceTlsCertificateHasBeenSet) {
    oStream << location << index << locationValue << ".SourceTlsCertificate=" << StringUtils::URLEncode(m_sourceTlsCertificate.c_str())
            << "&";
  }
}

void SourceTlsConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceTlsModeHasBeenSet) {
    oStream << location << ".SourceTlsMode=" << StringUtils::URLEncode(TlsModeMapper::GetNameForTlsMode(m_sourceTlsMode)) << "&";
  }
  if (m_sourceTlsCertificateHasBeenSet) {
    oStream << location << ".SourceTlsCertificate=" << StringUtils::URLEncode(m_sourceTlsCertificate.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
