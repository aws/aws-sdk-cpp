/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/DescribeReservedCacheNodesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedCacheNodesResult::DescribeReservedCacheNodesResult()
{
}

DescribeReservedCacheNodesResult::DescribeReservedCacheNodesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedCacheNodesResult& DescribeReservedCacheNodesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeReservedCacheNodesResult");

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    XmlNode reservedCacheNodeNodeParent = resultNode.FirstChild("ReservedCacheNode");
    XmlNode reservedCacheNodeNode = reservedCacheNodeNodeParent.FirstChild("member");
    while(!reservedCacheNodeNode.IsNull())
    {
      m_reservedCacheNodes.push_back(reservedCacheNodeNode);
      reservedCacheNodeNode = reservedCacheNodeNode.NextNode("member");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
