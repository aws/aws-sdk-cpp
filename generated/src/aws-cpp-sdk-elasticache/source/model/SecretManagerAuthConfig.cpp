/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticache/model/SecretManagerAuthConfig.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {

SecretManagerAuthConfig::SecretManagerAuthConfig(const XmlNode& xmlNode) { *this = xmlNode; }

SecretManagerAuthConfig& SecretManagerAuthConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode secretArnNode = resultNode.FirstChild("SecretArn");
    if (!secretArnNode.IsNull()) {
      m_secretArn = Aws::Utils::Xml::DecodeEscapedXmlText(secretArnNode.GetText());
      m_secretArnHasBeenSet = true;
    }
  }

  return *this;
}

void SecretManagerAuthConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_secretArnHasBeenSet) {
    oStream << location << index << locationValue << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }
}

void SecretManagerAuthConfig::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_secretArnHasBeenSet) {
    oStream << location << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
