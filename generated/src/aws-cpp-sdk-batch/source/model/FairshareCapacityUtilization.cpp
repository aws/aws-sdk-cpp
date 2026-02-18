/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FairshareCapacityUtilization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

FairshareCapacityUtilization::FairshareCapacityUtilization(JsonView jsonValue) { *this = jsonValue; }

FairshareCapacityUtilization& FairshareCapacityUtilization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("shareIdentifier")) {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");
    m_shareIdentifierHasBeenSet = true;
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

JsonValue FairshareCapacityUtilization::Jsonize() const {
  JsonValue payload;

  if (m_shareIdentifierHasBeenSet) {
    payload.WithString("shareIdentifier", m_shareIdentifier);
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
