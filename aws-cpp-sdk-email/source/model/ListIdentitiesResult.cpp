/*
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
#include <aws/email/model/ListIdentitiesResult.h>
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

ListIdentitiesResult::ListIdentitiesResult()
{
}

ListIdentitiesResult::ListIdentitiesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListIdentitiesResult& ListIdentitiesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ListIdentitiesResult")
  {
    resultNode = rootNode.FirstChild("ListIdentitiesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode identitiesNode = resultNode.FirstChild("Identities");
    if(!identitiesNode.IsNull())
    {
      XmlNode identitiesMember = identitiesNode.FirstChild("member");
      while(!identitiesMember.IsNull())
      {
        m_identities.push_back(StringUtils::Trim(identitiesMember.GetText().c_str()));
        identitiesMember = identitiesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = StringUtils::Trim(nextTokenNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListIdentitiesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
