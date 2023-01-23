/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeCacheSubnetGroupsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCacheSubnetGroupsResult::DescribeCacheSubnetGroupsResult()
{
}

DescribeCacheSubnetGroupsResult::DescribeCacheSubnetGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeCacheSubnetGroupsResult& DescribeCacheSubnetGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCacheSubnetGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeCacheSubnetGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode cacheSubnetGroupsNode = resultNode.FirstChild("CacheSubnetGroups");
    if(!cacheSubnetGroupsNode.IsNull())
    {
      XmlNode cacheSubnetGroupsMember = cacheSubnetGroupsNode.FirstChild("CacheSubnetGroup");
      while(!cacheSubnetGroupsMember.IsNull())
      {
        m_cacheSubnetGroups.push_back(cacheSubnetGroupsMember);
        cacheSubnetGroupsMember = cacheSubnetGroupsMember.NextNode("CacheSubnetGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DescribeCacheSubnetGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
