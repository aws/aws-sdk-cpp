/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConformancePacksFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

DescribeConformancePacksFilters::DescribeConformancePacksFilters(JsonView jsonValue) { *this = jsonValue; }

DescribeConformancePacksFilters& DescribeConformancePacksFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Types")) {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      m_types.push_back(ConformancePackTypeMapper::GetConformancePackTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeConformancePacksFilters::Jsonize() const {
  JsonValue payload;

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(ConformancePackTypeMapper::GetNameForConformancePackType(m_types[typesIndex]));
    }
    payload.WithArray("Types", std::move(typesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
