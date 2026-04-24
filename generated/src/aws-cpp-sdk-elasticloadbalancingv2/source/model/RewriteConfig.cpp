/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/RewriteConfig.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {

RewriteConfig::RewriteConfig(const XmlNode& xmlNode) { *this = xmlNode; }

RewriteConfig& RewriteConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode regexNode = resultNode.FirstChild("Regex");
    if (!regexNode.IsNull()) {
      m_regex = Aws::Utils::Xml::DecodeEscapedXmlText(regexNode.GetText());
      m_regexHasBeenSet = true;
    }
    XmlNode replaceNode = resultNode.FirstChild("Replace");
    if (!replaceNode.IsNull()) {
      m_replace = Aws::Utils::Xml::DecodeEscapedXmlText(replaceNode.GetText());
      m_replaceHasBeenSet = true;
    }
  }

  return *this;
}

void RewriteConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_regexHasBeenSet) {
    oStream << location << index << locationValue << ".Regex=" << StringUtils::URLEncode(m_regex.c_str()) << "&";
  }

  if (m_replaceHasBeenSet) {
    oStream << location << index << locationValue << ".Replace=" << StringUtils::URLEncode(m_replace.c_str()) << "&";
  }
}

void RewriteConfig::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_regexHasBeenSet) {
    oStream << location << ".Regex=" << StringUtils::URLEncode(m_regex.c_str()) << "&";
  }
  if (m_replaceHasBeenSet) {
    oStream << location << ".Replace=" << StringUtils::URLEncode(m_replace.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
