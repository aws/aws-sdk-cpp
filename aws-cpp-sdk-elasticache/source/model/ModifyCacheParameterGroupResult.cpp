/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyCacheParameterGroupResult.h>
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

ModifyCacheParameterGroupResult::ModifyCacheParameterGroupResult()
{
}

ModifyCacheParameterGroupResult::ModifyCacheParameterGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyCacheParameterGroupResult& ModifyCacheParameterGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCacheParameterGroupResult"))
  {
    resultNode = rootNode.FirstChild("ModifyCacheParameterGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode cacheParameterGroupNameNode = resultNode.FirstChild("CacheParameterGroupName");
    if(!cacheParameterGroupNameNode.IsNull())
    {
      m_cacheParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupNameNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::ModifyCacheParameterGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
