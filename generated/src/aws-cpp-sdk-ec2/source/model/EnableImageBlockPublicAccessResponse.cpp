/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableImageBlockPublicAccessResponse.h>
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

EnableImageBlockPublicAccessResponse::EnableImageBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EnableImageBlockPublicAccessResponse& EnableImageBlockPublicAccessResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableImageBlockPublicAccessResponse"))
  {
    resultNode = rootNode.FirstChild("EnableImageBlockPublicAccessResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode imageBlockPublicAccessStateNode = resultNode.FirstChild("imageBlockPublicAccessState");
    if(!imageBlockPublicAccessStateNode.IsNull())
    {
      m_imageBlockPublicAccessState = ImageBlockPublicAccessEnabledStateMapper::GetImageBlockPublicAccessEnabledStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(imageBlockPublicAccessStateNode.GetText()).c_str()));
      m_imageBlockPublicAccessStateHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableImageBlockPublicAccessResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
