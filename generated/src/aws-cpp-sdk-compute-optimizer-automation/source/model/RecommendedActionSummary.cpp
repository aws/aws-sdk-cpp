/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RecommendedActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

RecommendedActionSummary::RecommendedActionSummary(JsonView jsonValue) { *this = jsonValue; }

RecommendedActionSummary& RecommendedActionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("total")) {
    m_total = jsonValue.GetObject("total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendedActionSummary::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_totalHasBeenSet) {
    payload.WithObject("total", m_total.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
