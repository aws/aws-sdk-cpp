/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcEndpointAssociationsResponse.h>
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

DescribeVpcEndpointAssociationsResponse::DescribeVpcEndpointAssociationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpcEndpointAssociationsResponse& DescribeVpcEndpointAssociationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpcEndpointAssociationsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVpcEndpointAssociationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode vpcEndpointAssociationsNode = resultNode.FirstChild("vpcEndpointAssociationSet");
    if(!vpcEndpointAssociationsNode.IsNull())
    {
      XmlNode vpcEndpointAssociationsMember = vpcEndpointAssociationsNode.FirstChild("item");
      m_vpcEndpointAssociationsHasBeenSet = !vpcEndpointAssociationsMember.IsNull();
      while(!vpcEndpointAssociationsMember.IsNull())
      {
        m_vpcEndpointAssociations.push_back(vpcEndpointAssociationsMember);
        vpcEndpointAssociationsMember = vpcEndpointAssociationsMember.NextNode("item");
      }

      m_vpcEndpointAssociationsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcEndpointAssociationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
