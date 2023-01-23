/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DisassociateGlobalReplicationGroupResult.h>
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

DisassociateGlobalReplicationGroupResult::DisassociateGlobalReplicationGroupResult()
{
}

DisassociateGlobalReplicationGroupResult::DisassociateGlobalReplicationGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DisassociateGlobalReplicationGroupResult& DisassociateGlobalReplicationGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisassociateGlobalReplicationGroupResult"))
  {
    resultNode = rootNode.FirstChild("DisassociateGlobalReplicationGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode globalReplicationGroupNode = resultNode.FirstChild("GlobalReplicationGroup");
    if(!globalReplicationGroupNode.IsNull())
    {
      m_globalReplicationGroup = globalReplicationGroupNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DisassociateGlobalReplicationGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
