/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/UnsuccessfulSuppressionResponseObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

UnsuccessfulSuppressionResponseObject::UnsuccessfulSuppressionResponseObject(const XmlNode& xmlNode) { *this = xmlNode; }

UnsuccessfulSuppressionResponseObject& UnsuccessfulSuppressionResponseObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if (!instanceIdNode.IsNull()) {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode suppressAtNode = resultNode.FirstChild("suppressAt");
    if (!suppressAtNode.IsNull()) {
      m_suppressAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(suppressAtNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_suppressAtHasBeenSet = true;
    }
    XmlNode resumeAtNode = resultNode.FirstChild("resumeAt");
    if (!resumeAtNode.IsNull()) {
      m_resumeAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resumeAtNode.GetText()).c_str()).c_str(),
                            Aws::Utils::DateFormat::ISO_8601);
      m_resumeAtHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("reason");
    if (!reasonNode.IsNull()) {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
  }

  return *this;
}

void UnsuccessfulSuppressionResponseObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if (m_suppressAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".SuppressAt=" << StringUtils::URLEncode(m_suppressAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_resumeAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResumeAt=" << StringUtils::URLEncode(m_resumeAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_reasonHasBeenSet) {
    oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
}

void UnsuccessfulSuppressionResponseObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if (m_suppressAtHasBeenSet) {
    oStream << location << ".SuppressAt=" << StringUtils::URLEncode(m_suppressAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_resumeAtHasBeenSet) {
    oStream << location << ".ResumeAt=" << StringUtils::URLEncode(m_resumeAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_reasonHasBeenSet) {
    oStream << location << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
