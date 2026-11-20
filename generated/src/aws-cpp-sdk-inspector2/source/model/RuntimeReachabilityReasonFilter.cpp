/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/RuntimeReachabilityReasonFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

RuntimeReachabilityReasonFilter::RuntimeReachabilityReasonFilter(JsonView jsonValue) { *this = jsonValue; }

RuntimeReachabilityReasonFilter& RuntimeReachabilityReasonFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparison")) {
    m_comparison = RuntimeReachabilityComparisonMapper::GetRuntimeReachabilityComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = RuntimeReachabilityReasonMapper::GetRuntimeReachabilityReasonForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeReachabilityReasonFilter::Jsonize() const {
  JsonValue payload;

  if (m_comparisonHasBeenSet) {
    payload.WithString("comparison", RuntimeReachabilityComparisonMapper::GetNameForRuntimeReachabilityComparison(m_comparison));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", RuntimeReachabilityReasonMapper::GetNameForRuntimeReachabilityReason(m_value));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
