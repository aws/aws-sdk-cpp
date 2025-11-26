/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/NatGatewayAttachedAppliance.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

NatGatewayAttachedAppliance::NatGatewayAttachedAppliance(const XmlNode& xmlNode) { *this = xmlNode; }

NatGatewayAttachedAppliance& NatGatewayAttachedAppliance::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode typeNode = resultNode.FirstChild("type");
    if (!typeNode.IsNull()) {
      m_type = NatGatewayApplianceTypeMapper::GetNatGatewayApplianceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode applianceArnNode = resultNode.FirstChild("applianceArn");
    if (!applianceArnNode.IsNull()) {
      m_applianceArn = Aws::Utils::Xml::DecodeEscapedXmlText(applianceArnNode.GetText());
      m_applianceArnHasBeenSet = true;
    }
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if (!vpcEndpointIdNode.IsNull()) {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode attachmentStateNode = resultNode.FirstChild("attachmentState");
    if (!attachmentStateNode.IsNull()) {
      m_attachmentState = NatGatewayApplianceStateMapper::GetNatGatewayApplianceStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attachmentStateNode.GetText()).c_str()));
      m_attachmentStateHasBeenSet = true;
    }
    XmlNode modificationStateNode = resultNode.FirstChild("modificationState");
    if (!modificationStateNode.IsNull()) {
      m_modificationState = NatGatewayApplianceModifyStateMapper::GetNatGatewayApplianceModifyStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modificationStateNode.GetText()).c_str()));
      m_modificationStateHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("failureCode");
    if (!failureCodeNode.IsNull()) {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureMessageNode = resultNode.FirstChild("failureMessage");
    if (!failureMessageNode.IsNull()) {
      m_failureMessage = Aws::Utils::Xml::DecodeEscapedXmlText(failureMessageNode.GetText());
      m_failureMessageHasBeenSet = true;
    }
  }

  return *this;
}

void NatGatewayAttachedAppliance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_typeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Type=" << StringUtils::URLEncode(NatGatewayApplianceTypeMapper::GetNameForNatGatewayApplianceType(m_type)) << "&";
  }

  if (m_applianceArnHasBeenSet) {
    oStream << location << index << locationValue << ".ApplianceArn=" << StringUtils::URLEncode(m_applianceArn.c_str()) << "&";
  }

  if (m_vpcEndpointIdHasBeenSet) {
    oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if (m_attachmentStateHasBeenSet) {
    oStream << location << index << locationValue << ".AttachmentState="
            << StringUtils::URLEncode(NatGatewayApplianceStateMapper::GetNameForNatGatewayApplianceState(m_attachmentState)) << "&";
  }

  if (m_modificationStateHasBeenSet) {
    oStream << location << index << locationValue << ".ModificationState="
            << StringUtils::URLEncode(NatGatewayApplianceModifyStateMapper::GetNameForNatGatewayApplianceModifyState(m_modificationState))
            << "&";
  }

  if (m_failureCodeHasBeenSet) {
    oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if (m_failureMessageHasBeenSet) {
    oStream << location << index << locationValue << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }
}

void NatGatewayAttachedAppliance::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_typeHasBeenSet) {
    oStream << location << ".Type=" << StringUtils::URLEncode(NatGatewayApplianceTypeMapper::GetNameForNatGatewayApplianceType(m_type))
            << "&";
  }
  if (m_applianceArnHasBeenSet) {
    oStream << location << ".ApplianceArn=" << StringUtils::URLEncode(m_applianceArn.c_str()) << "&";
  }
  if (m_vpcEndpointIdHasBeenSet) {
    oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
  if (m_attachmentStateHasBeenSet) {
    oStream << location << ".AttachmentState="
            << StringUtils::URLEncode(NatGatewayApplianceStateMapper::GetNameForNatGatewayApplianceState(m_attachmentState)) << "&";
  }
  if (m_modificationStateHasBeenSet) {
    oStream << location << ".ModificationState="
            << StringUtils::URLEncode(NatGatewayApplianceModifyStateMapper::GetNameForNatGatewayApplianceModifyState(m_modificationState))
            << "&";
  }
  if (m_failureCodeHasBeenSet) {
    oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if (m_failureMessageHasBeenSet) {
    oStream << location << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
