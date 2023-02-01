/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateInternetGatewayResponse.h>
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

CreateInternetGatewayResponse::CreateInternetGatewayResponse()
{
}

CreateInternetGatewayResponse::CreateInternetGatewayResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateInternetGatewayResponse& CreateInternetGatewayResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateInternetGatewayResponse"))
  {
    resultNode = rootNode.FirstChild("CreateInternetGatewayResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode internetGatewayNode = resultNode.FirstChild("internetGateway");
    if(!internetGatewayNode.IsNull())
    {
      m_internetGateway = internetGatewayNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateInternetGatewayResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
