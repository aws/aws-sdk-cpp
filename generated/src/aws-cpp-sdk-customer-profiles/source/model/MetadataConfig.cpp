/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/MetadataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

MetadataConfig::MetadataConfig(JsonView jsonValue) { *this = jsonValue; }

MetadataConfig& MetadataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetadataColumns")) {
    Aws::Utils::Array<JsonView> metadataColumnsJsonList = jsonValue.GetArray("MetadataColumns");
    for (unsigned metadataColumnsIndex = 0; metadataColumnsIndex < metadataColumnsJsonList.GetLength(); ++metadataColumnsIndex) {
      m_metadataColumns.push_back(metadataColumnsJsonList[metadataColumnsIndex].AsString());
    }
    m_metadataColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataConfig::Jsonize() const {
  JsonValue payload;

  if (m_metadataColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metadataColumnsJsonList(m_metadataColumns.size());
    for (unsigned metadataColumnsIndex = 0; metadataColumnsIndex < metadataColumnsJsonList.GetLength(); ++metadataColumnsIndex) {
      metadataColumnsJsonList[metadataColumnsIndex].AsString(m_metadataColumns[metadataColumnsIndex]);
    }
    payload.WithArray("MetadataColumns", std::move(metadataColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
