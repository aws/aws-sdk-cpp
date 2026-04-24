/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/AllQueryStringTypesRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String AllQueryStringTypesRequest::SerializePayload() const { return {}; }

void AllQueryStringTypesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_queryStringHasBeenSet) {
    ss << m_queryString;
    uri.AddQueryStringParameter("String", ss.str());
    ss.str("");
  }

  if (m_queryStringListHasBeenSet) {
    for (const auto& item : m_queryStringList) {
      ss << item;
      uri.AddQueryStringParameter("StringList", ss.str());
      ss.str("");
    }
  }

  if (m_queryStringSetHasBeenSet) {
    for (const auto& item : m_queryStringSet) {
      ss << item;
      uri.AddQueryStringParameter("StringSet", ss.str());
      ss.str("");
    }
  }

  if (m_queryByteHasBeenSet) {
    ss << m_queryByte;
    uri.AddQueryStringParameter("Byte", ss.str());
    ss.str("");
  }

  if (m_queryShortHasBeenSet) {
    ss << m_queryShort;
    uri.AddQueryStringParameter("Short", ss.str());
    ss.str("");
  }

  if (m_queryIntegerHasBeenSet) {
    ss << m_queryInteger;
    uri.AddQueryStringParameter("Integer", ss.str());
    ss.str("");
  }

  if (m_queryIntegerListHasBeenSet) {
    for (const auto& item : m_queryIntegerList) {
      ss << item;
      uri.AddQueryStringParameter("IntegerList", ss.str());
      ss.str("");
    }
  }

  if (m_queryIntegerSetHasBeenSet) {
    for (const auto& item : m_queryIntegerSet) {
      ss << item;
      uri.AddQueryStringParameter("IntegerSet", ss.str());
      ss.str("");
    }
  }

  if (m_queryLongHasBeenSet) {
    ss << m_queryLong;
    uri.AddQueryStringParameter("Long", ss.str());
    ss.str("");
  }

  if (m_queryFloatHasBeenSet) {
    ss << m_queryFloat;
    uri.AddQueryStringParameter("Float", ss.str());
    ss.str("");
  }

  if (m_queryDoubleHasBeenSet) {
    ss << m_queryDouble;
    uri.AddQueryStringParameter("Double", ss.str());
    ss.str("");
  }

  if (m_queryDoubleListHasBeenSet) {
    for (const auto& item : m_queryDoubleList) {
      ss << item;
      uri.AddQueryStringParameter("DoubleList", ss.str());
      ss.str("");
    }
  }

  if (m_queryBooleanHasBeenSet) {
    ss << m_queryBoolean;
    uri.AddQueryStringParameter("Boolean", ss.str());
    ss.str("");
  }

  if (m_queryBooleanListHasBeenSet) {
    for (const auto& item : m_queryBooleanList) {
      ss << item;
      uri.AddQueryStringParameter("BooleanList", ss.str());
      ss.str("");
    }
  }

  if (m_queryTimestampHasBeenSet) {
    ss << m_queryTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("Timestamp", ss.str());
    ss.str("");
  }

  if (m_queryTimestampListHasBeenSet) {
    for (const auto& item : m_queryTimestampList) {
      ss << item.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("TimestampList", ss.str());
      ss.str("");
    }
  }

  if (m_queryEnumHasBeenSet) {
    ss << FooEnumMapper::GetNameForFooEnum(m_queryEnum);
    uri.AddQueryStringParameter("Enum", ss.str());
    ss.str("");
  }

  if (m_queryEnumListHasBeenSet) {
    for (const auto& item : m_queryEnumList) {
      ss << FooEnumMapper::GetNameForFooEnum(item);
      uri.AddQueryStringParameter("EnumList", ss.str());
      ss.str("");
    }
  }

  if (m_queryIntegerEnumHasBeenSet) {
    ss << m_queryIntegerEnum;
    uri.AddQueryStringParameter("IntegerEnum", ss.str());
    ss.str("");
  }

  if (m_queryIntegerEnumListHasBeenSet) {
    for (const auto& item : m_queryIntegerEnumList) {
      ss << item;
      uri.AddQueryStringParameter("IntegerEnumList", ss.str());
      ss.str("");
    }
  }

  if (m_queryParamsMapOfStringListHasBeenSet) {
    for (auto& item : m_queryParamsMapOfStringList) {
      for (auto& innerItem : item.second) {
        ss << innerItem;
        uri.AddQueryStringParameter(item.first.c_str(), ss.str());
        ss.str("");
      }
    }
  }
}
