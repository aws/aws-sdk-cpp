/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DefaultConnectionTrackingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DefaultConnectionTrackingConfiguration::DefaultConnectionTrackingConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

DefaultConnectionTrackingConfiguration& DefaultConnectionTrackingConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode defaultTcpEstablishedTimeoutNode = resultNode.FirstChild("defaultTcpEstablishedTimeout");
    if (!defaultTcpEstablishedTimeoutNode.IsNull()) {
      m_defaultTcpEstablishedTimeout = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultTcpEstablishedTimeoutNode.GetText()).c_str()).c_str());
      m_defaultTcpEstablishedTimeoutHasBeenSet = true;
    }
    XmlNode defaultUdpTimeoutNode = resultNode.FirstChild("defaultUdpTimeout");
    if (!defaultUdpTimeoutNode.IsNull()) {
      m_defaultUdpTimeout = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultUdpTimeoutNode.GetText()).c_str()).c_str());
      m_defaultUdpTimeoutHasBeenSet = true;
    }
    XmlNode defaultUdpStreamTimeoutNode = resultNode.FirstChild("defaultUdpStreamTimeout");
    if (!defaultUdpStreamTimeoutNode.IsNull()) {
      m_defaultUdpStreamTimeout = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultUdpStreamTimeoutNode.GetText()).c_str()).c_str());
      m_defaultUdpStreamTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void DefaultConnectionTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                            const char* locationValue) const {
  if (m_defaultTcpEstablishedTimeoutHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultTcpEstablishedTimeout=" << m_defaultTcpEstablishedTimeout << "&";
  }

  if (m_defaultUdpTimeoutHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultUdpTimeout=" << m_defaultUdpTimeout << "&";
  }

  if (m_defaultUdpStreamTimeoutHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultUdpStreamTimeout=" << m_defaultUdpStreamTimeout << "&";
  }
}

void DefaultConnectionTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_defaultTcpEstablishedTimeoutHasBeenSet) {
    oStream << location << ".DefaultTcpEstablishedTimeout=" << m_defaultTcpEstablishedTimeout << "&";
  }
  if (m_defaultUdpTimeoutHasBeenSet) {
    oStream << location << ".DefaultUdpTimeout=" << m_defaultUdpTimeout << "&";
  }
  if (m_defaultUdpStreamTimeoutHasBeenSet) {
    oStream << location << ".DefaultUdpStreamTimeout=" << m_defaultUdpStreamTimeout << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
