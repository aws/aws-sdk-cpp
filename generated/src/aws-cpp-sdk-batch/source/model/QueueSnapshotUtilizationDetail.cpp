/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QueueSnapshotUtilizationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QueueSnapshotUtilizationDetail::QueueSnapshotUtilizationDetail(JsonView jsonValue) { *this = jsonValue; }

QueueSnapshotUtilizationDetail& QueueSnapshotUtilizationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalCapacityUsage")) {
    Aws::Utils::Array<JsonView> totalCapacityUsageJsonList = jsonValue.GetArray("totalCapacityUsage");
    for (unsigned totalCapacityUsageIndex = 0; totalCapacityUsageIndex < totalCapacityUsageJsonList.GetLength();
         ++totalCapacityUsageIndex) {
      m_totalCapacityUsage.push_back(totalCapacityUsageJsonList[totalCapacityUsageIndex].AsObject());
    }
    m_totalCapacityUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fairshareUtilization")) {
    m_fairshareUtilization = jsonValue.GetObject("fairshareUtilization");
    m_fairshareUtilizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetInt64("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueSnapshotUtilizationDetail::Jsonize() const {
  JsonValue payload;

  if (m_totalCapacityUsageHasBeenSet) {
    Aws::Utils::Array<JsonValue> totalCapacityUsageJsonList(m_totalCapacityUsage.size());
    for (unsigned totalCapacityUsageIndex = 0; totalCapacityUsageIndex < totalCapacityUsageJsonList.GetLength();
         ++totalCapacityUsageIndex) {
      totalCapacityUsageJsonList[totalCapacityUsageIndex].AsObject(m_totalCapacityUsage[totalCapacityUsageIndex].Jsonize());
    }
    payload.WithArray("totalCapacityUsage", std::move(totalCapacityUsageJsonList));
  }

  if (m_fairshareUtilizationHasBeenSet) {
    payload.WithObject("fairshareUtilization", m_fairshareUtilization.Jsonize());
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithInt64("lastUpdatedAt", m_lastUpdatedAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
