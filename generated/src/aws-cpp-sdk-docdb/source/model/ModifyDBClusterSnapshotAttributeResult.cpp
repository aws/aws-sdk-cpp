/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyDBClusterSnapshotAttributeResult::ModifyDBClusterSnapshotAttributeResult()
{
}

ModifyDBClusterSnapshotAttributeResult::ModifyDBClusterSnapshotAttributeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyDBClusterSnapshotAttributeResult& ModifyDBClusterSnapshotAttributeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyDBClusterSnapshotAttributeResult"))
  {
    resultNode = rootNode.FirstChild("ModifyDBClusterSnapshotAttributeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterSnapshotAttributesResultNode = resultNode.FirstChild("DBClusterSnapshotAttributesResult");
    if(!dBClusterSnapshotAttributesResultNode.IsNull())
    {
      m_dBClusterSnapshotAttributesResult = dBClusterSnapshotAttributesResultNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::ModifyDBClusterSnapshotAttributeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
