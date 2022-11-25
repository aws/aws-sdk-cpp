/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AuthorizeSecurityGroupIngressResponse.h>
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

AuthorizeSecurityGroupIngressResponse::AuthorizeSecurityGroupIngressResponse() : 
    m_return(false)
{
}

AuthorizeSecurityGroupIngressResponse::AuthorizeSecurityGroupIngressResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_return(false)
{
  *this = result;
}

AuthorizeSecurityGroupIngressResponse& AuthorizeSecurityGroupIngressResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AuthorizeSecurityGroupIngressResponse"))
  {
    resultNode = rootNode.FirstChild("AuthorizeSecurityGroupIngressResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode returnNode = resultNode.FirstChild("return");
    if(!returnNode.IsNull())
    {
      m_return = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnNode.GetText()).c_str()).c_str());
    }
    XmlNode securityGroupRulesNode = resultNode.FirstChild("securityGroupRuleSet");
    if(!securityGroupRulesNode.IsNull())
    {
      XmlNode securityGroupRulesMember = securityGroupRulesNode.FirstChild("item");
      while(!securityGroupRulesMember.IsNull())
      {
        m_securityGroupRules.push_back(securityGroupRulesMember);
        securityGroupRulesMember = securityGroupRulesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AuthorizeSecurityGroupIngressResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
