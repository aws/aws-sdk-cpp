/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetSendQuotaResult.h>
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

GetSendQuotaResult::GetSendQuotaResult() : 
    m_max24HourSend(0.0),
    m_maxSendRate(0.0),
    m_sentLast24Hours(0.0)
{
}

GetSendQuotaResult::GetSendQuotaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_max24HourSend(0.0),
    m_maxSendRate(0.0),
    m_sentLast24Hours(0.0)
{
  *this = result;
}

GetSendQuotaResult& GetSendQuotaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSendQuotaResult"))
  {
    resultNode = rootNode.FirstChild("GetSendQuotaResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode max24HourSendNode = resultNode.FirstChild("Max24HourSend");
    if(!max24HourSendNode.IsNull())
    {
      m_max24HourSend = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(max24HourSendNode.GetText()).c_str()).c_str());
    }
    XmlNode maxSendRateNode = resultNode.FirstChild("MaxSendRate");
    if(!maxSendRateNode.IsNull())
    {
      m_maxSendRate = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxSendRateNode.GetText()).c_str()).c_str());
    }
    XmlNode sentLast24HoursNode = resultNode.FirstChild("SentLast24Hours");
    if(!sentLast24HoursNode.IsNull())
    {
      m_sentLast24Hours = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sentLast24HoursNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetSendQuotaResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
