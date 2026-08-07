/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamDiscoveredRoutesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamDiscoveredRoutesResponse::GetIpamDiscoveredRoutesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetIpamDiscoveredRoutesResponse& GetIpamDiscoveredRoutesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamDiscoveredRoutesResponse")) {
    resultNode = rootNode.FirstChild("GetIpamDiscoveredRoutesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamDiscoveredRoutesNode = resultNode.FirstChild("ipamDiscoveredRouteSet");
    if (!ipamDiscoveredRoutesNode.IsNull()) {
      XmlNode ipamDiscoveredRoutesMember = ipamDiscoveredRoutesNode.FirstChild("item");
      m_ipamDiscoveredRoutesHasBeenSet = !ipamDiscoveredRoutesMember.IsNull();
      while (!ipamDiscoveredRoutesMember.IsNull()) {
        m_ipamDiscoveredRoutes.push_back(ipamDiscoveredRoutesMember);
        ipamDiscoveredRoutesMember = ipamDiscoveredRoutesMember.NextNode("item");
      }

      m_ipamDiscoveredRoutesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamDiscoveredRoutesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
