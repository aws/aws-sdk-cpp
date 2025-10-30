/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/IgnoreNearExpected.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

IgnoreNearExpected::IgnoreNearExpected(JsonView jsonValue) { *this = jsonValue; }

IgnoreNearExpected& IgnoreNearExpected::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ratio")) {
    m_ratio = jsonValue.GetDouble("ratio");
    m_ratioHasBeenSet = true;
  }
  return *this;
}

JsonValue IgnoreNearExpected::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithDouble("amount", m_amount);
  }

  if (m_ratioHasBeenSet) {
    payload.WithDouble("ratio", m_ratio);
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
