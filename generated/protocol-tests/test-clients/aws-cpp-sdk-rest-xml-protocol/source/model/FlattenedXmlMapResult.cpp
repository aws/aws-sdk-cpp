﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/FlattenedXmlMapResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

FlattenedXmlMapResult::FlattenedXmlMapResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FlattenedXmlMapResult& FlattenedXmlMapResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode myMapNode = resultNode.FirstChild("myMap");

    if(!myMapNode.IsNull())
    {
      XmlNode myMapEntry = myMapNode.FirstChild("entry");
      m_myMapHasBeenSet = !myMapEntry.IsNull();
      while(!myMapEntry.IsNull())
      {
        XmlNode keyNode = myMapEntry.FirstChild("key");
        XmlNode valueNode = myMapEntry.FirstChild("value");
        m_myMap[keyNode.GetText()] =
            FooEnumMapper::GetFooEnumForName(StringUtils::Trim(valueNode.GetText().c_str()));
        myMapEntry = myMapEntry.NextNode("entry");
      }

      m_myMapHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
