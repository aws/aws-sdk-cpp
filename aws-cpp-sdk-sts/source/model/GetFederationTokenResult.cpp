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
#include <aws/sts/model/GetFederationTokenResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetFederationTokenResult::GetFederationTokenResult() : 
    m_packedPolicySize(0)
{
}

GetFederationTokenResult::GetFederationTokenResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_packedPolicySize(0)
{
  *this = result;
}

GetFederationTokenResult& GetFederationTokenResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("GetFederationTokenResult");

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if(credentialsNode.IsNull())
    {
      credentialsNode = resultNode;
    }

    if(!credentialsNode.IsNull())
    {
      m_credentials = credentialsNode;
    }
    XmlNode federatedUserNode = resultNode.FirstChild("FederatedUser");
    if(federatedUserNode.IsNull())
    {
      federatedUserNode = resultNode;
    }

    if(!federatedUserNode.IsNull())
    {
      m_federatedUser = federatedUserNode;
    }
    XmlNode packedPolicySizeNode = resultNode.FirstChild("PackedPolicySize");
    if(packedPolicySizeNode.IsNull())
    {
      packedPolicySizeNode = resultNode;
    }

    if(!packedPolicySizeNode.IsNull())
    {
      m_packedPolicySize = StringUtils::ConvertToInt32(StringUtils::Trim(packedPolicySizeNode.GetText().c_str()).c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
