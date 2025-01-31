/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult() : 
    m_trueBooleanValue(false),
    m_falseBooleanValue(false),
    m_byteValue(0),
    m_shortValue(0),
    m_integerValue(0),
    m_longValue(0),
    m_floatValue(0.0),
    m_doubleValue(0.0)
{
}

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : SimpleScalarPropertiesResult()
{
  *this = result;
}

SimpleScalarPropertiesResult& SimpleScalarPropertiesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode stringValueNode = resultNode.FirstChild("stringValue");
    if(!stringValueNode.IsNull())
    {
      m_stringValue = Aws::Utils::Xml::DecodeEscapedXmlText(stringValueNode.GetText());
    }
    XmlNode trueBooleanValueNode = resultNode.FirstChild("trueBooleanValue");
    if(!trueBooleanValueNode.IsNull())
    {
      m_trueBooleanValue = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trueBooleanValueNode.GetText()).c_str()).c_str());
    }
    XmlNode falseBooleanValueNode = resultNode.FirstChild("falseBooleanValue");
    if(!falseBooleanValueNode.IsNull())
    {
      m_falseBooleanValue = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(falseBooleanValueNode.GetText()).c_str()).c_str());
    }
    XmlNode byteValueNode = resultNode.FirstChild("byteValue");
    if(!byteValueNode.IsNull())
    {
      m_byteValue = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(byteValueNode.GetText()).c_str()).c_str());
    }
    XmlNode shortValueNode = resultNode.FirstChild("shortValue");
    if(!shortValueNode.IsNull())
    {
      m_shortValue = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(shortValueNode.GetText()).c_str()).c_str());
    }
    XmlNode integerValueNode = resultNode.FirstChild("integerValue");
    if(!integerValueNode.IsNull())
    {
      m_integerValue = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(integerValueNode.GetText()).c_str()).c_str());
    }
    XmlNode longValueNode = resultNode.FirstChild("longValue");
    if(!longValueNode.IsNull())
    {
      m_longValue = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(longValueNode.GetText()).c_str()).c_str());
    }
    XmlNode floatValueNode = resultNode.FirstChild("floatValue");
    if(!floatValueNode.IsNull())
    {
      m_floatValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(floatValueNode.GetText()).c_str()).c_str());
    }
    XmlNode doubleValueNode = resultNode.FirstChild("DoubleDribble");
    if(!doubleValueNode.IsNull())
    {
      m_doubleValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(doubleValueNode.GetText()).c_str()).c_str());
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if(fooIter != headers.end())
  {
    m_foo = fooIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
