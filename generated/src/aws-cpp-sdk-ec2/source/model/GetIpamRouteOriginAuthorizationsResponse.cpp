/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamRouteOriginAuthorizationsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamRouteOriginAuthorizationsResponse::GetIpamRouteOriginAuthorizationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIpamRouteOriginAuthorizationsResponse& GetIpamRouteOriginAuthorizationsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamRouteOriginAuthorizationsResponse")) {
    resultNode = rootNode.FirstChild("GetIpamRouteOriginAuthorizationsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamRouteOriginAuthorizationsNode = resultNode.FirstChild("ipamRouteOriginAuthorizationSet");
    if (!ipamRouteOriginAuthorizationsNode.IsNull()) {
      XmlNode ipamRouteOriginAuthorizationsMember = ipamRouteOriginAuthorizationsNode.FirstChild("item");
      m_ipamRouteOriginAuthorizationsHasBeenSet = !ipamRouteOriginAuthorizationsMember.IsNull();
      while (!ipamRouteOriginAuthorizationsMember.IsNull()) {
        m_ipamRouteOriginAuthorizations.push_back(ipamRouteOriginAuthorizationsMember);
        ipamRouteOriginAuthorizationsMember = ipamRouteOriginAuthorizationsMember.NextNode("item");
      }

      m_ipamRouteOriginAuthorizationsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamRouteOriginAuthorizationsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
