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
#include <aws/iam/model/GetOpenIDConnectProviderResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetOpenIDConnectProviderResult::GetOpenIDConnectProviderResult() : 
    m_createDate(0.0)
{
}

GetOpenIDConnectProviderResult::GetOpenIDConnectProviderResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_createDate(0.0)
{
  *this = result;
}

GetOpenIDConnectProviderResult& GetOpenIDConnectProviderResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("GetOpenIDConnectProviderResult");

  if(!resultNode.IsNull())
  {
    XmlNode urlNode = resultNode.FirstChild("Url");
    m_url = StringUtils::Trim(urlNode.GetText().c_str());
    XmlNode clientIDListNode = resultNode.FirstChild("ClientIDList");
    while(!clientIDListNode.IsNull())
    {
      m_clientIDList.push_back(StringUtils::Trim(clientIDListNode.GetText().c_str()));
      clientIDListNode = clientIDListNode.NextNode("ClientIDList");
    }

    XmlNode thumbprintListNode = resultNode.FirstChild("ThumbprintList");
    while(!thumbprintListNode.IsNull())
    {
      m_thumbprintList.push_back(StringUtils::Trim(thumbprintListNode.GetText().c_str()));
      thumbprintListNode = thumbprintListNode.NextNode("ThumbprintList");
    }

    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
