/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribePoliciesResult.h>
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

DescribePoliciesResult::DescribePoliciesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribePoliciesResult& DescribePoliciesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribePoliciesResult"))
  {
    resultNode = rootNode.FirstChild("DescribePoliciesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode scalingPoliciesNode = resultNode.FirstChild("ScalingPolicies");
    if(!scalingPoliciesNode.IsNull())
    {
      XmlNode scalingPoliciesMember = scalingPoliciesNode.FirstChild("member");
      m_scalingPoliciesHasBeenSet = !scalingPoliciesMember.IsNull();
      while(!scalingPoliciesMember.IsNull())
      {
        m_scalingPolicies.push_back(scalingPoliciesMember);
        scalingPoliciesMember = scalingPoliciesMember.NextNode("member");
      }

      m_scalingPoliciesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribePoliciesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
