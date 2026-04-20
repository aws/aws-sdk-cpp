/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayClientVpnAttachment.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayClientVpnAttachment::TransitGatewayClientVpnAttachment(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayClientVpnAttachment& TransitGatewayClientVpnAttachment::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if (!transitGatewayAttachmentIdNode.IsNull()) {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if (!transitGatewayIdNode.IsNull()) {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if (!clientVpnEndpointIdNode.IsNull()) {
      m_clientVpnEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(clientVpnEndpointIdNode.GetText());
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode clientVpnOwnerIdNode = resultNode.FirstChild("clientVpnOwnerId");
    if (!clientVpnOwnerIdNode.IsNull()) {
      m_clientVpnOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(clientVpnOwnerIdNode.GetText());
      m_clientVpnOwnerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = TransitGatewayAttachmentStatusTypeMapper::GetTransitGatewayAttachmentStatusTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if (!creationTimeNode.IsNull()) {
      m_creationTime = Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText());
      m_creationTimeHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayClientVpnAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_clientVpnEndpointIdHasBeenSet) {
    oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str())
            << "&";
  }

  if (m_clientVpnOwnerIdHasBeenSet) {
    oStream << location << index << locationValue << ".ClientVpnOwnerId=" << StringUtils::URLEncode(m_clientVpnOwnerId.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(TransitGatewayAttachmentStatusTypeMapper::GetNameForTransitGatewayAttachmentStatusType(m_state))
            << "&";
  }

  if (m_creationTimeHasBeenSet) {
    oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
}

void TransitGatewayClientVpnAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if (m_clientVpnEndpointIdHasBeenSet) {
    oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if (m_clientVpnOwnerIdHasBeenSet) {
    oStream << location << ".ClientVpnOwnerId=" << StringUtils::URLEncode(m_clientVpnOwnerId.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(TransitGatewayAttachmentStatusTypeMapper::GetNameForTransitGatewayAttachmentStatusType(m_state))
            << "&";
  }
  if (m_creationTimeHasBeenSet) {
    oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
