/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSecurityGroupsResult.h>
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

DescribeDBSecurityGroupsResult::DescribeDBSecurityGroupsResult()
{
}

DescribeDBSecurityGroupsResult::DescribeDBSecurityGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBSecurityGroupsResult& DescribeDBSecurityGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBSecurityGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBSecurityGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode dBSecurityGroupsNode = resultNode.FirstChild("DBSecurityGroups");
    if(!dBSecurityGroupsNode.IsNull())
    {
      XmlNode dBSecurityGroupsMember = dBSecurityGroupsNode.FirstChild("DBSecurityGroup");
      while(!dBSecurityGroupsMember.IsNull())
      {
        m_dBSecurityGroups.push_back(dBSecurityGroupsMember);
        dBSecurityGroupsMember = dBSecurityGroupsMember.NextNode("DBSecurityGroup");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBSecurityGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
