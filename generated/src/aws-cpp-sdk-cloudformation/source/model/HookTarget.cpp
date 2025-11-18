/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookTarget.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

HookTarget::HookTarget(const XmlNode& xmlNode) { *this = xmlNode; }

HookTarget& HookTarget::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode targetTypeNode = resultNode.FirstChild("TargetType");
    if (!targetTypeNode.IsNull()) {
      m_targetType = HookTargetTypeMapper::GetHookTargetTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetTypeNode.GetText()).c_str()));
      m_targetTypeHasBeenSet = true;
    }
    XmlNode targetTypeNameNode = resultNode.FirstChild("TargetTypeName");
    if (!targetTypeNameNode.IsNull()) {
      m_targetTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(targetTypeNameNode.GetText());
      m_targetTypeNameHasBeenSet = true;
    }
    XmlNode targetIdNode = resultNode.FirstChild("TargetId");
    if (!targetIdNode.IsNull()) {
      m_targetId = Aws::Utils::Xml::DecodeEscapedXmlText(targetIdNode.GetText());
      m_targetIdHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if (!actionNode.IsNull()) {
      m_action = HookTargetActionMapper::GetHookTargetActionForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()));
      m_actionHasBeenSet = true;
    }
  }

  return *this;
}

void HookTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_targetTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".TargetType=" << StringUtils::URLEncode(HookTargetTypeMapper::GetNameForHookTargetType(m_targetType)) << "&";
  }

  if (m_targetTypeNameHasBeenSet) {
    oStream << location << index << locationValue << ".TargetTypeName=" << StringUtils::URLEncode(m_targetTypeName.c_str()) << "&";
  }

  if (m_targetIdHasBeenSet) {
    oStream << location << index << locationValue << ".TargetId=" << StringUtils::URLEncode(m_targetId.c_str()) << "&";
  }

  if (m_actionHasBeenSet) {
    oStream << location << index << locationValue
            << ".Action=" << StringUtils::URLEncode(HookTargetActionMapper::GetNameForHookTargetAction(m_action)) << "&";
  }
}

void HookTarget::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_targetTypeHasBeenSet) {
    oStream << location << ".TargetType=" << StringUtils::URLEncode(HookTargetTypeMapper::GetNameForHookTargetType(m_targetType)) << "&";
  }
  if (m_targetTypeNameHasBeenSet) {
    oStream << location << ".TargetTypeName=" << StringUtils::URLEncode(m_targetTypeName.c_str()) << "&";
  }
  if (m_targetIdHasBeenSet) {
    oStream << location << ".TargetId=" << StringUtils::URLEncode(m_targetId.c_str()) << "&";
  }
  if (m_actionHasBeenSet) {
    oStream << location << ".Action=" << StringUtils::URLEncode(HookTargetActionMapper::GetNameForHookTargetAction(m_action)) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
