﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_maxResults = StringUtils::ConvertToInt32(StringUtils::Trim(maxResultsNode.GetText().c_str()).c_str());
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = StringUtils::Trim(nextTokenNode.GetText().c_str());
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
