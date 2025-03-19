/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotFleetRequestsResponse.h>
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

DescribeSpotFleetRequestsResponse::DescribeSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSpotFleetRequestsResponse& DescribeSpotFleetRequestsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSpotFleetRequestsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSpotFleetRequestsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode spotFleetRequestConfigsNode = resultNode.FirstChild("spotFleetRequestConfigSet");
    if(!spotFleetRequestConfigsNode.IsNull())
    {
      XmlNode spotFleetRequestConfigsMember = spotFleetRequestConfigsNode.FirstChild("item");
      m_spotFleetRequestConfigsHasBeenSet = !spotFleetRequestConfigsMember.IsNull();
      while(!spotFleetRequestConfigsMember.IsNull())
      {
        m_spotFleetRequestConfigs.push_back(spotFleetRequestConfigsMember);
        spotFleetRequestConfigsMember = spotFleetRequestConfigsMember.NextNode("item");
      }

      m_spotFleetRequestConfigsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSpotFleetRequestsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
