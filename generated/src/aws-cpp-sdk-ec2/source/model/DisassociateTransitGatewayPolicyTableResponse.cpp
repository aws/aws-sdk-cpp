/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableResponse.h>
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

DisassociateTransitGatewayPolicyTableResponse::DisassociateTransitGatewayPolicyTableResponse()
{
}

DisassociateTransitGatewayPolicyTableResponse::DisassociateTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DisassociateTransitGatewayPolicyTableResponse& DisassociateTransitGatewayPolicyTableResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisassociateTransitGatewayPolicyTableResponse"))
  {
    resultNode = rootNode.FirstChild("DisassociateTransitGatewayPolicyTableResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode associationNode = resultNode.FirstChild("association");
    if(!associationNode.IsNull())
    {
      m_association = associationNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisassociateTransitGatewayPolicyTableResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
