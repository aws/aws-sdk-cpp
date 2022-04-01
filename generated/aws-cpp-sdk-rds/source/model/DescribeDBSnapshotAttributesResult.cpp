/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSnapshotAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBSnapshotAttributesResult::DescribeDBSnapshotAttributesResult()
{
}

DescribeDBSnapshotAttributesResult::DescribeDBSnapshotAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBSnapshotAttributesResult& DescribeDBSnapshotAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBSnapshotAttributesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBSnapshotAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBSnapshotAttributesResultNode = resultNode.FirstChild("DBSnapshotAttributesResult");
    if(!dBSnapshotAttributesResultNode.IsNull())
    {
      m_dBSnapshotAttributesResult = dBSnapshotAttributesResultNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBSnapshotAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
