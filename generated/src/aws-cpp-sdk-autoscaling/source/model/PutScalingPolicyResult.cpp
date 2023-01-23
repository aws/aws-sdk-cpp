/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutScalingPolicyResult.h>
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

PutScalingPolicyResult::PutScalingPolicyResult()
{
}

PutScalingPolicyResult::PutScalingPolicyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PutScalingPolicyResult& PutScalingPolicyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PutScalingPolicyResult"))
  {
    resultNode = rootNode.FirstChild("PutScalingPolicyResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyARNNode = resultNode.FirstChild("PolicyARN");
    if(!policyARNNode.IsNull())
    {
      m_policyARN = Aws::Utils::Xml::DecodeEscapedXmlText(policyARNNode.GetText());
    }
    XmlNode alarmsNode = resultNode.FirstChild("Alarms");
    if(!alarmsNode.IsNull())
    {
      XmlNode alarmsMember = alarmsNode.FirstChild("member");
      while(!alarmsMember.IsNull())
      {
        m_alarms.push_back(alarmsMember);
        alarmsMember = alarmsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::PutScalingPolicyResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
