/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerResult.h>
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

ApplySecurityGroupsToLoadBalancerResult::ApplySecurityGroupsToLoadBalancerResult()
{
}

ApplySecurityGroupsToLoadBalancerResult::ApplySecurityGroupsToLoadBalancerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ApplySecurityGroupsToLoadBalancerResult& ApplySecurityGroupsToLoadBalancerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ApplySecurityGroupsToLoadBalancerResult"))
  {
    resultNode = rootNode.FirstChild("ApplySecurityGroupsToLoadBalancerResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroups");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("member");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember.GetText());
        securityGroupsMember = securityGroupsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::ApplySecurityGroupsToLoadBalancerResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
