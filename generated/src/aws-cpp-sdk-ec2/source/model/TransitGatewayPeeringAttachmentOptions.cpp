/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayPeeringAttachmentOptions::TransitGatewayPeeringAttachmentOptions(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayPeeringAttachmentOptions& TransitGatewayPeeringAttachmentOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dynamicRoutingNode = resultNode.FirstChild("dynamicRouting");
    if (!dynamicRoutingNode.IsNull()) {
      m_dynamicRouting = DynamicRoutingValueMapper::GetDynamicRoutingValueForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dynamicRoutingNode.GetText()).c_str()));
      m_dynamicRoutingHasBeenSet = true;
    }
    XmlNode requesterAllowMultipathResilienceNode = resultNode.FirstChild("requesterAllowMultipathResilience");
    if (!requesterAllowMultipathResilienceNode.IsNull()) {
      m_requesterAllowMultipathResilience = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requesterAllowMultipathResilienceNode.GetText()).c_str()).c_str());
      m_requesterAllowMultipathResilienceHasBeenSet = true;
    }
    XmlNode requesterMultipathResilienceModeNode = resultNode.FirstChild("requesterMultipathResilienceMode");
    if (!requesterMultipathResilienceModeNode.IsNull()) {
      m_requesterMultipathResilienceMode =
          TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::GetTransitGatewayPeeringAttachmentMultipathResilienceModeForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requesterMultipathResilienceModeNode.GetText()).c_str()));
      m_requesterMultipathResilienceModeHasBeenSet = true;
    }
    XmlNode accepterAllowMultipathResilienceNode = resultNode.FirstChild("accepterAllowMultipathResilience");
    if (!accepterAllowMultipathResilienceNode.IsNull()) {
      m_accepterAllowMultipathResilience = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accepterAllowMultipathResilienceNode.GetText()).c_str()).c_str());
      m_accepterAllowMultipathResilienceHasBeenSet = true;
    }
    XmlNode accepterMultipathResilienceModeNode = resultNode.FirstChild("accepterMultipathResilienceMode");
    if (!accepterMultipathResilienceModeNode.IsNull()) {
      m_accepterMultipathResilienceMode =
          TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::GetTransitGatewayPeeringAttachmentMultipathResilienceModeForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accepterMultipathResilienceModeNode.GetText()).c_str()));
      m_accepterMultipathResilienceModeHasBeenSet = true;
    }
    XmlNode multipathResilienceStatusNode = resultNode.FirstChild("multipathResilienceStatus");
    if (!multipathResilienceStatusNode.IsNull()) {
      m_multipathResilienceStatus = TransitGatewayPeeringAttachmentMultipathResilienceStatusMapper::
          GetTransitGatewayPeeringAttachmentMultipathResilienceStatusForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multipathResilienceStatusNode.GetText()).c_str()));
      m_multipathResilienceStatusHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPeeringAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                            const char* locationValue) const {
  if (m_dynamicRoutingHasBeenSet) {
    oStream << location << index << locationValue
            << ".DynamicRouting=" << StringUtils::URLEncode(DynamicRoutingValueMapper::GetNameForDynamicRoutingValue(m_dynamicRouting))
            << "&";
  }

  if (m_requesterAllowMultipathResilienceHasBeenSet) {
    oStream << location << index << locationValue << ".RequesterAllowMultipathResilience=" << std::boolalpha
            << m_requesterAllowMultipathResilience << "&";
  }

  if (m_requesterMultipathResilienceModeHasBeenSet) {
    oStream << location << index << locationValue << ".RequesterMultipathResilienceMode="
            << StringUtils::URLEncode(
                   TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::
                       GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(m_requesterMultipathResilienceMode))
            << "&";
  }

  if (m_accepterAllowMultipathResilienceHasBeenSet) {
    oStream << location << index << locationValue << ".AccepterAllowMultipathResilience=" << std::boolalpha
            << m_accepterAllowMultipathResilience << "&";
  }

  if (m_accepterMultipathResilienceModeHasBeenSet) {
    oStream << location << index << locationValue << ".AccepterMultipathResilienceMode="
            << StringUtils::URLEncode(
                   TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::
                       GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(m_accepterMultipathResilienceMode))
            << "&";
  }

  if (m_multipathResilienceStatusHasBeenSet) {
    oStream << location << index << locationValue << ".MultipathResilienceStatus="
            << StringUtils::URLEncode(TransitGatewayPeeringAttachmentMultipathResilienceStatusMapper::
                                          GetNameForTransitGatewayPeeringAttachmentMultipathResilienceStatus(m_multipathResilienceStatus))
            << "&";
  }
}

void TransitGatewayPeeringAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dynamicRoutingHasBeenSet) {
    oStream << location
            << ".DynamicRouting=" << StringUtils::URLEncode(DynamicRoutingValueMapper::GetNameForDynamicRoutingValue(m_dynamicRouting))
            << "&";
  }
  if (m_requesterAllowMultipathResilienceHasBeenSet) {
    oStream << location << ".RequesterAllowMultipathResilience=" << std::boolalpha << m_requesterAllowMultipathResilience << "&";
  }
  if (m_requesterMultipathResilienceModeHasBeenSet) {
    oStream << location << ".RequesterMultipathResilienceMode="
            << StringUtils::URLEncode(
                   TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::
                       GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(m_requesterMultipathResilienceMode))
            << "&";
  }
  if (m_accepterAllowMultipathResilienceHasBeenSet) {
    oStream << location << ".AccepterAllowMultipathResilience=" << std::boolalpha << m_accepterAllowMultipathResilience << "&";
  }
  if (m_accepterMultipathResilienceModeHasBeenSet) {
    oStream << location << ".AccepterMultipathResilienceMode="
            << StringUtils::URLEncode(
                   TransitGatewayPeeringAttachmentMultipathResilienceModeMapper::
                       GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(m_accepterMultipathResilienceMode))
            << "&";
  }
  if (m_multipathResilienceStatusHasBeenSet) {
    oStream << location << ".MultipathResilienceStatus="
            << StringUtils::URLEncode(TransitGatewayPeeringAttachmentMultipathResilienceStatusMapper::
                                          GetNameForTransitGatewayPeeringAttachmentMultipathResilienceStatus(m_multipathResilienceStatus))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
