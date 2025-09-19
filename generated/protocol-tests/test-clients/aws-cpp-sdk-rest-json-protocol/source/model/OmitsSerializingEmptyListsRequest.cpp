/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/OmitsSerializingEmptyListsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String OmitsSerializingEmptyListsRequest::SerializePayload() const { return {}; }

void OmitsSerializingEmptyListsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_queryStringListHasBeenSet) {
    for (const auto& item : m_queryStringList) {
      ss << item;
      uri.AddQueryStringParameter("StringList", ss.str());
      ss.str("");
    }
  }

  if (m_queryIntegerListHasBeenSet) {
    for (const auto& item : m_queryIntegerList) {
      ss << item;
      uri.AddQueryStringParameter("IntegerList", ss.str());
      ss.str("");
    }
  }

  if (m_queryDoubleListHasBeenSet) {
    for (const auto& item : m_queryDoubleList) {
      ss << item;
      uri.AddQueryStringParameter("DoubleList", ss.str());
      ss.str("");
    }
  }

  if (m_queryBooleanListHasBeenSet) {
    for (const auto& item : m_queryBooleanList) {
      ss << item;
      uri.AddQueryStringParameter("BooleanList", ss.str());
      ss.str("");
    }
  }

  if (m_queryTimestampListHasBeenSet) {
    for (const auto& item : m_queryTimestampList) {
      ss << item.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("TimestampList", ss.str());
      ss.str("");
    }
  }

  if (m_queryEnumListHasBeenSet) {
    for (const auto& item : m_queryEnumList) {
      ss << FooEnumMapper::GetNameForFooEnum(item);
      uri.AddQueryStringParameter("EnumList", ss.str());
      ss.str("");
    }
  }

  if (m_queryIntegerEnumListHasBeenSet) {
    for (const auto& item : m_queryIntegerEnumList) {
      ss << item;
      uri.AddQueryStringParameter("IntegerEnumList", ss.str());
      ss.str("");
    }
  }
}
