/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StartVpcEndpointServicePrivateDnsVerificationResponse.h>
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

StartVpcEndpointServicePrivateDnsVerificationResponse::StartVpcEndpointServicePrivateDnsVerificationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StartVpcEndpointServicePrivateDnsVerificationResponse& StartVpcEndpointServicePrivateDnsVerificationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StartVpcEndpointServicePrivateDnsVerificationResponse"))
  {
    resultNode = rootNode.FirstChild("StartVpcEndpointServicePrivateDnsVerificationResponse");
  }

  if(!resultNode.IsNull())
  {
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::StartVpcEndpointServicePrivateDnsVerificationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
