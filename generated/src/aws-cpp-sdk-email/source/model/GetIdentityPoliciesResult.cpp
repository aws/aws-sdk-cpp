/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityPoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityPoliciesResult::GetIdentityPoliciesResult()
{
}

GetIdentityPoliciesResult::GetIdentityPoliciesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIdentityPoliciesResult& GetIdentityPoliciesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIdentityPoliciesResult"))
  {
    resultNode = rootNode.FirstChild("GetIdentityPoliciesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policiesNode = resultNode.FirstChild("Policies");

    if(!policiesNode.IsNull())
    {
      XmlNode policiesEntry = policiesNode.FirstChild("entry");
      while(!policiesEntry.IsNull())
      {
        XmlNode keyNode = policiesEntry.FirstChild("key");
        XmlNode valueNode = policiesEntry.FirstChild("value");
        m_policies[keyNode.GetText()] =
            valueNode.GetText();
        policiesEntry = policiesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetIdentityPoliciesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
