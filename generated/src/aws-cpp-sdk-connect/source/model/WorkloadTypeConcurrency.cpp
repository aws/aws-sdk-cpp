/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkloadTypeConcurrency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkloadTypeConcurrency::WorkloadTypeConcurrency(JsonView jsonValue) { *this = jsonValue; }

WorkloadTypeConcurrency& WorkloadTypeConcurrency::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkloadType")) {
    m_workloadType = jsonValue.GetString("WorkloadType");
    m_workloadTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Concurrency")) {
    m_concurrency = jsonValue.GetInteger("Concurrency");
    m_concurrencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CrossChannelWorkloadBehavior")) {
    m_crossChannelWorkloadBehavior = jsonValue.GetObject("CrossChannelWorkloadBehavior");
    m_crossChannelWorkloadBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadTypeConcurrency::Jsonize() const {
  JsonValue payload;

  if (m_workloadTypeHasBeenSet) {
    payload.WithString("WorkloadType", m_workloadType);
  }

  if (m_concurrencyHasBeenSet) {
    payload.WithInteger("Concurrency", m_concurrency);
  }

  if (m_crossChannelWorkloadBehaviorHasBeenSet) {
    payload.WithObject("CrossChannelWorkloadBehavior", m_crossChannelWorkloadBehavior.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
