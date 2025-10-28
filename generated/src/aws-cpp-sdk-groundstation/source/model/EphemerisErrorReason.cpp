/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/EphemerisErrorReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

EphemerisErrorReason::EphemerisErrorReason(JsonView jsonValue) { *this = jsonValue; }

EphemerisErrorReason& EphemerisErrorReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = EphemerisErrorCodeMapper::GetEphemerisErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemerisErrorReason::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", EphemerisErrorCodeMapper::GetNameForEphemerisErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
