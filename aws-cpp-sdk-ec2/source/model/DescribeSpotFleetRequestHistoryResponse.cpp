/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
      m_lastEvaluatedTime = DateTime(StringUtils::Trim(lastEvaluatedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = nextTokenNode.GetText();
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = spotFleetRequestIdNode.GetText();
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
