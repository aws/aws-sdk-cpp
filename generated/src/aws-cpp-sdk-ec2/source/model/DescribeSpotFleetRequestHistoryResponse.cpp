/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotFleetRequestHistoryResponse.h>
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

DescribeSpotFleetRequestHistoryResponse::DescribeSpotFleetRequestHistoryResponse()
{
}

DescribeSpotFleetRequestHistoryResponse::DescribeSpotFleetRequestHistoryResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSpotFleetRequestHistoryResponse& DescribeSpotFleetRequestHistoryResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSpotFleetRequestHistoryResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSpotFleetRequestHistoryResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode historyRecordsNode = resultNode.FirstChild("historyRecordSet");
    if(!historyRecordsNode.IsNull())
    {
      XmlNode historyRecordsMember = historyRecordsNode.FirstChild("item");
      while(!historyRecordsMember.IsNull())
      {
        m_historyRecords.push_back(historyRecordsMember);
        historyRecordsMember = historyRecordsMember.NextNode("item");
      }

    }
    XmlNode lastEvaluatedTimeNode = resultNode.FirstChild("lastEvaluatedTime");
    if(!lastEvaluatedTimeNode.IsNull())
    {
      m_lastEvaluatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastEvaluatedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestIdNode.GetText());
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSpotFleetRequestHistoryResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
