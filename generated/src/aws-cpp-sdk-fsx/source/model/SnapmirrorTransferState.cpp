/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorTransferState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorTransferState::SnapmirrorTransferState(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorTransferState& SnapmirrorTransferState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BytesTransferred")) {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");
    m_bytesTransferredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetString("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorTransferState::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("State", m_state);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_bytesTransferredHasBeenSet) {
    payload.WithInt64("BytesTransferred", m_bytesTransferred);
  }

  if (m_durationHasBeenSet) {
    payload.WithString("Duration", m_duration);
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
