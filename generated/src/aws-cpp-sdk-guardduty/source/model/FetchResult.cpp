/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FetchResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FetchResult::FetchResult(JsonView jsonValue) { *this = jsonValue; }

FetchResult& FetchResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("itemIds")) {
    Aws::Utils::Array<JsonView> itemIdsJsonList = jsonValue.GetArray("itemIds");
    for (unsigned itemIdsIndex = 0; itemIdsIndex < itemIdsJsonList.GetLength(); ++itemIdsIndex) {
      m_itemIds.push_back(itemIdsJsonList[itemIdsIndex].AsString());
    }
    m_itemIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCount")) {
    m_totalCount = jsonValue.GetInt64("totalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("features")) {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      m_features.push_back(featuresJsonList[featuresIndex].AsObject());
    }
    m_featuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verdict")) {
    m_verdict = FetchVerdictMapper::GetFetchVerdictForName(jsonValue.GetString("verdict"));
    m_verdictHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentation")) {
    m_documentation = jsonValue.GetObject("documentation");
    m_documentationHasBeenSet = true;
  }
  return *this;
}

JsonValue FetchResult::Jsonize() const {
  JsonValue payload;

  if (m_itemIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemIdsJsonList(m_itemIds.size());
    for (unsigned itemIdsIndex = 0; itemIdsIndex < itemIdsJsonList.GetLength(); ++itemIdsIndex) {
      itemIdsJsonList[itemIdsIndex].AsString(m_itemIds[itemIdsIndex]);
    }
    payload.WithArray("itemIds", std::move(itemIdsJsonList));
  }

  if (m_totalCountHasBeenSet) {
    payload.WithInt64("totalCount", m_totalCount);
  }

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
    }
    payload.WithArray("features", std::move(featuresJsonList));
  }

  if (m_verdictHasBeenSet) {
    payload.WithString("verdict", FetchVerdictMapper::GetNameForFetchVerdict(m_verdict));
  }

  if (m_documentationHasBeenSet) {
    payload.WithObject("documentation", m_documentation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
