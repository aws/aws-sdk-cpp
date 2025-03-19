/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetDeclarativePoliciesReportSummaryResponse.h>
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

GetDeclarativePoliciesReportSummaryResponse::GetDeclarativePoliciesReportSummaryResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetDeclarativePoliciesReportSummaryResponse& GetDeclarativePoliciesReportSummaryResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetDeclarativePoliciesReportSummaryResponse"))
  {
    resultNode = rootNode.FirstChild("GetDeclarativePoliciesReportSummaryResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reportIdNode = resultNode.FirstChild("reportId");
    if(!reportIdNode.IsNull())
    {
      m_reportId = Aws::Utils::Xml::DecodeEscapedXmlText(reportIdNode.GetText());
      m_reportIdHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("s3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("s3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3PrefixNode.GetText());
      m_s3PrefixHasBeenSet = true;
    }
    XmlNode targetIdNode = resultNode.FirstChild("targetId");
    if(!targetIdNode.IsNull())
    {
      m_targetId = Aws::Utils::Xml::DecodeEscapedXmlText(targetIdNode.GetText());
      m_targetIdHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("endTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode numberOfAccountsNode = resultNode.FirstChild("numberOfAccounts");
    if(!numberOfAccountsNode.IsNull())
    {
      m_numberOfAccounts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfAccountsNode.GetText()).c_str()).c_str());
      m_numberOfAccountsHasBeenSet = true;
    }
    XmlNode numberOfFailedAccountsNode = resultNode.FirstChild("numberOfFailedAccounts");
    if(!numberOfFailedAccountsNode.IsNull())
    {
      m_numberOfFailedAccounts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfFailedAccountsNode.GetText()).c_str()).c_str());
      m_numberOfFailedAccountsHasBeenSet = true;
    }
    XmlNode attributeSummariesNode = resultNode.FirstChild("attributeSummarySet");
    if(!attributeSummariesNode.IsNull())
    {
      XmlNode attributeSummariesMember = attributeSummariesNode.FirstChild("item");
      m_attributeSummariesHasBeenSet = !attributeSummariesMember.IsNull();
      while(!attributeSummariesMember.IsNull())
      {
        m_attributeSummaries.push_back(attributeSummariesMember);
        attributeSummariesMember = attributeSummariesMember.NextNode("item");
      }

      m_attributeSummariesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetDeclarativePoliciesReportSummaryResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
