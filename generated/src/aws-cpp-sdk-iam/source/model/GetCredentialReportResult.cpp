/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/GetCredentialReportResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetCredentialReportResult::GetCredentialReportResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetCredentialReportResult& GetCredentialReportResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCredentialReportResult"))
  {
    resultNode = rootNode.FirstChild("GetCredentialReportResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode contentNode = resultNode.FirstChild("Content");
    if(!contentNode.IsNull())
    {
      m_content = HashingUtils::Base64Decode(Aws::Utils::Xml::DecodeEscapedXmlText(contentNode.GetText()));
      m_contentHasBeenSet = true;
    }
    XmlNode reportFormatNode = resultNode.FirstChild("ReportFormat");
    if(!reportFormatNode.IsNull())
    {
      m_reportFormat = ReportFormatTypeMapper::GetReportFormatTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reportFormatNode.GetText()).c_str()));
      m_reportFormatHasBeenSet = true;
    }
    XmlNode generatedTimeNode = resultNode.FirstChild("GeneratedTime");
    if(!generatedTimeNode.IsNull())
    {
      m_generatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(generatedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_generatedTimeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetCredentialReportResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
