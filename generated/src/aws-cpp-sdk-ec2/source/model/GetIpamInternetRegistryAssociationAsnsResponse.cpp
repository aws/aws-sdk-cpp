/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamInternetRegistryAssociationAsnsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamInternetRegistryAssociationAsnsResponse::GetIpamInternetRegistryAssociationAsnsResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIpamInternetRegistryAssociationAsnsResponse& GetIpamInternetRegistryAssociationAsnsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamInternetRegistryAssociationAsnsResponse")) {
    resultNode = rootNode.FirstChild("GetIpamInternetRegistryAssociationAsnsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode ipamInternetRegistryAssociationAsnsNode = resultNode.FirstChild("ipamInternetRegistryAssociationAsnSet");
    if (!ipamInternetRegistryAssociationAsnsNode.IsNull()) {
      XmlNode ipamInternetRegistryAssociationAsnsMember = ipamInternetRegistryAssociationAsnsNode.FirstChild("item");
      m_ipamInternetRegistryAssociationAsnsHasBeenSet = !ipamInternetRegistryAssociationAsnsMember.IsNull();
      while (!ipamInternetRegistryAssociationAsnsMember.IsNull()) {
        m_ipamInternetRegistryAssociationAsns.push_back(ipamInternetRegistryAssociationAsnsMember);
        ipamInternetRegistryAssociationAsnsMember = ipamInternetRegistryAssociationAsnsMember.NextNode("item");
      }

      m_ipamInternetRegistryAssociationAsnsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamInternetRegistryAssociationAsnsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
