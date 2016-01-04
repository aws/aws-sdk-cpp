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
#include <aws/iam/model/GetSAMLProviderResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetSAMLProviderResult::GetSAMLProviderResult() : 
    m_createDate(0.0),
    m_validUntil(0.0)
{
}

GetSAMLProviderResult::GetSAMLProviderResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_createDate(0.0),
    m_validUntil(0.0)
{
  *this = result;
}

GetSAMLProviderResult& GetSAMLProviderResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetSAMLProviderResult")
  {
    resultNode = rootNode.FirstChild("GetSAMLProviderResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sAMLMetadataDocumentNode = resultNode.FirstChild("SAMLMetadataDocument");
    if(!sAMLMetadataDocumentNode.IsNull())
    {
      m_sAMLMetadataDocument = StringUtils::Trim(sAMLMetadataDocumentNode.GetText().c_str());
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
    }
    XmlNode validUntilNode = resultNode.FirstChild("ValidUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = StringUtils::ConvertToDouble(StringUtils::Trim(validUntilNode.GetText().c_str()).c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetSAMLProviderResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
