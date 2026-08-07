/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetIpamInternetRegistryAssociationCidrsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIpamInternetRegistryAssociationCidrsResponse::GetIpamInternetRegistryAssociationCidrsResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIpamInternetRegistryAssociationCidrsResponse& GetIpamInternetRegistryAssociationCidrsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamInternetRegistryAssociationCidrsResponse")) {
    resultNode = rootNode.FirstChild("GetIpamInternetRegistryAssociationCidrsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode ipamInternetRegistryAssociationCidrsNode = resultNode.FirstChild("ipamInternetRegistryAssociationCidrSet");
    if (!ipamInternetRegistryAssociationCidrsNode.IsNull()) {
      XmlNode ipamInternetRegistryAssociationCidrsMember = ipamInternetRegistryAssociationCidrsNode.FirstChild("item");
      m_ipamInternetRegistryAssociationCidrsHasBeenSet = !ipamInternetRegistryAssociationCidrsMember.IsNull();
      while (!ipamInternetRegistryAssociationCidrsMember.IsNull()) {
        m_ipamInternetRegistryAssociationCidrs.push_back(ipamInternetRegistryAssociationCidrsMember);
        ipamInternetRegistryAssociationCidrsMember = ipamInternetRegistryAssociationCidrsMember.NextNode("item");
      }

      m_ipamInternetRegistryAssociationCidrsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamInternetRegistryAssociationCidrsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
