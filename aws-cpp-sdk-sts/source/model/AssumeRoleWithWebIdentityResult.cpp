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
#include <aws/sts/model/AssumeRoleWithWebIdentityResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

AssumeRoleWithWebIdentityResult::AssumeRoleWithWebIdentityResult() : 
    m_packedPolicySize(0)
{
}

AssumeRoleWithWebIdentityResult::AssumeRoleWithWebIdentityResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_packedPolicySize(0)
{
  *this = result;
}

AssumeRoleWithWebIdentityResult& AssumeRoleWithWebIdentityResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("AssumeRoleWithWebIdentityResult");

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    m_credentials = credentialsNode;
    XmlNode subjectFromWebIdentityTokenNode = resultNode.FirstChild("SubjectFromWebIdentityToken");
    m_subjectFromWebIdentityToken = StringUtils::Trim(subjectFromWebIdentityTokenNode.GetText().c_str());
    XmlNode assumedRoleUserNode = resultNode.FirstChild("AssumedRoleUser");
    m_assumedRoleUser = assumedRoleUserNode;
    XmlNode packedPolicySizeNode = resultNode.FirstChild("PackedPolicySize");
    m_packedPolicySize = StringUtils::ConvertToInt32(StringUtils::Trim(packedPolicySizeNode.GetText().c_str()).c_str());
    XmlNode providerNode = resultNode.FirstChild("Provider");
    m_provider = StringUtils::Trim(providerNode.GetText().c_str());
    XmlNode audienceNode = resultNode.FirstChild("Audience");
    m_audience = StringUtils::Trim(audienceNode.GetText().c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
