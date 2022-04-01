﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterSubnetGroupsResult.h>
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

DescribeClusterSubnetGroupsResult::DescribeClusterSubnetGroupsResult()
{
}

DescribeClusterSubnetGroupsResult::DescribeClusterSubnetGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClusterSubnetGroupsResult& DescribeClusterSubnetGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClusterSubnetGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeClusterSubnetGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode clusterSubnetGroupsNode = resultNode.FirstChild("ClusterSubnetGroups");
    if(!clusterSubnetGroupsNode.IsNull())
    {
      XmlNode clusterSubnetGroupsMember = clusterSubnetGroupsNode.FirstChild("ClusterSubnetGroup");
      while(!clusterSubnetGroupsMember.IsNull())
      {
        m_clusterSubnetGroups.push_back(clusterSubnetGroupsMember);
        clusterSubnetGroupsMember = clusterSubnetGroupsMember.NextNode("ClusterSubnetGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeClusterSubnetGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
