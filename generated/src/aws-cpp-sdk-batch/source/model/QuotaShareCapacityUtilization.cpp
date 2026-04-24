/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareCapacityUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaShareCapacityUtilization::QuotaShareCapacityUtilization(JsonView jsonValue) { *this = jsonValue; }

QuotaShareCapacityUtilization& QuotaShareCapacityUtilization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("quotaShareName")) {
    m_quotaShareName = jsonValue.GetString("quotaShareName");
    m_quotaShareNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityUsage")) {
    Aws::Utils::Array<JsonView> capacityUsageJsonList = jsonValue.GetArray("capacityUsage");
    for (unsigned capacityUsageIndex = 0; capacityUsageIndex < capacityUsageJsonList.GetLength(); ++capacityUsageIndex) {
      m_capacityUsage.push_back(capacityUsageJsonList[capacityUsageIndex].AsObject());
    }
    m_capacityUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaShareCapacityUtilization::Jsonize() const {
  JsonValue payload;

  if (m_quotaShareNameHasBeenSet) {
    payload.WithString("quotaShareName", m_quotaShareName);
  }

  if (m_capacityUsageHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityUsageJsonList(m_capacityUsage.size());
    for (unsigned capacityUsageIndex = 0; capacityUsageIndex < capacityUsageJsonList.GetLength(); ++capacityUsageIndex) {
      capacityUsageJsonList[capacityUsageIndex].AsObject(m_capacityUsage[capacityUsageIndex].Jsonize());
    }
    payload.WithArray("capacityUsage", std::move(capacityUsageJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
