﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>
#include <numeric>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InputAndOutputWithHeadersRequest::InputAndOutputWithHeadersRequest() : 
    m_headerStringHasBeenSet(false),
    m_headerByte(0),
    m_headerByteHasBeenSet(false),
    m_headerShort(0),
    m_headerShortHasBeenSet(false),
    m_headerInteger(0),
    m_headerIntegerHasBeenSet(false),
    m_headerLong(0),
    m_headerLongHasBeenSet(false),
    m_headerFloat(0.0),
    m_headerFloatHasBeenSet(false),
    m_headerDouble(0.0),
    m_headerDoubleHasBeenSet(false),
    m_headerTrueBool(false),
    m_headerTrueBoolHasBeenSet(false),
    m_headerFalseBool(false),
    m_headerFalseBoolHasBeenSet(false),
    m_headerStringListHasBeenSet(false),
    m_headerStringSetHasBeenSet(false),
    m_headerIntegerListHasBeenSet(false),
    m_headerBooleanListHasBeenSet(false),
    m_headerTimestampListHasBeenSet(false),
    m_headerEnum(FooEnum::NOT_SET),
    m_headerEnumHasBeenSet(false),
    m_headerEnumListHasBeenSet(false),
    m_headerIntegerEnum(0),
    m_headerIntegerEnumHasBeenSet(false),
    m_headerIntegerEnumListHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String InputAndOutputWithHeadersRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection InputAndOutputWithHeadersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_headerStringHasBeenSet)
  {
    ss << m_headerString;
    headers.emplace("x-string",  ss.str());
    ss.str("");
  }

  if(m_headerByteHasBeenSet)
  {
    ss << m_headerByte;
    headers.emplace("x-byte",  ss.str());
    ss.str("");
  }

  if(m_headerShortHasBeenSet)
  {
    ss << m_headerShort;
    headers.emplace("x-short",  ss.str());
    ss.str("");
  }

  if(m_headerIntegerHasBeenSet)
  {
    ss << m_headerInteger;
    headers.emplace("x-integer",  ss.str());
    ss.str("");
  }

  if(m_headerLongHasBeenSet)
  {
    ss << m_headerLong;
    headers.emplace("x-long",  ss.str());
    ss.str("");
  }

  if(m_headerFloatHasBeenSet)
  {
    ss << m_headerFloat;
    headers.emplace("x-float",  ss.str());
    ss.str("");
  }

  if(m_headerDoubleHasBeenSet)
  {
    ss << m_headerDouble;
    headers.emplace("x-double",  ss.str());
    ss.str("");
  }

  if(m_headerTrueBoolHasBeenSet)
  {
    ss << std::boolalpha << m_headerTrueBool;
    headers.emplace("x-boolean1", ss.str());
    ss.str("");
  }

  if(m_headerFalseBoolHasBeenSet)
  {
    ss << std::boolalpha << m_headerFalseBool;
    headers.emplace("x-boolean2", ss.str());
    ss.str("");
  }

  if(m_headerStringListHasBeenSet)
  {
    headers.emplace("x-stringlist", std::accumulate(std::begin(m_headerStringList),
      std::end(m_headerStringList),
      Aws::String{},
      [](const Aws::String &acc, const Aws::String &item) -> Aws::String {
        const auto headerValue = item;
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerStringSetHasBeenSet)
  {
    headers.emplace("x-stringset", std::accumulate(std::begin(m_headerStringSet),
      std::end(m_headerStringSet),
      Aws::String{},
      [](const Aws::String &acc, const Aws::String &item) -> Aws::String {
        const auto headerValue = item;
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerIntegerListHasBeenSet)
  {
    headers.emplace("x-integerlist", std::accumulate(std::begin(m_headerIntegerList),
      std::end(m_headerIntegerList),
      Aws::String{},
      [](const Aws::String &acc, const int &item) -> Aws::String {
        const auto headerValue = StringUtils::to_string(item);
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerBooleanListHasBeenSet)
  {
    headers.emplace("x-booleanlist", std::accumulate(std::begin(m_headerBooleanList),
      std::end(m_headerBooleanList),
      Aws::String{},
      [](const Aws::String &acc, const bool &item) -> Aws::String {
        const auto headerValue = StringUtils::to_string(item);
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerTimestampListHasBeenSet)
  {
    headers.emplace("x-timestamplist", std::accumulate(std::begin(m_headerTimestampList),
      std::end(m_headerTimestampList),
      Aws::String{},
      [](const Aws::String &acc, const Aws::Utils::DateTime &item) -> Aws::String {
        const auto headerValue = item.ToGmtString(Aws::Utils::DateFormat::RFC822);
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerEnumHasBeenSet && m_headerEnum != FooEnum::NOT_SET)
  {
    headers.emplace("x-enum", FooEnumMapper::GetNameForFooEnum(m_headerEnum));
  }

  if(m_headerEnumListHasBeenSet)
  {
    headers.emplace("x-enumlist", std::accumulate(std::begin(m_headerEnumList),
      std::end(m_headerEnumList),
      Aws::String{},
      [](const Aws::String &acc, const FooEnum &item) -> Aws::String {
        const auto headerValue = FooEnumMapper::GetNameForFooEnum(item);
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_headerIntegerEnumHasBeenSet)
  {
    ss << m_headerIntegerEnum;
    headers.emplace("x-integerenum",  ss.str());
    ss.str("");
  }

  if(m_headerIntegerEnumListHasBeenSet)
  {
    headers.emplace("x-integerenumlist", std::accumulate(std::begin(m_headerIntegerEnumList),
      std::end(m_headerIntegerEnumList),
      Aws::String{},
      [](const Aws::String &acc, const int &item) -> Aws::String {
        const auto headerValue = StringUtils::to_string(item);
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




