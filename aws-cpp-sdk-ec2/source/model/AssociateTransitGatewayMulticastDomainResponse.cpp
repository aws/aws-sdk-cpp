/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateTransitGatewayMulticastDomainResponse.h>
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

AssociateTransitGatewayMulticastDomainResponse::AssociateTransitGatewayMulticastDomainResponse()
{
}

AssociateTransitGatewayMulticastDomainResponse::AssociateTransitGatewayMulticastDomainResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssociateTransitGatewayMulticastDomainResponse& AssociateTransitGatewayMulticastDomainResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssociateTransitGatewayMulticastDomainResponse"))
  {
    resultNode = rootNode.FirstChild("AssociateTransitGatewayMulticastDomainResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode associationsNode = resultNode.FirstChild("associations");
    if(!associationsNode.IsNull())
    {
      m_associations = associationsNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssociateTransitGatewayMulticastDomainResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
