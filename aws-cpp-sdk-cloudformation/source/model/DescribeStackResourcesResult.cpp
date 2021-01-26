/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackResourcesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeStackResourcesResult::DescribeStackResourcesResult()
{
}

DescribeStackResourcesResult::DescribeStackResourcesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeStackResourcesResult& DescribeStackResourcesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeStackResourcesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeStackResourcesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackResourcesNode = resultNode.FirstChild("StackResources");
    if(!stackResourcesNode.IsNull())
    {
      XmlNode stackResourcesMember = stackResourcesNode.FirstChild("member");
      while(!stackResourcesMember.IsNull())
      {
        m_stackResources.push_back(stackResourcesMember);
        stackResourcesMember = stackResourcesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackResourcesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
