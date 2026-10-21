/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AnalysisTransitGatewayPolicyTableEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AnalysisTransitGatewayPolicyTableEntry::AnalysisTransitGatewayPolicyTableEntry(const XmlNode& xmlNode) { *this = xmlNode; }

AnalysisTransitGatewayPolicyTableEntry& AnalysisTransitGatewayPolicyTableEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ruleNumberNode = resultNode.FirstChild("ruleNumber");
    if (!ruleNumberNode.IsNull()) {
      m_ruleNumber =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleNumberNode.GetText()).c_str()).c_str());
      m_ruleNumberHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if (!protocolNode.IsNull()) {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode sourceCidrNode = resultNode.FirstChild("sourceCidr");
    if (!sourceCidrNode.IsNull()) {
      m_sourceCidr = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCidrNode.GetText());
      m_sourceCidrHasBeenSet = true;
    }
    XmlNode destinationCidrNode = resultNode.FirstChild("destinationCidr");
    if (!destinationCidrNode.IsNull()) {
      m_destinationCidr = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrNode.GetText());
      m_destinationCidrHasBeenSet = true;
    }
    XmlNode sourcePortRangeNode = resultNode.FirstChild("sourcePortRange");
    if (!sourcePortRangeNode.IsNull()) {
      m_sourcePortRange = sourcePortRangeNode;
      m_sourcePortRangeHasBeenSet = true;
    }
    XmlNode destinationPortRangeNode = resultNode.FirstChild("destinationPortRange");
    if (!destinationPortRangeNode.IsNull()) {
      m_destinationPortRange = destinationPortRangeNode;
      m_destinationPortRangeHasBeenSet = true;
    }
    XmlNode targetRouteTableIdNode = resultNode.FirstChild("targetRouteTableId");
    if (!targetRouteTableIdNode.IsNull()) {
      m_targetRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(targetRouteTableIdNode.GetText());
      m_targetRouteTableIdHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisTransitGatewayPolicyTableEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                            const char* locationValue) const {
  if (m_ruleNumberHasBeenSet) {
    oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

  if (m_protocolHasBeenSet) {
    oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if (m_sourceCidrHasBeenSet) {
    oStream << location << index << locationValue << ".SourceCidr=" << StringUtils::URLEncode(m_sourceCidr.c_str()) << "&";
  }

  if (m_destinationCidrHasBeenSet) {
    oStream << location << index << locationValue << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
  }

  if (m_sourcePortRangeHasBeenSet) {
    Aws::StringStream sourcePortRangeLocationAndMemberSs;
    sourcePortRangeLocationAndMemberSs << location << index << locationValue << ".SourcePortRange";
    m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMemberSs.str().c_str());
  }

  if (m_destinationPortRangeHasBeenSet) {
    Aws::StringStream destinationPortRangeLocationAndMemberSs;
    destinationPortRangeLocationAndMemberSs << location << index << locationValue << ".DestinationPortRange";
    m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMemberSs.str().c_str());
  }

  if (m_targetRouteTableIdHasBeenSet) {
    oStream << location << index << locationValue << ".TargetRouteTableId=" << StringUtils::URLEncode(m_targetRouteTableId.c_str()) << "&";
  }
}

void AnalysisTransitGatewayPolicyTableEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ruleNumberHasBeenSet) {
    oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
  if (m_protocolHasBeenSet) {
    oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if (m_sourceCidrHasBeenSet) {
    oStream << location << ".SourceCidr=" << StringUtils::URLEncode(m_sourceCidr.c_str()) << "&";
  }
  if (m_destinationCidrHasBeenSet) {
    oStream << location << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
  }
  if (m_sourcePortRangeHasBeenSet) {
    Aws::String sourcePortRangeLocationAndMember(location);
    sourcePortRangeLocationAndMember += ".SourcePortRange";
    m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMember.c_str());
  }
  if (m_destinationPortRangeHasBeenSet) {
    Aws::String destinationPortRangeLocationAndMember(location);
    destinationPortRangeLocationAndMember += ".DestinationPortRange";
    m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMember.c_str());
  }
  if (m_targetRouteTableIdHasBeenSet) {
    oStream << location << ".TargetRouteTableId=" << StringUtils::URLEncode(m_targetRouteTableId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
