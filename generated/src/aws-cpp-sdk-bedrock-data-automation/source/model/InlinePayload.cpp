/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/InlinePayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

InlinePayload::InlinePayload(JsonView jsonValue) { *this = jsonValue; }

InlinePayload& InlinePayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("upsertEntitiesInfo")) {
    Aws::Utils::Array<JsonView> upsertEntitiesInfoJsonList = jsonValue.GetArray("upsertEntitiesInfo");
    for (unsigned upsertEntitiesInfoIndex = 0; upsertEntitiesInfoIndex < upsertEntitiesInfoJsonList.GetLength();
         ++upsertEntitiesInfoIndex) {
      m_upsertEntitiesInfo.push_back(upsertEntitiesInfoJsonList[upsertEntitiesInfoIndex].AsObject());
    }
    m_upsertEntitiesInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deleteEntitiesInfo")) {
    m_deleteEntitiesInfo = jsonValue.GetObject("deleteEntitiesInfo");
    m_deleteEntitiesInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue InlinePayload::Jsonize() const {
  JsonValue payload;

  if (m_upsertEntitiesInfoHasBeenSet) {
    Aws::Utils::Array<JsonValue> upsertEntitiesInfoJsonList(m_upsertEntitiesInfo.size());
    for (unsigned upsertEntitiesInfoIndex = 0; upsertEntitiesInfoIndex < upsertEntitiesInfoJsonList.GetLength();
         ++upsertEntitiesInfoIndex) {
      upsertEntitiesInfoJsonList[upsertEntitiesInfoIndex].AsObject(m_upsertEntitiesInfo[upsertEntitiesInfoIndex].Jsonize());
    }
    payload.WithArray("upsertEntitiesInfo", std::move(upsertEntitiesInfoJsonList));
  }

  if (m_deleteEntitiesInfoHasBeenSet) {
    payload.WithObject("deleteEntitiesInfo", m_deleteEntitiesInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
