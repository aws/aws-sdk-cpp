/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RevokeSecurityGroupIngressResponse.h>
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

RevokeSecurityGroupIngressResponse::RevokeSecurityGroupIngressResponse() : 
    m_return(false)
{
}

RevokeSecurityGroupIngressResponse::RevokeSecurityGroupIngressResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_return(false)
{
  *this = result;
}

RevokeSecurityGroupIngressResponse& RevokeSecurityGroupIngressResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RevokeSecurityGroupIngressResponse"))
  {
    resultNode = rootNode.FirstChild("RevokeSecurityGroupIngressResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode returnNode = resultNode.FirstChild("return");
    if(!returnNode.IsNull())
    {
      m_return = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnNode.GetText()).c_str()).c_str());
    }
    XmlNode unknownIpPermissionsNode = resultNode.FirstChild("unknownIpPermissionSet");
    if(!unknownIpPermissionsNode.IsNull())
    {
      XmlNode unknownIpPermissionsMember = unknownIpPermissionsNode.FirstChild("item");
      while(!unknownIpPermissionsMember.IsNull())
      {
        m_unknownIpPermissions.push_back(unknownIpPermissionsMember);
        unknownIpPermissionsMember = unknownIpPermissionsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::RevokeSecurityGroupIngressResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
