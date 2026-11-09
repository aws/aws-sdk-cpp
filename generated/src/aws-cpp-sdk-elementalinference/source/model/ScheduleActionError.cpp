/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ScheduleActionError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ScheduleActionError::ScheduleActionError(JsonView jsonValue) { *this = jsonValue; }

ScheduleActionError& ScheduleActionError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = ScheduleActionErrorCodeMapper::GetScheduleActionErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleActionError::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", ScheduleActionErrorCodeMapper::GetNameForScheduleActionErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
