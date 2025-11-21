/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/SummaryDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

SummaryDimension::SummaryDimension(JsonView jsonValue) { *this = jsonValue; }

SummaryDimension& SummaryDimension::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = SummaryDimensionKeyMapper::GetSummaryDimensionKeyForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryDimension::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", SummaryDimensionKeyMapper::GetNameForSummaryDimensionKey(m_key));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
