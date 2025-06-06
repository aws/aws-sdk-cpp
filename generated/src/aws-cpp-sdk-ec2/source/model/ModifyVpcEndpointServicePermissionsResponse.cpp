﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsResponse.h>
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

ModifyVpcEndpointServicePermissionsResponse::ModifyVpcEndpointServicePermissionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyVpcEndpointServicePermissionsResponse& ModifyVpcEndpointServicePermissionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyVpcEndpointServicePermissionsResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyVpcEndpointServicePermissionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode addedPrincipalsNode = resultNode.FirstChild("addedPrincipalSet");
    if(!addedPrincipalsNode.IsNull())
    {
      XmlNode addedPrincipalsMember = addedPrincipalsNode.FirstChild("item");
      m_addedPrincipalsHasBeenSet = !addedPrincipalsMember.IsNull();
      while(!addedPrincipalsMember.IsNull())
      {
        m_addedPrincipals.push_back(addedPrincipalsMember);
        addedPrincipalsMember = addedPrincipalsMember.NextNode("item");
      }

      m_addedPrincipalsHasBeenSet = true;
    }
    XmlNode returnValueNode = resultNode.FirstChild("return");
    if(!returnValueNode.IsNull())
    {
      m_returnValue = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnValueNode.GetText()).c_str()).c_str());
      m_returnValueHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyVpcEndpointServicePermissionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
