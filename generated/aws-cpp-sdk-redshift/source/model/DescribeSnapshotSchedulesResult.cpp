/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeSnapshotSchedulesResult.h>
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

DescribeSnapshotSchedulesResult::DescribeSnapshotSchedulesResult()
{
}

DescribeSnapshotSchedulesResult::DescribeSnapshotSchedulesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSnapshotSchedulesResult& DescribeSnapshotSchedulesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSnapshotSchedulesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeSnapshotSchedulesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotSchedulesNode = resultNode.FirstChild("SnapshotSchedules");
    if(!snapshotSchedulesNode.IsNull())
    {
      XmlNode snapshotSchedulesMember = snapshotSchedulesNode.FirstChild("SnapshotSchedule");
      while(!snapshotSchedulesMember.IsNull())
      {
        m_snapshotSchedules.push_back(snapshotSchedulesMember);
        snapshotSchedulesMember = snapshotSchedulesMember.NextNode("SnapshotSchedule");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeSnapshotSchedulesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
