/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/IncreaseReplicaCountResult.h>
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

IncreaseReplicaCountResult::IncreaseReplicaCountResult()
{
}

IncreaseReplicaCountResult::IncreaseReplicaCountResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

IncreaseReplicaCountResult& IncreaseReplicaCountResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "IncreaseReplicaCountResult"))
  {
    resultNode = rootNode.FirstChild("IncreaseReplicaCountResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode replicationGroupNode = resultNode.FirstChild("ReplicationGroup");
    if(!replicationGroupNode.IsNull())
    {
      m_replicationGroup = replicationGroupNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::IncreaseReplicaCountResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
