/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeInstanceHealthResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceHealthResult::DescribeInstanceHealthResult()
{
}

DescribeInstanceHealthResult::DescribeInstanceHealthResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstanceHealthResult& DescribeInstanceHealthResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstanceHealthResult"))
  {
    resultNode = rootNode.FirstChild("DescribeInstanceHealthResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceStatesNode = resultNode.FirstChild("InstanceStates");
    if(!instanceStatesNode.IsNull())
    {
      XmlNode instanceStatesMember = instanceStatesNode.FirstChild("member");
      while(!instanceStatesMember.IsNull())
      {
        m_instanceStates.push_back(instanceStatesMember);
        instanceStatesMember = instanceStatesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DescribeInstanceHealthResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
