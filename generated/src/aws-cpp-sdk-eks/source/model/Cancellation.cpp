/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/Cancellation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

Cancellation::Cancellation(JsonView jsonValue) { *this = jsonValue; }

Cancellation& Cancellation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = CancellationStatusMapper::GetCancellationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue Cancellation::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", CancellationStatusMapper::GetNameForCancellationStatus(m_status));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
