/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobCapacityUsageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ServiceJobCapacityUsageSummary::ServiceJobCapacityUsageSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceJobCapacityUsageSummary& ServiceJobCapacityUsageSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityUnit")) {
    m_capacityUnit = jsonValue.GetString("capacityUnit");
    m_capacityUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quantity")) {
    m_quantity = jsonValue.GetDouble("quantity");
    m_quantityHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobCapacityUsageSummary::Jsonize() const {
  JsonValue payload;

  if (m_capacityUnitHasBeenSet) {
    payload.WithString("capacityUnit", m_capacityUnit);
  }

  if (m_quantityHasBeenSet) {
    payload.WithDouble("quantity", m_quantity);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
