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

#include <aws/sts/model/AssumeRoleWithSAMLResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AssumeRoleWithSAMLResult::AssumeRoleWithSAMLResult() : 
    m_packedPolicySize(0)
{
}

AssumeRoleWithSAMLResult::AssumeRoleWithSAMLResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_packedPolicySize(0)
{
  *this = result;
}

AssumeRoleWithSAMLResult& AssumeRoleWithSAMLResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssumeRoleWithSAMLResult"))
  {
    resultNode = rootNode.FirstChild("AssumeRoleWithSAMLResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if(!credentialsNode.IsNull())
    {
      m_credentials = credentialsNode;
    }
    XmlNode assumedRoleUserNode = resultNode.FirstChild("AssumedRoleUser");
    if(!assumedRoleUserNode.IsNull())
    {
      m_assumedRoleUser = assumedRoleUserNode;
    }
    XmlNode packedPolicySizeNode = resultNode.FirstChild("PackedPolicySize");
    if(!packedPolicySizeNode.IsNull())
    {
      m_packedPolicySize = StringUtils::ConvertToInt32(StringUtils::Trim(packedPolicySizeNode.GetText().c_str()).c_str());
    }
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    if(!subjectNode.IsNull())
    {
      m_subject = subjectNode.GetText();
    }
    XmlNode subjectTypeNode = resultNode.FirstChild("SubjectType");
    if(!subjectTypeNode.IsNull())
    {
      m_subjectType = subjectTypeNode.GetText();
    }
    XmlNode issuerNode = resultNode.FirstChild("Issuer");
    if(!issuerNode.IsNull())
    {
      m_issuer = issuerNode.GetText();
    }
    XmlNode audienceNode = resultNode.FirstChild("Audience");
    if(!audienceNode.IsNull())
    {
      m_audience = audienceNode.GetText();
    }
    XmlNode nameQualifierNode = resultNode.FirstChild("NameQualifier");
    if(!nameQualifierNode.IsNull())
    {
      m_nameQualifier = nameQualifierNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleWithSAMLResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
