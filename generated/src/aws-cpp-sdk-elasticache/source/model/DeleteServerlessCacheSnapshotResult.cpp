/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteServerlessCacheSnapshotResult.h>
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

DeleteServerlessCacheSnapshotResult::DeleteServerlessCacheSnapshotResult()
{
}

DeleteServerlessCacheSnapshotResult::DeleteServerlessCacheSnapshotResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteServerlessCacheSnapshotResult& DeleteServerlessCacheSnapshotResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteServerlessCacheSnapshotResult"))
  {
    resultNode = rootNode.FirstChild("DeleteServerlessCacheSnapshotResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode serverlessCacheSnapshotNode = resultNode.FirstChild("ServerlessCacheSnapshot");
    if(!serverlessCacheSnapshotNode.IsNull())
    {
      m_serverlessCacheSnapshot = serverlessCacheSnapshotNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DeleteServerlessCacheSnapshotResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
