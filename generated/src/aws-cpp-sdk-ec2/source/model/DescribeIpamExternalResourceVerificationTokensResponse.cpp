/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpamExternalResourceVerificationTokensResponse.h>
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

DescribeIpamExternalResourceVerificationTokensResponse::DescribeIpamExternalResourceVerificationTokensResponse()
{
}

DescribeIpamExternalResourceVerificationTokensResponse::DescribeIpamExternalResourceVerificationTokensResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeIpamExternalResourceVerificationTokensResponse& DescribeIpamExternalResourceVerificationTokensResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeIpamExternalResourceVerificationTokensResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeIpamExternalResourceVerificationTokensResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode ipamExternalResourceVerificationTokensNode = resultNode.FirstChild("ipamExternalResourceVerificationTokenSet");
    if(!ipamExternalResourceVerificationTokensNode.IsNull())
    {
      XmlNode ipamExternalResourceVerificationTokensMember = ipamExternalResourceVerificationTokensNode.FirstChild("item");
      while(!ipamExternalResourceVerificationTokensMember.IsNull())
      {
        m_ipamExternalResourceVerificationTokens.push_back(ipamExternalResourceVerificationTokensMember);
        ipamExternalResourceVerificationTokensMember = ipamExternalResourceVerificationTokensMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeIpamExternalResourceVerificationTokensResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
