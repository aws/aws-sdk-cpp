/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBProxyTargetGroupsResult.h>
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

DescribeDBProxyTargetGroupsResult::DescribeDBProxyTargetGroupsResult()
{
}

DescribeDBProxyTargetGroupsResult::DescribeDBProxyTargetGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBProxyTargetGroupsResult& DescribeDBProxyTargetGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBProxyTargetGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBProxyTargetGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode targetGroupsNode = resultNode.FirstChild("TargetGroups");
    if(!targetGroupsNode.IsNull())
    {
      XmlNode targetGroupsMember = targetGroupsNode.FirstChild("member");
      while(!targetGroupsMember.IsNull())
      {
        m_targetGroups.push_back(targetGroupsMember);
        targetGroupsMember = targetGroupsMember.NextNode("member");
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBProxyTargetGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
