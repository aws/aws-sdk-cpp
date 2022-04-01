/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetAccountSendingEnabledResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAccountSendingEnabledResult::GetAccountSendingEnabledResult() : 
    m_enabled(false)
{
}

GetAccountSendingEnabledResult::GetAccountSendingEnabledResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_enabled(false)
{
  *this = result;
}

GetAccountSendingEnabledResult& GetAccountSendingEnabledResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAccountSendingEnabledResult"))
  {
    resultNode = rootNode.FirstChild("GetAccountSendingEnabledResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetAccountSendingEnabledResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
