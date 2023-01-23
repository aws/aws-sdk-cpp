/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AuthorizeCacheSecurityGroupIngressResult.h>
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

AuthorizeCacheSecurityGroupIngressResult::AuthorizeCacheSecurityGroupIngressResult()
{
}

AuthorizeCacheSecurityGroupIngressResult::AuthorizeCacheSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AuthorizeCacheSecurityGroupIngressResult& AuthorizeCacheSecurityGroupIngressResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AuthorizeCacheSecurityGroupIngressResult"))
  {
    resultNode = rootNode.FirstChild("AuthorizeCacheSecurityGroupIngressResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode cacheSecurityGroupNode = resultNode.FirstChild("CacheSecurityGroup");
    if(!cacheSecurityGroupNode.IsNull())
    {
      m_cacheSecurityGroup = cacheSecurityGroupNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::AuthorizeCacheSecurityGroupIngressResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
