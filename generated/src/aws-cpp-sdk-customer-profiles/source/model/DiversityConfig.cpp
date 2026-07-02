/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/DiversityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

DiversityConfig::DiversityConfig(JsonView jsonValue) { *this = jsonValue; }

DiversityConfig& DiversityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DiversityColumns")) {
    Aws::Utils::Array<JsonView> diversityColumnsJsonList = jsonValue.GetArray("DiversityColumns");
    for (unsigned diversityColumnsIndex = 0; diversityColumnsIndex < diversityColumnsJsonList.GetLength(); ++diversityColumnsIndex) {
      m_diversityColumns.push_back(diversityColumnsJsonList[diversityColumnsIndex].AsObject());
    }
    m_diversityColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue DiversityConfig::Jsonize() const {
  JsonValue payload;

  if (m_diversityColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> diversityColumnsJsonList(m_diversityColumns.size());
    for (unsigned diversityColumnsIndex = 0; diversityColumnsIndex < diversityColumnsJsonList.GetLength(); ++diversityColumnsIndex) {
      diversityColumnsJsonList[diversityColumnsIndex].AsObject(m_diversityColumns[diversityColumnsIndex].Jsonize());
    }
    payload.WithArray("DiversityColumns", std::move(diversityColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
