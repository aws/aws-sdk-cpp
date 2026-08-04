/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatusReason.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatusReason::ApplicationStatusReason(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatusReason& ApplicationStatusReason::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode codeNode = resultNode.FirstChild("code");
    if (!codeNode.IsNull()) {
      m_code = Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText());
      m_codeHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("statusCode");
    if (!statusCodeNode.IsNull()) {
      m_statusCode =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText()).c_str()).c_str());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if (!protocolNode.IsNull()) {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatusReason::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_codeHasBeenSet) {
    oStream << location << index << locationValue << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }

  if (m_statusCodeHasBeenSet) {
    oStream << location << index << locationValue << ".StatusCode=" << m_statusCode << "&";
  }

  if (m_protocolHasBeenSet) {
    oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
}

void ApplicationStatusReason::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_codeHasBeenSet) {
    oStream << location << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }
  if (m_statusCodeHasBeenSet) {
    oStream << location << ".StatusCode=" << m_statusCode << "&";
  }
  if (m_protocolHasBeenSet) {
    oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
