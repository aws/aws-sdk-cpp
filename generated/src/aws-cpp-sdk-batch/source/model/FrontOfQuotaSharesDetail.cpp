/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FrontOfQuotaSharesDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

FrontOfQuotaSharesDetail::FrontOfQuotaSharesDetail(JsonView jsonValue) { *this = jsonValue; }

FrontOfQuotaSharesDetail& FrontOfQuotaSharesDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("quotaShares")) {
    Aws::Map<Aws::String, JsonView> quotaSharesJsonMap = jsonValue.GetObject("quotaShares").GetAllObjects();
    for (auto& quotaSharesItem : quotaSharesJsonMap) {
      Aws::Utils::Array<JsonView> frontOfQuotaShareJobSummaryList2JsonList = quotaSharesItem.second.AsArray();
      Aws::Vector<FrontOfQuotaShareJobSummary> frontOfQuotaShareJobSummaryList2List;
      frontOfQuotaShareJobSummaryList2List.reserve((size_t)frontOfQuotaShareJobSummaryList2JsonList.GetLength());
      for (unsigned frontOfQuotaShareJobSummaryList2Index = 0;
           frontOfQuotaShareJobSummaryList2Index < frontOfQuotaShareJobSummaryList2JsonList.GetLength();
           ++frontOfQuotaShareJobSummaryList2Index) {
        frontOfQuotaShareJobSummaryList2List.push_back(
            frontOfQuotaShareJobSummaryList2JsonList[frontOfQuotaShareJobSummaryList2Index].AsObject());
      }
      m_quotaShares[quotaSharesItem.first] = std::move(frontOfQuotaShareJobSummaryList2List);
    }
    m_quotaSharesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetInt64("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FrontOfQuotaSharesDetail::Jsonize() const {
  JsonValue payload;

  if (m_quotaSharesHasBeenSet) {
    JsonValue quotaSharesJsonMap;
    for (auto& quotaSharesItem : m_quotaShares) {
      Aws::Utils::Array<JsonValue> frontOfQuotaShareJobSummaryListJsonList(quotaSharesItem.second.size());
      for (unsigned frontOfQuotaShareJobSummaryListIndex = 0;
           frontOfQuotaShareJobSummaryListIndex < frontOfQuotaShareJobSummaryListJsonList.GetLength();
           ++frontOfQuotaShareJobSummaryListIndex) {
        frontOfQuotaShareJobSummaryListJsonList[frontOfQuotaShareJobSummaryListIndex].AsObject(
            quotaSharesItem.second[frontOfQuotaShareJobSummaryListIndex].Jsonize());
      }
      quotaSharesJsonMap.WithArray(quotaSharesItem.first, std::move(frontOfQuotaShareJobSummaryListJsonList));
    }
    payload.WithObject("quotaShares", std::move(quotaSharesJsonMap));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithInt64("lastUpdatedAt", m_lastUpdatedAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
