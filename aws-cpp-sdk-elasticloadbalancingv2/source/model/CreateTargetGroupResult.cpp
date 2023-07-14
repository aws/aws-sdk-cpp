/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateTargetGroupResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateTargetGroupResult::CreateTargetGroupResult()
{
}

CreateTargetGroupResult::CreateTargetGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateTargetGroupResult& CreateTargetGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateTargetGroupResult"))
  {
    resultNode = rootNode.FirstChild("CreateTargetGroupResult");
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
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::CreateTargetGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
