﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/NetworkInterfaceAttachmentChanges.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

NetworkInterfaceAttachmentChanges::NetworkInterfaceAttachmentChanges(const XmlNode& xmlNode) { *this = xmlNode; }

NetworkInterfaceAttachmentChanges& NetworkInterfaceAttachmentChanges::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode defaultEnaQueueCountNode = resultNode.FirstChild("DefaultEnaQueueCount");
    if (!defaultEnaQueueCountNode.IsNull()) {
      m_defaultEnaQueueCount = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultEnaQueueCountNode.GetText()).c_str()).c_str());
      m_defaultEnaQueueCountHasBeenSet = true;
    }
    XmlNode enaQueueCountNode = resultNode.FirstChild("EnaQueueCount");
    if (!enaQueueCountNode.IsNull()) {
      m_enaQueueCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaQueueCountNode.GetText()).c_str()).c_str());
      m_enaQueueCountHasBeenSet = true;
    }
    XmlNode attachmentIdNode = resultNode.FirstChild("attachmentId");
    if (!attachmentIdNode.IsNull()) {
      m_attachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(attachmentIdNode.GetText());
      m_attachmentIdHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if (!deleteOnTerminationNode.IsNull()) {
      m_deleteOnTermination = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfaceAttachmentChanges::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_defaultEnaQueueCountHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultEnaQueueCount=" << std::boolalpha << m_defaultEnaQueueCount << "&";
  }

  if (m_enaQueueCountHasBeenSet) {
    oStream << location << index << locationValue << ".EnaQueueCount=" << m_enaQueueCount << "&";
  }

  if (m_attachmentIdHasBeenSet) {
    oStream << location << index << locationValue << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }

  if (m_deleteOnTerminationHasBeenSet) {
    oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
}

void NetworkInterfaceAttachmentChanges::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_defaultEnaQueueCountHasBeenSet) {
    oStream << location << ".DefaultEnaQueueCount=" << std::boolalpha << m_defaultEnaQueueCount << "&";
  }
  if (m_enaQueueCountHasBeenSet) {
    oStream << location << ".EnaQueueCount=" << m_enaQueueCount << "&";
  }
  if (m_attachmentIdHasBeenSet) {
    oStream << location << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }
  if (m_deleteOnTerminationHasBeenSet) {
    oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
