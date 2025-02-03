/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/NestedXmlMapsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

NestedXmlMapsResult::NestedXmlMapsResult()
{
}

NestedXmlMapsResult::NestedXmlMapsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

NestedXmlMapsResult& NestedXmlMapsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nestedMapNode = resultNode.FirstChild("nestedMap");

    if(!nestedMapNode.IsNull())
    {
      XmlNode nestedMapEntry = nestedMapNode.FirstChild("entry");
      while(!nestedMapEntry.IsNull())
      {
        XmlNode keyNode = nestedMapEntry.FirstChild("key");
        XmlNode valueNode = nestedMapEntry.FirstChild("value");
        m_nestedMap[keyNode.GetText()] =
        nestedMapEntry = nestedMapEntry.NextNode("entry");
      }

    }
    XmlNode flatNestedMapNode = resultNode.FirstChild("flatNestedMap");

    if(!flatNestedMapNode.IsNull())
    {
      XmlNode flatNestedMapEntry = flatNestedMapNode.FirstChild("entry");
      while(!flatNestedMapEntry.IsNull())
      {
        XmlNode keyNode = flatNestedMapEntry.FirstChild("key");
        XmlNode valueNode = flatNestedMapEntry.FirstChild("value");
        m_flatNestedMap[keyNode.GetText()] =
        flatNestedMapEntry = flatNestedMapEntry.NextNode("entry");
      }

    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
