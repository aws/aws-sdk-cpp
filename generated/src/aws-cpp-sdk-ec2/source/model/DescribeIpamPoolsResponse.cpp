﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpamPoolsResponse.h>
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

DescribeIpamPoolsResponse::DescribeIpamPoolsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeIpamPoolsResponse& DescribeIpamPoolsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpamPoolsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeIpamPoolsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode ipamPoolsNode = resultNode.FirstChild("ipamPoolSet");
    if(!ipamPoolsNode.IsNull())
    {
      XmlNode ipamPoolsMember = ipamPoolsNode.FirstChild("item");
      m_ipamPoolsHasBeenSet = !ipamPoolsMember.IsNull();
      while(!ipamPoolsMember.IsNull())
      {
        m_ipamPools.push_back(ipamPoolsMember);
        ipamPoolsMember = ipamPoolsMember.NextNode("item");
      }

      m_ipamPoolsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpamPoolsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
