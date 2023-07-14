/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodResult.h>
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

ModifySnapshotCopyRetentionPeriodResult::ModifySnapshotCopyRetentionPeriodResult()
{
}

ModifySnapshotCopyRetentionPeriodResult::ModifySnapshotCopyRetentionPeriodResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifySnapshotCopyRetentionPeriodResult& ModifySnapshotCopyRetentionPeriodResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifySnapshotCopyRetentionPeriodResult"))
  {
    resultNode = rootNode.FirstChild("ModifySnapshotCopyRetentionPeriodResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clusterNode = resultNode.FirstChild("Cluster");
    if(!clusterNode.IsNull())
    {
      m_cluster = clusterNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifySnapshotCopyRetentionPeriodResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
