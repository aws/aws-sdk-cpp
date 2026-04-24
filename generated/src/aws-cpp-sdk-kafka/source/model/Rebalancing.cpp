/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/Rebalancing.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

Rebalancing::Rebalancing(JsonView jsonValue) { *this = jsonValue; }

Rebalancing& Rebalancing::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = RebalancingStatusMapper::GetRebalancingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue Rebalancing::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", RebalancingStatusMapper::GetNameForRebalancingStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
