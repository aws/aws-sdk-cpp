/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/TimeOffValidationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {

TimeOffValidationResult::TimeOffValidationResult(JsonView jsonValue) { *this = jsonValue; }

TimeOffValidationResult& TimeOffValidationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Severity")) {
    m_severity = TimeOffValidationSeverityMapper::GetTimeOffValidationSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = TimeOffValidationCodeMapper::GetTimeOffValidationCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeOffValidationResult::Jsonize() const {
  JsonValue payload;

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", TimeOffValidationSeverityMapper::GetNameForTimeOffValidationSeverity(m_severity));
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", TimeOffValidationCodeMapper::GetNameForTimeOffValidationCode(m_code));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
