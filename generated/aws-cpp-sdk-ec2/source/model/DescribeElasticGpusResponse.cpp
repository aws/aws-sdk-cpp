/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeElasticGpusResponse.h>
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

DescribeElasticGpusResponse::DescribeElasticGpusResponse() : 
    m_maxResults(0)
{
}

DescribeElasticGpusResponse::DescribeElasticGpusResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_maxResults(0)
{
  *this = result;
}

DescribeElasticGpusResponse& DescribeElasticGpusResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeElasticGpusResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeElasticGpusResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode elasticGpuSetNode = resultNode.FirstChild("elasticGpuSet");
    if(!elasticGpuSetNode.IsNull())
    {
      XmlNode elasticGpuSetMember = elasticGpuSetNode.FirstChild("item");
      while(!elasticGpuSetMember.IsNull())
      {
        m_elasticGpuSet.push_back(elasticGpuSetMember);
        elasticGpuSetMember = elasticGpuSetMember.NextNode("item");
      }

    }
    XmlNode maxResultsNode = resultNode.FirstChild("maxResults");
    if(!maxResultsNode.IsNull())
    {
      m_maxResults = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxResultsNode.GetText()).c_str()).c_str());
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeElasticGpusResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
