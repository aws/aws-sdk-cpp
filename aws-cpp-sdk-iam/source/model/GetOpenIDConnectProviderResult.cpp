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

#include <aws/iam/model/GetOpenIDConnectProviderResult.h>
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

GetOpenIDConnectProviderResult::GetOpenIDConnectProviderResult()
{
}

GetOpenIDConnectProviderResult::GetOpenIDConnectProviderResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetOpenIDConnectProviderResult& GetOpenIDConnectProviderResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetOpenIDConnectProviderResult"))
  {
    resultNode = rootNode.FirstChild("GetOpenIDConnectProviderResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode urlNode = resultNode.FirstChild("Url");
    if(!urlNode.IsNull())
    {
      m_url = urlNode.GetText();
    }
    XmlNode clientIDListNode = resultNode.FirstChild("ClientIDList");
    if(!clientIDListNode.IsNull())
    {
      XmlNode clientIDListMember = clientIDListNode.FirstChild("member");
      while(!clientIDListMember.IsNull())
      {
        m_clientIDList.push_back(clientIDListMember.GetText());
        clientIDListMember = clientIDListMember.NextNode("member");
      }

    }
    XmlNode thumbprintListNode = resultNode.FirstChild("ThumbprintList");
    if(!thumbprintListNode.IsNull())
    {
      XmlNode thumbprintListMember = thumbprintListNode.FirstChild("member");
      while(!thumbprintListMember.IsNull())
      {
        m_thumbprintList.push_back(thumbprintListMember.GetText());
        thumbprintListMember = thumbprintListMember.NextNode("member");
      }

    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetOpenIDConnectProviderResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
