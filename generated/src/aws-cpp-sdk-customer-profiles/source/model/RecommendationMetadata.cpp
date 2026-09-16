/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommendationMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommendationMetadata::RecommendationMetadata(JsonView jsonValue) { *this = jsonValue; }

RecommendationMetadata& RecommendationMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Columns")) {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for (unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex) {
      m_columns.push_back(columnsJsonList[columnsIndex].AsString());
    }
    m_columnsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationMetadata::Jsonize() const {
  JsonValue payload;

  if (m_columnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
    for (unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex) {
      columnsJsonList[columnsIndex].AsString(m_columns[columnsIndex]);
    }
    payload.WithArray("Columns", std::move(columnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
