/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetPasswordDataResponse.h>
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

GetPasswordDataResponse::GetPasswordDataResponse()
{
}

GetPasswordDataResponse::GetPasswordDataResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetPasswordDataResponse& GetPasswordDataResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetPasswordDataResponse"))
  {
    resultNode = rootNode.FirstChild("GetPasswordDataResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
    }
    XmlNode passwordDataNode = resultNode.FirstChild("passwordData");
    if(!passwordDataNode.IsNull())
    {
      m_passwordData = Aws::Utils::Xml::DecodeEscapedXmlText(passwordDataNode.GetText());
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetPasswordDataResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
