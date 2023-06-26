/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetSendStatisticsResult.h>
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

GetSendStatisticsResult::GetSendStatisticsResult()
{
}

GetSendStatisticsResult::GetSendStatisticsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetSendStatisticsResult& GetSendStatisticsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSendStatisticsResult"))
  {
    resultNode = rootNode.FirstChild("GetSendStatisticsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sendDataPointsNode = resultNode.FirstChild("SendDataPoints");
    if(!sendDataPointsNode.IsNull())
    {
      XmlNode sendDataPointsMember = sendDataPointsNode.FirstChild("member");
      while(!sendDataPointsMember.IsNull())
      {
        m_sendDataPoints.push_back(sendDataPointsMember);
        sendDataPointsMember = sendDataPointsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetSendStatisticsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
