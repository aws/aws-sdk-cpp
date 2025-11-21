/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyRule.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayMeteringPolicyRule::TransitGatewayMeteringPolicyRule(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayMeteringPolicyRule& TransitGatewayMeteringPolicyRule::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceTransitGatewayAttachmentIdNode = resultNode.FirstChild("sourceTransitGatewayAttachmentId");
    if (!sourceTransitGatewayAttachmentIdNode.IsNull()) {
      m_sourceTransitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceTransitGatewayAttachmentIdNode.GetText());
      m_sourceTransitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode sourceTransitGatewayAttachmentTypeNode = resultNode.FirstChild("sourceTransitGatewayAttachmentType");
    if (!sourceTransitGatewayAttachmentTypeNode.IsNull()) {
      m_sourceTransitGatewayAttachmentType = TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTransitGatewayAttachmentTypeNode.GetText()).c_str()));
      m_sourceTransitGatewayAttachmentTypeHasBeenSet = true;
    }
    XmlNode sourceCidrBlockNode = resultNode.FirstChild("sourceCidrBlock");
    if (!sourceCidrBlockNode.IsNull()) {
      m_sourceCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCidrBlockNode.GetText());
      m_sourceCidrBlockHasBeenSet = true;
    }
    XmlNode sourcePortRangeNode = resultNode.FirstChild("sourcePortRange");
    if (!sourcePortRangeNode.IsNull()) {
      m_sourcePortRange = Aws::Utils::Xml::DecodeEscapedXmlText(sourcePortRangeNode.GetText());
      m_sourcePortRangeHasBeenSet = true;
    }
    XmlNode destinationTransitGatewayAttachmentIdNode = resultNode.FirstChild("destinationTransitGatewayAttachmentId");
    if (!destinationTransitGatewayAttachmentIdNode.IsNull()) {
      m_destinationTransitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(destinationTransitGatewayAttachmentIdNode.GetText());
      m_destinationTransitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode destinationTransitGatewayAttachmentTypeNode = resultNode.FirstChild("destinationTransitGatewayAttachmentType");
    if (!destinationTransitGatewayAttachmentTypeNode.IsNull()) {
      m_destinationTransitGatewayAttachmentType =
          TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(destinationTransitGatewayAttachmentTypeNode.GetText()).c_str()));
      m_destinationTransitGatewayAttachmentTypeHasBeenSet = true;
    }
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if (!destinationCidrBlockNode.IsNull()) {
      m_destinationCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrBlockNode.GetText());
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode destinationPortRangeNode = resultNode.FirstChild("destinationPortRange");
    if (!destinationPortRangeNode.IsNull()) {
      m_destinationPortRange = Aws::Utils::Xml::DecodeEscapedXmlText(destinationPortRangeNode.GetText());
      m_destinationPortRangeHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if (!protocolNode.IsNull()) {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayMeteringPolicyRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                      const char* locationValue) const {
  if (m_sourceTransitGatewayAttachmentIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".SourceTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_sourceTransitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_sourceTransitGatewayAttachmentTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SourceTransitGatewayAttachmentType="
            << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
                   m_sourceTransitGatewayAttachmentType))
            << "&";
  }

  if (m_sourceCidrBlockHasBeenSet) {
    oStream << location << index << locationValue << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }

  if (m_sourcePortRangeHasBeenSet) {
    oStream << location << index << locationValue << ".SourcePortRange=" << StringUtils::URLEncode(m_sourcePortRange.c_str()) << "&";
  }

  if (m_destinationTransitGatewayAttachmentIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".DestinationTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_destinationTransitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_destinationTransitGatewayAttachmentTypeHasBeenSet) {
    oStream << location << index << locationValue << ".DestinationTransitGatewayAttachmentType="
            << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
                   m_destinationTransitGatewayAttachmentType))
            << "&";
  }

  if (m_destinationCidrBlockHasBeenSet) {
    oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str())
            << "&";
  }

  if (m_destinationPortRangeHasBeenSet) {
    oStream << location << index << locationValue << ".DestinationPortRange=" << StringUtils::URLEncode(m_destinationPortRange.c_str())
            << "&";
  }

  if (m_protocolHasBeenSet) {
    oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
}

void TransitGatewayMeteringPolicyRule::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceTransitGatewayAttachmentIdHasBeenSet) {
    oStream << location << ".SourceTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_sourceTransitGatewayAttachmentId.c_str())
            << "&";
  }
  if (m_sourceTransitGatewayAttachmentTypeHasBeenSet) {
    oStream << location << ".SourceTransitGatewayAttachmentType="
            << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
                   m_sourceTransitGatewayAttachmentType))
            << "&";
  }
  if (m_sourceCidrBlockHasBeenSet) {
    oStream << location << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }
  if (m_sourcePortRangeHasBeenSet) {
    oStream << location << ".SourcePortRange=" << StringUtils::URLEncode(m_sourcePortRange.c_str()) << "&";
  }
  if (m_destinationTransitGatewayAttachmentIdHasBeenSet) {
    oStream << location
            << ".DestinationTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_destinationTransitGatewayAttachmentId.c_str()) << "&";
  }
  if (m_destinationTransitGatewayAttachmentTypeHasBeenSet) {
    oStream << location << ".DestinationTransitGatewayAttachmentType="
            << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(
                   m_destinationTransitGatewayAttachmentType))
            << "&";
  }
  if (m_destinationCidrBlockHasBeenSet) {
    oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if (m_destinationPortRangeHasBeenSet) {
    oStream << location << ".DestinationPortRange=" << StringUtils::URLEncode(m_destinationPortRange.c_str()) << "&";
  }
  if (m_protocolHasBeenSet) {
    oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
