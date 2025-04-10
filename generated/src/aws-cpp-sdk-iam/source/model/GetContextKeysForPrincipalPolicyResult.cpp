﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/GetContextKeysForPrincipalPolicyResult.h>
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

GetContextKeysForPrincipalPolicyResult::GetContextKeysForPrincipalPolicyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetContextKeysForPrincipalPolicyResult& GetContextKeysForPrincipalPolicyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetContextKeysForPrincipalPolicyResult"))
  {
    resultNode = rootNode.FirstChild("GetContextKeysForPrincipalPolicyResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode contextKeyNamesNode = resultNode.FirstChild("ContextKeyNames");
    if(!contextKeyNamesNode.IsNull())
    {
      XmlNode contextKeyNamesMember = contextKeyNamesNode.FirstChild("member");
      m_contextKeyNamesHasBeenSet = !contextKeyNamesMember.IsNull();
      while(!contextKeyNamesMember.IsNull())
      {
        m_contextKeyNames.push_back(contextKeyNamesMember.GetText());
        contextKeyNamesMember = contextKeyNamesMember.NextNode("member");
      }

      m_contextKeyNamesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetContextKeysForPrincipalPolicyResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
