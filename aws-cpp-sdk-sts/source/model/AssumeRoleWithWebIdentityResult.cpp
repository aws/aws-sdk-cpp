/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleWithWebIdentityResult.h>
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

AssumeRoleWithWebIdentityResult::AssumeRoleWithWebIdentityResult() : 
    m_packedPolicySize(0)
{
}

AssumeRoleWithWebIdentityResult::AssumeRoleWithWebIdentityResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_packedPolicySize(0)
{
  *this = result;
}

AssumeRoleWithWebIdentityResult& AssumeRoleWithWebIdentityResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssumeRoleWithWebIdentityResult"))
  {
    resultNode = rootNode.FirstChild("AssumeRoleWithWebIdentityResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if(!credentialsNode.IsNull())
    {
      m_credentials = credentialsNode;
    }
    XmlNode subjectFromWebIdentityTokenNode = resultNode.FirstChild("SubjectFromWebIdentityToken");
    if(!subjectFromWebIdentityTokenNode.IsNull())
    {
      m_subjectFromWebIdentityToken = Aws::Utils::Xml::DecodeEscapedXmlText(subjectFromWebIdentityTokenNode.GetText());
    }
    XmlNode assumedRoleUserNode = resultNode.FirstChild("AssumedRoleUser");
    if(!assumedRoleUserNode.IsNull())
    {
      m_assumedRoleUser = assumedRoleUserNode;
    }
    XmlNode packedPolicySizeNode = resultNode.FirstChild("PackedPolicySize");
    if(!packedPolicySizeNode.IsNull())
    {
      m_packedPolicySize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(packedPolicySizeNode.GetText()).c_str()).c_str());
    }
    XmlNode providerNode = resultNode.FirstChild("Provider");
    if(!providerNode.IsNull())
    {
      m_provider = Aws::Utils::Xml::DecodeEscapedXmlText(providerNode.GetText());
    }
    XmlNode audienceNode = resultNode.FirstChild("Audience");
    if(!audienceNode.IsNull())
    {
      m_audience = Aws::Utils::Xml::DecodeEscapedXmlText(audienceNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleWithWebIdentityResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
