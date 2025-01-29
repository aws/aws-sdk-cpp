/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/XmlEnumsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

XmlEnumsResult::XmlEnumsResult() : 
    m_fooEnum1(FooEnum::NOT_SET),
    m_fooEnum2(FooEnum::NOT_SET),
    m_fooEnum3(FooEnum::NOT_SET)
{
}

XmlEnumsResult::XmlEnumsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : XmlEnumsResult()
{
  *this = result;
}

XmlEnumsResult& XmlEnumsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode fooEnum1Node = resultNode.FirstChild("fooEnum1");
    if(!fooEnum1Node.IsNull())
    {
      m_fooEnum1 = FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum1Node.GetText()).c_str()).c_str());
    }
    XmlNode fooEnum2Node = resultNode.FirstChild("fooEnum2");
    if(!fooEnum2Node.IsNull())
    {
      m_fooEnum2 = FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum2Node.GetText()).c_str()).c_str());
    }
    XmlNode fooEnum3Node = resultNode.FirstChild("fooEnum3");
    if(!fooEnum3Node.IsNull())
    {
      m_fooEnum3 = FooEnumMapper::GetFooEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fooEnum3Node.GetText()).c_str()).c_str());
    }
    XmlNode fooEnumListNode = resultNode.FirstChild("fooEnumList");
    if(!fooEnumListNode.IsNull())
    {
      XmlNode fooEnumListMember = fooEnumListNode.FirstChild("member");
      while(!fooEnumListMember.IsNull())
      {
        m_fooEnumList.push_back(FooEnumMapper::GetFooEnumForName(StringUtils::Trim(fooEnumListMember.GetText().c_str())));
        fooEnumListMember = fooEnumListMember.NextNode("member");
      }

    }
    XmlNode fooEnumSetNode = resultNode.FirstChild("fooEnumSet");
    if(!fooEnumSetNode.IsNull())
    {
      XmlNode fooEnumSetMember = fooEnumSetNode.FirstChild("member");
      while(!fooEnumSetMember.IsNull())
      {
        m_fooEnumSet.push_back(FooEnumMapper::GetFooEnumForName(StringUtils::Trim(fooEnumSetMember.GetText().c_str())));
        fooEnumSetMember = fooEnumSetMember.NextNode("member");
      }

    }
    XmlNode fooEnumMapNode = resultNode.FirstChild("fooEnumMap");

    if(!fooEnumMapNode.IsNull())
    {
      XmlNode fooEnumMapEntry = fooEnumMapNode.FirstChild("entry");
      while(!fooEnumMapEntry.IsNull())
      {
        XmlNode keyNode = fooEnumMapEntry.FirstChild("key");
        XmlNode valueNode = fooEnumMapEntry.FirstChild("value");
        m_fooEnumMap[keyNode.GetText()] =
            FooEnumMapper::GetFooEnumForName(StringUtils::Trim(valueNode.GetText().c_str()));
        fooEnumMapEntry = fooEnumMapEntry.NextNode("entry");
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
