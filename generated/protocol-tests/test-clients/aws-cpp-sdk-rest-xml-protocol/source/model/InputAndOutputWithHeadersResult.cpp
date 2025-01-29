/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

InputAndOutputWithHeadersResult::InputAndOutputWithHeadersResult() : 
    m_headerByte(0),
    m_headerShort(0),
    m_headerInteger(0),
    m_headerLong(0),
    m_headerFloat(0.0),
    m_headerDouble(0.0),
    m_headerTrueBool(false),
    m_headerFalseBool(false),
    m_headerEnum(FooEnum::NOT_SET)
{
}

InputAndOutputWithHeadersResult::InputAndOutputWithHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : InputAndOutputWithHeadersResult()
{
  *this = result;
}

InputAndOutputWithHeadersResult& InputAndOutputWithHeadersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& headerStringIter = headers.find("x-string");
  if(headerStringIter != headers.end())
  {
    m_headerString = headerStringIter->second;
  }

  const auto& headerByteIter = headers.find("x-byte");
  if(headerByteIter != headers.end())
  {
     m_headerByte = StringUtils::ConvertToInt32(headerByteIter->second.c_str());
  }

  const auto& headerShortIter = headers.find("x-short");
  if(headerShortIter != headers.end())
  {
     m_headerShort = StringUtils::ConvertToInt32(headerShortIter->second.c_str());
  }

  const auto& headerIntegerIter = headers.find("x-integer");
  if(headerIntegerIter != headers.end())
  {
     m_headerInteger = StringUtils::ConvertToInt32(headerIntegerIter->second.c_str());
  }

  const auto& headerLongIter = headers.find("x-long");
  if(headerLongIter != headers.end())
  {
     m_headerLong = StringUtils::ConvertToInt64(headerLongIter->second.c_str());
  }

  const auto& headerFloatIter = headers.find("x-float");
  if(headerFloatIter != headers.end())
  {
     m_headerFloat = StringUtils::ConvertToDouble(headerFloatIter->second.c_str());
  }

  const auto& headerDoubleIter = headers.find("x-double");
  if(headerDoubleIter != headers.end())
  {
     m_headerDouble = StringUtils::ConvertToDouble(headerDoubleIter->second.c_str());
  }

  const auto& headerTrueBoolIter = headers.find("x-boolean1");
  if(headerTrueBoolIter != headers.end())
  {
     m_headerTrueBool = StringUtils::ConvertToBool(headerTrueBoolIter->second.c_str());
  }

  const auto& headerFalseBoolIter = headers.find("x-boolean2");
  if(headerFalseBoolIter != headers.end())
  {
     m_headerFalseBool = StringUtils::ConvertToBool(headerFalseBoolIter->second.c_str());
  }

  const auto& headerStringListIter = headers.find("x-stringlist");
  if(headerStringListIter != headers.end())
  {
  }

  const auto& headerStringSetIter = headers.find("x-stringset");
  if(headerStringSetIter != headers.end())
  {
  }

  const auto& headerIntegerListIter = headers.find("x-integerlist");
  if(headerIntegerListIter != headers.end())
  {
  }

  const auto& headerBooleanListIter = headers.find("x-booleanlist");
  if(headerBooleanListIter != headers.end())
  {
  }

  const auto& headerTimestampListIter = headers.find("x-timestamplist");
  if(headerTimestampListIter != headers.end())
  {
  }

  const auto& headerEnumIter = headers.find("x-enum");
  if(headerEnumIter != headers.end())
  {
    m_headerEnum = FooEnumMapper::GetFooEnumForName(headerEnumIter->second);
  }

  const auto& headerEnumListIter = headers.find("x-enumlist");
  if(headerEnumListIter != headers.end())
  {
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
