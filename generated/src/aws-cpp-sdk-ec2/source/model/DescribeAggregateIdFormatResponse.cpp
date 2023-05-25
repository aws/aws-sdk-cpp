/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeAggregateIdFormatResponse.h>
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

DescribeAggregateIdFormatResponse::DescribeAggregateIdFormatResponse() : 
    m_useLongIdsAggregated(false)
{
}

DescribeAggregateIdFormatResponse::DescribeAggregateIdFormatResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_useLongIdsAggregated(false)
{
  *this = result;
}

DescribeAggregateIdFormatResponse& DescribeAggregateIdFormatResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAggregateIdFormatResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeAggregateIdFormatResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode useLongIdsAggregatedNode = resultNode.FirstChild("useLongIdsAggregated");
    if(!useLongIdsAggregatedNode.IsNull())
    {
      m_useLongIdsAggregated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(useLongIdsAggregatedNode.GetText()).c_str()).c_str());
    }
    XmlNode statusesNode = resultNode.FirstChild("statusSet");
    if(!statusesNode.IsNull())
    {
      XmlNode statusesMember = statusesNode.FirstChild("item");
      while(!statusesMember.IsNull())
      {
        m_statuses.push_back(statusesMember);
        statusesMember = statusesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeAggregateIdFormatResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
