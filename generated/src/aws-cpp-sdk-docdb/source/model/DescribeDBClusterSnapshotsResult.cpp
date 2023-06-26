﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DescribeDBClusterSnapshotsResult.h>
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

DescribeDBClusterSnapshotsResult::DescribeDBClusterSnapshotsResult()
{
}

DescribeDBClusterSnapshotsResult::DescribeDBClusterSnapshotsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterSnapshotsResult& DescribeDBClusterSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterSnapshotsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterSnapshotsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBClusterSnapshotsNode = resultNode.FirstChild("DBClusterSnapshots");
    if(!dBClusterSnapshotsNode.IsNull())
    {
      XmlNode dBClusterSnapshotsMember = dBClusterSnapshotsNode.FirstChild("DBClusterSnapshot");
      while(!dBClusterSnapshotsMember.IsNull())
      {
        m_dBClusterSnapshots.push_back(dBClusterSnapshotsMember);
        dBClusterSnapshotsMember = dBClusterSnapshotsMember.NextNode("DBClusterSnapshot");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::DescribeDBClusterSnapshotsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
