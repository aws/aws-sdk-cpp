/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterSnapshotResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyClusterSnapshotResult::ModifyClusterSnapshotResult()
{
}

ModifyClusterSnapshotResult::ModifyClusterSnapshotResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyClusterSnapshotResult& ModifyClusterSnapshotResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyClusterSnapshotResult"))
  {
    resultNode = rootNode.FirstChild("ModifyClusterSnapshotResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotNode = resultNode.FirstChild("Snapshot");
    if(!snapshotNode.IsNull())
    {
      m_snapshot = snapshotNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyClusterSnapshotResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
