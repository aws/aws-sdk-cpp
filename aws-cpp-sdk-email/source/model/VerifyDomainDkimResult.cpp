﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

VerifyDomainDkimResult::VerifyDomainDkimResult()
{
}

VerifyDomainDkimResult::VerifyDomainDkimResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

VerifyDomainDkimResult& VerifyDomainDkimResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "VerifyDomainDkimResult")
  {
    resultNode = rootNode.FirstChild("VerifyDomainDkimResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dkimTokensNode = resultNode.FirstChild("DkimTokens");
    if(!dkimTokensNode.IsNull())
    {
      XmlNode dkimTokensMember = dkimTokensNode.FirstChild("member");
      while(!dkimTokensMember.IsNull())
      {
        m_dkimTokens.push_back(StringUtils::Trim(dkimTokensMember.GetText().c_str()));
        dkimTokensMember = dkimTokensMember.NextNode("member");
      }

    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::SES::Model::VerifyDomainDkimResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
