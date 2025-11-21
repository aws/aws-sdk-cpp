/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RetentionTriggers.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

RetentionTriggers::RetentionTriggers(const XmlNode& xmlNode) { *this = xmlNode; }

RetentionTriggers& RetentionTriggers::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode terminateHookAbandonNode = resultNode.FirstChild("TerminateHookAbandon");
    if (!terminateHookAbandonNode.IsNull()) {
      m_terminateHookAbandon = RetentionActionMapper::GetRetentionActionForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(terminateHookAbandonNode.GetText()).c_str()));
      m_terminateHookAbandonHasBeenSet = true;
    }
  }

  return *this;
}

void RetentionTriggers::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_terminateHookAbandonHasBeenSet) {
    oStream << location << index << locationValue
            << ".TerminateHookAbandon=" << StringUtils::URLEncode(RetentionActionMapper::GetNameForRetentionAction(m_terminateHookAbandon))
            << "&";
  }
}

void RetentionTriggers::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_terminateHookAbandonHasBeenSet) {
    oStream << location
            << ".TerminateHookAbandon=" << StringUtils::URLEncode(RetentionActionMapper::GetNameForRetentionAction(m_terminateHookAbandon))
            << "&";
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
