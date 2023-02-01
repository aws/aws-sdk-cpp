/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DescribeDBClusterParameterGroupsResult.h>
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

DescribeDBClusterParameterGroupsResult::DescribeDBClusterParameterGroupsResult()
{
}

DescribeDBClusterParameterGroupsResult::DescribeDBClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterParameterGroupsResult& DescribeDBClusterParameterGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterParameterGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterParameterGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBClusterParameterGroupsNode = resultNode.FirstChild("DBClusterParameterGroups");
    if(!dBClusterParameterGroupsNode.IsNull())
    {
      XmlNode dBClusterParameterGroupsMember = dBClusterParameterGroupsNode.FirstChild("DBClusterParameterGroup");
      while(!dBClusterParameterGroupsMember.IsNull())
      {
        m_dBClusterParameterGroups.push_back(dBClusterParameterGroupsMember);
        dBClusterParameterGroupsMember = dBClusterParameterGroupsMember.NextNode("DBClusterParameterGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::DescribeDBClusterParameterGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
