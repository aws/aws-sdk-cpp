/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityResponse.h>
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

DescribeScheduledInstanceAvailabilityResponse::DescribeScheduledInstanceAvailabilityResponse()
{
}

DescribeScheduledInstanceAvailabilityResponse::DescribeScheduledInstanceAvailabilityResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeScheduledInstanceAvailabilityResponse& DescribeScheduledInstanceAvailabilityResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeScheduledInstanceAvailabilityResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeScheduledInstanceAvailabilityResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode scheduledInstanceAvailabilitySetNode = resultNode.FirstChild("scheduledInstanceAvailabilitySet");
    if(!scheduledInstanceAvailabilitySetNode.IsNull())
    {
      XmlNode scheduledInstanceAvailabilitySetMember = scheduledInstanceAvailabilitySetNode.FirstChild("item");
      while(!scheduledInstanceAvailabilitySetMember.IsNull())
      {
        m_scheduledInstanceAvailabilitySet.push_back(scheduledInstanceAvailabilitySetMember);
        scheduledInstanceAvailabilitySetMember = scheduledInstanceAvailabilitySetMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeScheduledInstanceAvailabilityResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
