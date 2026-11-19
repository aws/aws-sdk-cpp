/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/ContextProvider.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

ContextProvider::ContextProvider(const XmlNode& xmlNode) { *this = xmlNode; }

ContextProvider& ContextProvider::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode keyDefinitionListNode = resultNode.FirstChild("KeyDefinitionList");
    if (!keyDefinitionListNode.IsNull()) {
      XmlNode keyDefinitionListMember = keyDefinitionListNode.FirstChild("member");
      m_keyDefinitionListHasBeenSet = !keyDefinitionListMember.IsNull();
      while (!keyDefinitionListMember.IsNull()) {
        m_keyDefinitionList.push_back(keyDefinitionListMember);
        keyDefinitionListMember = keyDefinitionListMember.NextNode("member");
      }

      m_keyDefinitionListHasBeenSet = true;
    }
    XmlNode subjectSourceKeyNode = resultNode.FirstChild("SubjectSourceKey");
    if (!subjectSourceKeyNode.IsNull()) {
      m_subjectSourceKey = Aws::Utils::Xml::DecodeEscapedXmlText(subjectSourceKeyNode.GetText());
      m_subjectSourceKeyHasBeenSet = true;
    }
    XmlNode subjectTypeValueNode = resultNode.FirstChild("SubjectTypeValue");
    if (!subjectTypeValueNode.IsNull()) {
      m_subjectTypeValue = Aws::Utils::Xml::DecodeEscapedXmlText(subjectTypeValueNode.GetText());
      m_subjectTypeValueHasBeenSet = true;
    }
    XmlNode subjectTypeSourceKeyNode = resultNode.FirstChild("SubjectTypeSourceKey");
    if (!subjectTypeSourceKeyNode.IsNull()) {
      m_subjectTypeSourceKey = Aws::Utils::Xml::DecodeEscapedXmlText(subjectTypeSourceKeyNode.GetText());
      m_subjectTypeSourceKeyHasBeenSet = true;
    }
  }

  return *this;
}

void ContextProvider::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_keyDefinitionListHasBeenSet) {
    unsigned keyDefinitionListIdx = 1;
    for (auto& item : m_keyDefinitionList) {
      Aws::StringStream keyDefinitionListSs;
      keyDefinitionListSs << location << index << locationValue << ".KeyDefinitionList.member." << keyDefinitionListIdx++;
      item.OutputToStream(oStream, keyDefinitionListSs.str().c_str());
    }
  }

  if (m_subjectSourceKeyHasBeenSet) {
    oStream << location << index << locationValue << ".SubjectSourceKey=" << StringUtils::URLEncode(m_subjectSourceKey.c_str()) << "&";
  }

  if (m_subjectTypeValueHasBeenSet) {
    oStream << location << index << locationValue << ".SubjectTypeValue=" << StringUtils::URLEncode(m_subjectTypeValue.c_str()) << "&";
  }

  if (m_subjectTypeSourceKeyHasBeenSet) {
    oStream << location << index << locationValue << ".SubjectTypeSourceKey=" << StringUtils::URLEncode(m_subjectTypeSourceKey.c_str())
            << "&";
  }
}

void ContextProvider::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_keyDefinitionListHasBeenSet) {
    unsigned keyDefinitionListIdx = 1;
    for (auto& item : m_keyDefinitionList) {
      Aws::StringStream keyDefinitionListSs;
      keyDefinitionListSs << location << ".KeyDefinitionList.member." << keyDefinitionListIdx++;
      item.OutputToStream(oStream, keyDefinitionListSs.str().c_str());
    }
  }
  if (m_subjectSourceKeyHasBeenSet) {
    oStream << location << ".SubjectSourceKey=" << StringUtils::URLEncode(m_subjectSourceKey.c_str()) << "&";
  }
  if (m_subjectTypeValueHasBeenSet) {
    oStream << location << ".SubjectTypeValue=" << StringUtils::URLEncode(m_subjectTypeValue.c_str()) << "&";
  }
  if (m_subjectTypeSourceKeyHasBeenSet) {
    oStream << location << ".SubjectTypeSourceKey=" << StringUtils::URLEncode(m_subjectTypeSourceKey.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
