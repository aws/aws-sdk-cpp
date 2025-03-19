/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVerifiedAccessTrustProvidersResponse.h>
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

DescribeVerifiedAccessTrustProvidersResponse::DescribeVerifiedAccessTrustProvidersResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVerifiedAccessTrustProvidersResponse& DescribeVerifiedAccessTrustProvidersResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVerifiedAccessTrustProvidersResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVerifiedAccessTrustProvidersResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessTrustProvidersNode = resultNode.FirstChild("verifiedAccessTrustProviderSet");
    if(!verifiedAccessTrustProvidersNode.IsNull())
    {
      XmlNode verifiedAccessTrustProvidersMember = verifiedAccessTrustProvidersNode.FirstChild("item");
      m_verifiedAccessTrustProvidersHasBeenSet = !verifiedAccessTrustProvidersMember.IsNull();
      while(!verifiedAccessTrustProvidersMember.IsNull())
      {
        m_verifiedAccessTrustProviders.push_back(verifiedAccessTrustProvidersMember);
        verifiedAccessTrustProvidersMember = verifiedAccessTrustProvidersMember.NextNode("item");
      }

      m_verifiedAccessTrustProvidersHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVerifiedAccessTrustProvidersResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
