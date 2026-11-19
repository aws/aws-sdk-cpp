/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/SAMLKeyHashEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

SAMLKeyHashEntry::SAMLKeyHashEntry(const XmlNode& xmlNode) { *this = xmlNode; }

SAMLKeyHashEntry& SAMLKeyHashEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode issuerURLNode = resultNode.FirstChild("IssuerURL");
    if (!issuerURLNode.IsNull()) {
      m_issuerURL = Aws::Utils::Xml::DecodeEscapedXmlText(issuerURLNode.GetText());
      m_issuerURLHasBeenSet = true;
    }
    XmlNode keyHashesNode = resultNode.FirstChild("KeyHashes");
    if (!keyHashesNode.IsNull()) {
      XmlNode keyHashesMember = keyHashesNode.FirstChild("member");
      m_keyHashesHasBeenSet = !keyHashesMember.IsNull();
      while (!keyHashesMember.IsNull()) {
        m_keyHashes.push_back(keyHashesMember.GetText());
        keyHashesMember = keyHashesMember.NextNode("member");
      }

      m_keyHashesHasBeenSet = true;
    }
  }

  return *this;
}

void SAMLKeyHashEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_issuerURLHasBeenSet) {
    oStream << location << index << locationValue << ".IssuerURL=" << StringUtils::URLEncode(m_issuerURL.c_str()) << "&";
  }

  if (m_keyHashesHasBeenSet) {
    unsigned keyHashesIdx = 1;
    for (auto& item : m_keyHashes) {
      oStream << location << index << locationValue << ".KeyHashes.member." << keyHashesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void SAMLKeyHashEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_issuerURLHasBeenSet) {
    oStream << location << ".IssuerURL=" << StringUtils::URLEncode(m_issuerURL.c_str()) << "&";
  }
  if (m_keyHashesHasBeenSet) {
    unsigned keyHashesIdx = 1;
    for (auto& item : m_keyHashes) {
      oStream << location << ".KeyHashes.member." << keyHashesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
