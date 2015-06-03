/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetCredentialReportResult::GetCredentialReportResult() : 
    m_generatedTime(0.0)
{
}

GetCredentialReportResult::GetCredentialReportResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_generatedTime(0.0)
{
  *this = result;
}

GetCredentialReportResult& GetCredentialReportResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("GetCredentialReportResult");

  if(!resultNode.IsNull())
  {
    XmlNode contentNode = resultNode.FirstChild("Content");
    m_content = HashingUtils::Base64Decode(StringUtils::Trim(contentNode.GetText().c_str()));
    XmlNode reportFormatNode = resultNode.FirstChild("ReportFormat");
    m_reportFormat = ReportFormatTypeMapper::GetReportFormatTypeForName(StringUtils::Trim(reportFormatNode.GetText().c_str()).c_str());
    XmlNode generatedTimeNode = resultNode.FirstChild("GeneratedTime");
    m_generatedTime = StringUtils::ConvertToDouble(StringUtils::Trim(generatedTimeNode.GetText().c_str()).c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
