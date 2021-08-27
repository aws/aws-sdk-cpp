/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeInstanceRefreshesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceRefreshesResult::DescribeInstanceRefreshesResult()
{
}

DescribeInstanceRefreshesResult::DescribeInstanceRefreshesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstanceRefreshesResult& DescribeInstanceRefreshesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstanceRefreshesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeInstanceRefreshesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceRefreshesNode = resultNode.FirstChild("InstanceRefreshes");
    if(!instanceRefreshesNode.IsNull())
    {
      XmlNode instanceRefreshesMember = instanceRefreshesNode.FirstChild("member");
      while(!instanceRefreshesMember.IsNull())
      {
        m_instanceRefreshes.push_back(instanceRefreshesMember);
        instanceRefreshesMember = instanceRefreshesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeInstanceRefreshesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
