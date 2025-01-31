/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/XmlEnumsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlEnumsResponse::XmlEnumsResponse() : 
    m_fooEnum1(FooEnum::NOT_SET),
    m_fooEnum2(FooEnum::NOT_SET),
    m_fooEnum3(FooEnum::NOT_SET)
{
}

XmlEnumsResponse::XmlEnumsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : XmlEnumsResponse()
{
  *this = result;
}

XmlEnumsResponse& XmlEnumsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlEnumsResponse"))
  {
    resultNode = rootNode.FirstChild("XmlEnumsResponse");
  }

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

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::XmlEnumsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
