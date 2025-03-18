﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/XmlIntEnumsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlIntEnumsResult::XmlIntEnumsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

XmlIntEnumsResult& XmlIntEnumsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlIntEnumsResult"))
  {
    resultNode = rootNode.FirstChild("XmlIntEnumsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode intEnum1Node = resultNode.FirstChild("intEnum1");
    if(!intEnum1Node.IsNull())
    {
      m_intEnum1 = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(intEnum1Node.GetText()).c_str()).c_str());
      m_intEnum1HasBeenSet = true;
    }
    XmlNode intEnum2Node = resultNode.FirstChild("intEnum2");
    if(!intEnum2Node.IsNull())
    {
      m_intEnum2 = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(intEnum2Node.GetText()).c_str()).c_str());
      m_intEnum2HasBeenSet = true;
    }
    XmlNode intEnum3Node = resultNode.FirstChild("intEnum3");
    if(!intEnum3Node.IsNull())
    {
      m_intEnum3 = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(intEnum3Node.GetText()).c_str()).c_str());
      m_intEnum3HasBeenSet = true;
    }
    XmlNode intEnumListNode = resultNode.FirstChild("intEnumList");
    if(!intEnumListNode.IsNull())
    {
      XmlNode intEnumListMember = intEnumListNode.FirstChild("member");
      m_intEnumListHasBeenSet = !intEnumListMember.IsNull();
      while(!intEnumListMember.IsNull())
      {
        m_intEnumList.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(intEnumListMember.GetText().c_str()).c_str()));
        intEnumListMember = intEnumListMember.NextNode("member");
      }

      m_intEnumListHasBeenSet = true;
    }
    XmlNode intEnumSetNode = resultNode.FirstChild("intEnumSet");
    if(!intEnumSetNode.IsNull())
    {
      XmlNode intEnumSetMember = intEnumSetNode.FirstChild("member");
      m_intEnumSetHasBeenSet = !intEnumSetMember.IsNull();
      while(!intEnumSetMember.IsNull())
      {
        m_intEnumSet.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(intEnumSetMember.GetText().c_str()).c_str()));
        intEnumSetMember = intEnumSetMember.NextNode("member");
      }

      m_intEnumSetHasBeenSet = true;
    }
    XmlNode intEnumMapNode = resultNode.FirstChild("intEnumMap");

    if(!intEnumMapNode.IsNull())
    {
      XmlNode intEnumMapEntry = intEnumMapNode.FirstChild("entry");
      m_intEnumMapHasBeenSet = !intEnumMapEntry.IsNull();
      while(!intEnumMapEntry.IsNull())
      {
        XmlNode keyNode = intEnumMapEntry.FirstChild("key");
        XmlNode valueNode = intEnumMapEntry.FirstChild("value");
        m_intEnumMap[keyNode.GetText()] =
            StringUtils::ConvertToInt32(StringUtils::Trim(valueNode.GetText().c_str()).c_str());
        intEnumMapEntry = intEnumMapEntry.NextNode("entry");
      }

      m_intEnumMapHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlIntEnumsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
