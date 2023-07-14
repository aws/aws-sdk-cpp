/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableSerialConsoleAccessResponse.h>
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

EnableSerialConsoleAccessResponse::EnableSerialConsoleAccessResponse() : 
    m_serialConsoleAccessEnabled(false)
{
}

EnableSerialConsoleAccessResponse::EnableSerialConsoleAccessResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_serialConsoleAccessEnabled(false)
{
  *this = result;
}

EnableSerialConsoleAccessResponse& EnableSerialConsoleAccessResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableSerialConsoleAccessResponse"))
  {
    resultNode = rootNode.FirstChild("EnableSerialConsoleAccessResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode serialConsoleAccessEnabledNode = resultNode.FirstChild("serialConsoleAccessEnabled");
    if(!serialConsoleAccessEnabledNode.IsNull())
    {
      m_serialConsoleAccessEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serialConsoleAccessEnabledNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableSerialConsoleAccessResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
