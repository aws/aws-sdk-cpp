/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FleetInstanceMetadataOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FleetInstanceMetadataOptionsRequest::FleetInstanceMetadataOptionsRequest(const XmlNode& xmlNode) { *this = xmlNode; }

FleetInstanceMetadataOptionsRequest& FleetInstanceMetadataOptionsRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode httpTokensNode = resultNode.FirstChild("HttpTokens");
    if (!httpTokensNode.IsNull()) {
      m_httpTokens = FleetHttpTokensStateMapper::GetFleetHttpTokensStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()));
      m_httpTokensHasBeenSet = true;
    }
    XmlNode httpPutResponseHopLimitNode = resultNode.FirstChild("HttpPutResponseHopLimit");
    if (!httpPutResponseHopLimitNode.IsNull()) {
      m_httpPutResponseHopLimit = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpPutResponseHopLimitNode.GetText()).c_str()).c_str());
      m_httpPutResponseHopLimitHasBeenSet = true;
    }
    XmlNode httpEndpointNode = resultNode.FirstChild("HttpEndpoint");
    if (!httpEndpointNode.IsNull()) {
      m_httpEndpoint = FleetInstanceMetadataEndpointStateMapper::GetFleetInstanceMetadataEndpointStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()));
      m_httpEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void FleetInstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                         const char* locationValue) const {
  if (m_httpTokensHasBeenSet) {
    oStream << location << index << locationValue
            << ".HttpTokens=" << StringUtils::URLEncode(FleetHttpTokensStateMapper::GetNameForFleetHttpTokensState(m_httpTokens)) << "&";
  }

  if (m_httpPutResponseHopLimitHasBeenSet) {
    oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if (m_httpEndpointHasBeenSet) {
    oStream << location << index << locationValue << ".HttpEndpoint="
            << StringUtils::URLEncode(
                   FleetInstanceMetadataEndpointStateMapper::GetNameForFleetInstanceMetadataEndpointState(m_httpEndpoint))
            << "&";
  }
}

void FleetInstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_httpTokensHasBeenSet) {
    oStream << location
            << ".HttpTokens=" << StringUtils::URLEncode(FleetHttpTokensStateMapper::GetNameForFleetHttpTokensState(m_httpTokens)) << "&";
  }
  if (m_httpPutResponseHopLimitHasBeenSet) {
    oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if (m_httpEndpointHasBeenSet) {
    oStream << location << ".HttpEndpoint="
            << StringUtils::URLEncode(
                   FleetInstanceMetadataEndpointStateMapper::GetNameForFleetInstanceMetadataEndpointState(m_httpEndpoint))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
