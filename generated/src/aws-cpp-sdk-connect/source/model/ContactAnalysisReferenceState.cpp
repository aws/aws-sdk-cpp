/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactAnalysisReferenceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactAnalysisReferenceState::ContactAnalysisReferenceState(JsonView jsonValue) { *this = jsonValue; }

ContactAnalysisReferenceState& ContactAnalysisReferenceState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactAnalysisReferenceState::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", m_status);
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("StatusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
