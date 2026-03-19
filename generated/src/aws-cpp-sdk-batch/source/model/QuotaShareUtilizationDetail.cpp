/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareUtilizationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

QuotaShareUtilizationDetail::QuotaShareUtilizationDetail(JsonView jsonValue) { *this = jsonValue; }

QuotaShareUtilizationDetail& QuotaShareUtilizationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topCapacityUtilization")) {
    Aws::Utils::Array<JsonView> topCapacityUtilizationJsonList = jsonValue.GetArray("topCapacityUtilization");
    for (unsigned topCapacityUtilizationIndex = 0; topCapacityUtilizationIndex < topCapacityUtilizationJsonList.GetLength();
         ++topCapacityUtilizationIndex) {
      m_topCapacityUtilization.push_back(topCapacityUtilizationJsonList[topCapacityUtilizationIndex].AsObject());
    }
    m_topCapacityUtilizationHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaShareUtilizationDetail::Jsonize() const {
  JsonValue payload;

  if (m_topCapacityUtilizationHasBeenSet) {
    Aws::Utils::Array<JsonValue> topCapacityUtilizationJsonList(m_topCapacityUtilization.size());
    for (unsigned topCapacityUtilizationIndex = 0; topCapacityUtilizationIndex < topCapacityUtilizationJsonList.GetLength();
         ++topCapacityUtilizationIndex) {
      topCapacityUtilizationJsonList[topCapacityUtilizationIndex].AsObject(m_topCapacityUtilization[topCapacityUtilizationIndex].Jsonize());
    }
    payload.WithArray("topCapacityUtilization", std::move(topCapacityUtilizationJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
