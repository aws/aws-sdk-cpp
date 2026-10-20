/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/SourceAuthenticationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {

SourceAuthenticationConfiguration::SourceAuthenticationConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

SourceAuthenticationConfiguration& SourceAuthenticationConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode secretManagerConfigNode = resultNode.FirstChild("SecretManagerConfig");
    if (!secretManagerConfigNode.IsNull()) {
      m_secretManagerConfig = secretManagerConfigNode;
      m_secretManagerConfigHasBeenSet = true;
    }
  }

  return *this;
}

void SourceAuthenticationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_secretManagerConfigHasBeenSet) {
    Aws::StringStream secretManagerConfigLocationAndMemberSs;
    secretManagerConfigLocationAndMemberSs << location << index << locationValue << ".SecretManagerConfig";
    m_secretManagerConfig.OutputToStream(oStream, secretManagerConfigLocationAndMemberSs.str().c_str());
  }
}

void SourceAuthenticationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_secretManagerConfigHasBeenSet) {
    Aws::String secretManagerConfigLocationAndMember(location);
    secretManagerConfigLocationAndMember += ".SecretManagerConfig";
    m_secretManagerConfig.OutputToStream(oStream, secretManagerConfigLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
