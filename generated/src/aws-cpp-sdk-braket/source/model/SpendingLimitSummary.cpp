/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SpendingLimitSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {

SpendingLimitSummary::SpendingLimitSummary(JsonView jsonValue) { *this = jsonValue; }

SpendingLimitSummary& SpendingLimitSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spendingLimitArn")) {
    m_spendingLimitArn = jsonValue.GetString("spendingLimitArn");
    m_spendingLimitArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deviceArn")) {
    m_deviceArn = jsonValue.GetString("deviceArn");
    m_deviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timePeriod")) {
    m_timePeriod = jsonValue.GetObject("timePeriod");
    m_timePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spendingLimit")) {
    m_spendingLimit = jsonValue.GetString("spendingLimit");
    m_spendingLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queuedSpend")) {
    m_queuedSpend = jsonValue.GetString("queuedSpend");
    m_queuedSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSpend")) {
    m_totalSpend = jsonValue.GetString("totalSpend");
    m_totalSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpendingLimitSummary::Jsonize() const {
  JsonValue payload;

  if (m_spendingLimitArnHasBeenSet) {
    payload.WithString("spendingLimitArn", m_spendingLimitArn);
  }

  if (m_deviceArnHasBeenSet) {
    payload.WithString("deviceArn", m_deviceArn);
  }

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("timePeriod", m_timePeriod.Jsonize());
  }

  if (m_spendingLimitHasBeenSet) {
    payload.WithString("spendingLimit", m_spendingLimit);
  }

  if (m_queuedSpendHasBeenSet) {
    payload.WithString("queuedSpend", m_queuedSpend);
  }

  if (m_totalSpendHasBeenSet) {
    payload.WithString("totalSpend", m_totalSpend);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
