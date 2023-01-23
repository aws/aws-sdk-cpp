/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthResult.h>
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

DescribeTargetHealthResult::DescribeTargetHealthResult()
{
}

DescribeTargetHealthResult::DescribeTargetHealthResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTargetHealthResult& DescribeTargetHealthResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTargetHealthResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTargetHealthResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode targetHealthDescriptionsNode = resultNode.FirstChild("TargetHealthDescriptions");
    if(!targetHealthDescriptionsNode.IsNull())
    {
      XmlNode targetHealthDescriptionsMember = targetHealthDescriptionsNode.FirstChild("member");
      while(!targetHealthDescriptionsMember.IsNull())
      {
        m_targetHealthDescriptions.push_back(targetHealthDescriptionsMember);
        targetHealthDescriptionsMember = targetHealthDescriptionsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::DescribeTargetHealthResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
