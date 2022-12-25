/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetVerifiedAccessGroupPolicyResponse.h>
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

GetVerifiedAccessGroupPolicyResponse::GetVerifiedAccessGroupPolicyResponse() : 
    m_policyEnabled(false)
{
}

GetVerifiedAccessGroupPolicyResponse::GetVerifiedAccessGroupPolicyResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_policyEnabled(false)
{
  *this = result;
}

GetVerifiedAccessGroupPolicyResponse& GetVerifiedAccessGroupPolicyResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetVerifiedAccessGroupPolicyResponse"))
  {
    resultNode = rootNode.FirstChild("GetVerifiedAccessGroupPolicyResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyEnabledNode = resultNode.FirstChild("policyEnabled");
    if(!policyEnabledNode.IsNull())
    {
      m_policyEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(policyEnabledNode.GetText()).c_str()).c_str());
    }
    XmlNode policyDocumentNode = resultNode.FirstChild("policyDocument");
    if(!policyDocumentNode.IsNull())
    {
      m_policyDocument = Aws::Utils::Xml::DecodeEscapedXmlText(policyDocumentNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetVerifiedAccessGroupPolicyResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
