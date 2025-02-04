/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/XmlAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

XmlAttributesResult::XmlAttributesResult()
{
}

XmlAttributesResult::XmlAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

XmlAttributesResult& XmlAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if(!fooNode.IsNull())
    {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
    }
    auto attr = resultNode.GetAttributeValue("test");
    if(!attr.empty())
    {
      m_attr = Aws::Utils::Xml::DecodeEscapedXmlText(attr);
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
