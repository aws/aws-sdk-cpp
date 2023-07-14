﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeDBClusterEndpointsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBClusterEndpointsResult::DescribeDBClusterEndpointsResult()
{
}

DescribeDBClusterEndpointsResult::DescribeDBClusterEndpointsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterEndpointsResult& DescribeDBClusterEndpointsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterEndpointsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterEndpointsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBClusterEndpointsNode = resultNode.FirstChild("DBClusterEndpoints");
    if(!dBClusterEndpointsNode.IsNull())
    {
      XmlNode dBClusterEndpointsMember = dBClusterEndpointsNode.FirstChild("DBClusterEndpointList");
      while(!dBClusterEndpointsMember.IsNull())
      {
        m_dBClusterEndpoints.push_back(dBClusterEndpointsMember);
        dBClusterEndpointsMember = dBClusterEndpointsMember.NextNode("DBClusterEndpointList");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeDBClusterEndpointsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
