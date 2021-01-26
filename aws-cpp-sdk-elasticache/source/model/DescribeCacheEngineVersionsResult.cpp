/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeCacheEngineVersionsResult.h>
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

DescribeCacheEngineVersionsResult::DescribeCacheEngineVersionsResult()
{
}

DescribeCacheEngineVersionsResult::DescribeCacheEngineVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeCacheEngineVersionsResult& DescribeCacheEngineVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCacheEngineVersionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeCacheEngineVersionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode cacheEngineVersionsNode = resultNode.FirstChild("CacheEngineVersions");
    if(!cacheEngineVersionsNode.IsNull())
    {
      XmlNode cacheEngineVersionsMember = cacheEngineVersionsNode.FirstChild("CacheEngineVersion");
      while(!cacheEngineVersionsMember.IsNull())
      {
        m_cacheEngineVersions.push_back(cacheEngineVersionsMember);
        cacheEngineVersionsMember = cacheEngineVersionsMember.NextNode("CacheEngineVersion");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DescribeCacheEngineVersionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
