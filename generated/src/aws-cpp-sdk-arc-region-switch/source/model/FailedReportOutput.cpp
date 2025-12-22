/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/FailedReportOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

FailedReportOutput::FailedReportOutput(JsonView jsonValue) { *this = jsonValue; }

FailedReportOutput& FailedReportOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = FailedReportErrorCodeMapper::GetFailedReportErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedReportOutput::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", FailedReportErrorCodeMapper::GetNameForFailedReportErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
