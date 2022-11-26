﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcEndpointServicesResponse.h>
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

DescribeVpcEndpointServicesResponse::DescribeVpcEndpointServicesResponse()
{
}

DescribeVpcEndpointServicesResponse::DescribeVpcEndpointServicesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpcEndpointServicesResponse& DescribeVpcEndpointServicesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpcEndpointServicesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVpcEndpointServicesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode serviceNamesNode = resultNode.FirstChild("serviceNameSet");
    if(!serviceNamesNode.IsNull())
    {
      XmlNode serviceNamesMember = serviceNamesNode.FirstChild("item");
      while(!serviceNamesMember.IsNull())
      {
        m_serviceNames.push_back(serviceNamesMember.GetText());
        serviceNamesMember = serviceNamesMember.NextNode("item");
      }

    }
    XmlNode serviceDetailsNode = resultNode.FirstChild("serviceDetailSet");
    if(!serviceDetailsNode.IsNull())
    {
      XmlNode serviceDetailsMember = serviceDetailsNode.FirstChild("item");
      while(!serviceDetailsMember.IsNull())
      {
        m_serviceDetails.push_back(serviceDetailsMember);
        serviceDetailsMember = serviceDetailsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcEndpointServicesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
