﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcAttributeResponse.h>
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

DescribeVpcAttributeResponse::DescribeVpcAttributeResponse()
{
}

DescribeVpcAttributeResponse::DescribeVpcAttributeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpcAttributeResponse& DescribeVpcAttributeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpcAttributeResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVpcAttributeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode enableDnsHostnamesNode = resultNode.FirstChild("enableDnsHostnames");
    if(!enableDnsHostnamesNode.IsNull())
    {
      m_enableDnsHostnames = enableDnsHostnamesNode;
    }
    XmlNode enableDnsSupportNode = resultNode.FirstChild("enableDnsSupport");
    if(!enableDnsSupportNode.IsNull())
    {
      m_enableDnsSupport = enableDnsSupportNode;
    }
    XmlNode enableNetworkAddressUsageMetricsNode = resultNode.FirstChild("enableNetworkAddressUsageMetrics");
    if(!enableNetworkAddressUsageMetricsNode.IsNull())
    {
      m_enableNetworkAddressUsageMetrics = enableNetworkAddressUsageMetricsNode;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcAttributeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
