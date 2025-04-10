﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/VerifyDomainDkimResult.h>
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

VerifyDomainDkimResult::VerifyDomainDkimResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

VerifyDomainDkimResult& VerifyDomainDkimResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "VerifyDomainDkimResult"))
  {
    resultNode = rootNode.FirstChild("VerifyDomainDkimResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dkimTokensNode = resultNode.FirstChild("DkimTokens");
    if(!dkimTokensNode.IsNull())
    {
      XmlNode dkimTokensMember = dkimTokensNode.FirstChild("member");
      m_dkimTokensHasBeenSet = !dkimTokensMember.IsNull();
      while(!dkimTokensMember.IsNull())
      {
        m_dkimTokens.push_back(dkimTokensMember.GetText());
        dkimTokensMember = dkimTokensMember.NextNode("member");
      }

      m_dkimTokensHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::VerifyDomainDkimResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
