/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

GetSendQuotaResult::GetSendQuotaResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_max24HourSend(0.0),
    m_maxSendRate(0.0),
    m_sentLast24Hours(0.0)
{
  *this = result;
}

GetSendQuotaResult& GetSendQuotaResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetSendQuotaResult")
  {
    resultNode = rootNode.FirstChild("GetSendQuotaResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode max24HourSendNode = resultNode.FirstChild("Max24HourSend");
    if(!max24HourSendNode.IsNull())
    {
      m_max24HourSend = StringUtils::ConvertToDouble(StringUtils::Trim(max24HourSendNode.GetText().c_str()).c_str());
    }
    XmlNode maxSendRateNode = resultNode.FirstChild("MaxSendRate");
    if(!maxSendRateNode.IsNull())
    {
      m_maxSendRate = StringUtils::ConvertToDouble(StringUtils::Trim(maxSendRateNode.GetText().c_str()).c_str());
    }
    XmlNode sentLast24HoursNode = resultNode.FirstChild("SentLast24Hours");
    if(!sentLast24HoursNode.IsNull())
    {
      m_sentLast24Hours = StringUtils::ConvertToDouble(StringUtils::Trim(sentLast24HoursNode.GetText().c_str()).c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetSendQuotaResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
