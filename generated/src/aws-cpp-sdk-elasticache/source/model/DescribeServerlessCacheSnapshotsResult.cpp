/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsResult.h>
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

DescribeServerlessCacheSnapshotsResult::DescribeServerlessCacheSnapshotsResult()
{
}

DescribeServerlessCacheSnapshotsResult::DescribeServerlessCacheSnapshotsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeServerlessCacheSnapshotsResult& DescribeServerlessCacheSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeServerlessCacheSnapshotsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeServerlessCacheSnapshotsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode serverlessCacheSnapshotsNode = resultNode.FirstChild("ServerlessCacheSnapshots");
    if(!serverlessCacheSnapshotsNode.IsNull())
    {
      XmlNode serverlessCacheSnapshotsMember = serverlessCacheSnapshotsNode.FirstChild("ServerlessCacheSnapshot");
      while(!serverlessCacheSnapshotsMember.IsNull())
      {
        m_serverlessCacheSnapshots.push_back(serverlessCacheSnapshotsMember);
        serverlessCacheSnapshotsMember = serverlessCacheSnapshotsMember.NextNode("ServerlessCacheSnapshot");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DescribeServerlessCacheSnapshotsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
