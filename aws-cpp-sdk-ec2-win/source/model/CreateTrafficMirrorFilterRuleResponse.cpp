/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTrafficMirrorFilterRuleResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateTrafficMirrorFilterRuleResponse::CreateTrafficMirrorFilterRuleResponse()
{
}

CreateTrafficMirrorFilterRuleResponse::CreateTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateTrafficMirrorFilterRuleResponse& CreateTrafficMirrorFilterRuleResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateTrafficMirrorFilterRuleResponse"))
  {
    resultNode = rootNode.FirstChild("CreateTrafficMirrorFilterRuleResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trafficMirrorFilterRuleNode = resultNode.FirstChild("trafficMirrorFilterRule");
    if(!trafficMirrorFilterRuleNode.IsNull())
    {
      m_trafficMirrorFilterRule = trafficMirrorFilterRuleNode;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateTrafficMirrorFilterRuleResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
