/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachNetworkInterfaceResponse.h>
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

AttachNetworkInterfaceResponse::AttachNetworkInterfaceResponse() : 
    m_networkCardIndex(0)
{
}

AttachNetworkInterfaceResponse::AttachNetworkInterfaceResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_networkCardIndex(0)
{
  *this = result;
}

AttachNetworkInterfaceResponse& AttachNetworkInterfaceResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AttachNetworkInterfaceResponse"))
  {
    resultNode = rootNode.FirstChild("AttachNetworkInterfaceResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode attachmentIdNode = resultNode.FirstChild("attachmentId");
    if(!attachmentIdNode.IsNull())
    {
      m_attachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(attachmentIdNode.GetText());
    }
    XmlNode networkCardIndexNode = resultNode.FirstChild("networkCardIndex");
    if(!networkCardIndexNode.IsNull())
    {
      m_networkCardIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkCardIndexNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AttachNetworkInterfaceResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
