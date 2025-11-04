/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

MinimumThroughputBillingCommitmentInput::MinimumThroughputBillingCommitmentInput(JsonView jsonValue) { *this = jsonValue; }

MinimumThroughputBillingCommitmentInput& MinimumThroughputBillingCommitmentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = MinimumThroughputBillingCommitmentInputStatusMapper::GetMinimumThroughputBillingCommitmentInputStatusForName(
        jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue MinimumThroughputBillingCommitmentInput::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString(
        "Status", MinimumThroughputBillingCommitmentInputStatusMapper::GetNameForMinimumThroughputBillingCommitmentInputStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
