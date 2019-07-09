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

GetCredentialReportResult::GetCredentialReportResult() : 
    m_reportFormat(ReportFormatType::NOT_SET)
{
}

GetCredentialReportResult::GetCredentialReportResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_reportFormat(ReportFormatType::NOT_SET)
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
      m_content = HashingUtils::Base64Decode(contentNode.GetText());
    }
    XmlNode reportFormatNode = resultNode.FirstChild("ReportFormat");
    if(!reportFormatNode.IsNull())
    {
      m_reportFormat = ReportFormatTypeMapper::GetReportFormatTypeForName(StringUtils::Trim(reportFormatNode.GetText().c_str()).c_str());
    }
    XmlNode generatedTimeNode = resultNode.FirstChild("GeneratedTime");
    if(!generatedTimeNode.IsNull())
    {
      m_generatedTime = DateTime(StringUtils::Trim(generatedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetCredentialReportResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
