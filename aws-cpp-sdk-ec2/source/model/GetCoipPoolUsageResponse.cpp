/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetCoipPoolUsageResponse.h>
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

GetCoipPoolUsageResponse::GetCoipPoolUsageResponse()
{
}

GetCoipPoolUsageResponse::GetCoipPoolUsageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetCoipPoolUsageResponse& GetCoipPoolUsageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCoipPoolUsageResponse"))
  {
    resultNode = rootNode.FirstChild("GetCoipPoolUsageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode coipPoolIdNode = resultNode.FirstChild("coipPoolId");
    if(!coipPoolIdNode.IsNull())
    {
      m_coipPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(coipPoolIdNode.GetText());
    }
    XmlNode coipAddressUsagesNode = resultNode.FirstChild("coipAddressUsageSet");
    if(!coipAddressUsagesNode.IsNull())
    {
      XmlNode coipAddressUsagesMember = coipAddressUsagesNode.FirstChild("item");
      while(!coipAddressUsagesMember.IsNull())
      {
        m_coipAddressUsages.push_back(coipAddressUsagesMember);
        coipAddressUsagesMember = coipAddressUsagesMember.NextNode("item");
      }

    }
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetCoipPoolUsageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
