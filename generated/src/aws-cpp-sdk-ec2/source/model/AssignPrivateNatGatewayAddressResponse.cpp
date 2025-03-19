/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssignPrivateNatGatewayAddressResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AssignPrivateNatGatewayAddressResponse::AssignPrivateNatGatewayAddressResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssignPrivateNatGatewayAddressResponse& AssignPrivateNatGatewayAddressResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssignPrivateNatGatewayAddressResponse"))
  {
    resultNode = rootNode.FirstChild("AssignPrivateNatGatewayAddressResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode natGatewayIdNode = resultNode.FirstChild("natGatewayId");
    if(!natGatewayIdNode.IsNull())
    {
      m_natGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(natGatewayIdNode.GetText());
      m_natGatewayIdHasBeenSet = true;
    }
    XmlNode natGatewayAddressesNode = resultNode.FirstChild("natGatewayAddressSet");
    if(!natGatewayAddressesNode.IsNull())
    {
      XmlNode natGatewayAddressesMember = natGatewayAddressesNode.FirstChild("item");
      m_natGatewayAddressesHasBeenSet = !natGatewayAddressesMember.IsNull();
      while(!natGatewayAddressesMember.IsNull())
      {
        m_natGatewayAddresses.push_back(natGatewayAddressesMember);
        natGatewayAddressesMember = natGatewayAddressesMember.NextNode("item");
      }

      m_natGatewayAddressesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssignPrivateNatGatewayAddressResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
