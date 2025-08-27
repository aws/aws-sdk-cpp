/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImageUsageReportsResponse.h>
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

DescribeImageUsageReportsResponse::DescribeImageUsageReportsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeImageUsageReportsResponse& DescribeImageUsageReportsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeImageUsageReportsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeImageUsageReportsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode imageUsageReportsNode = resultNode.FirstChild("imageUsageReportSet");
    if(!imageUsageReportsNode.IsNull())
    {
      XmlNode imageUsageReportsMember = imageUsageReportsNode.FirstChild("item");
      m_imageUsageReportsHasBeenSet = !imageUsageReportsMember.IsNull();
      while(!imageUsageReportsMember.IsNull())
      {
        m_imageUsageReports.push_back(imageUsageReportsMember);
        imageUsageReportsMember = imageUsageReportsMember.NextNode("item");
      }

      m_imageUsageReportsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeImageUsageReportsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
