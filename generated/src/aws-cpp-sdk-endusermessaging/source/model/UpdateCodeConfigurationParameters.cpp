/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateCodeConfigurationParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

UpdateCodeConfigurationParameters::UpdateCodeConfigurationParameters(JsonView jsonValue) { *this = jsonValue; }

UpdateCodeConfigurationParameters& UpdateCodeConfigurationParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeType")) {
    m_codeType = CodeTypeMapper::GetCodeTypeForName(jsonValue.GetString("codeType"));
    m_codeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeLength")) {
    m_codeLength = jsonValue.GetInteger("codeLength");
    m_codeLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validityPeriodMinutes")) {
    m_validityPeriodMinutes = jsonValue.GetInteger("validityPeriodMinutes");
    m_validityPeriodMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAttempts")) {
    m_maxAttempts = jsonValue.GetInteger("maxAttempts");
    m_maxAttemptsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateCodeConfigurationParameters::Jsonize() const {
  JsonValue payload;

  if (m_codeTypeHasBeenSet) {
    payload.WithString("codeType", CodeTypeMapper::GetNameForCodeType(m_codeType));
  }

  if (m_codeLengthHasBeenSet) {
    payload.WithInteger("codeLength", m_codeLength);
  }

  if (m_validityPeriodMinutesHasBeenSet) {
    payload.WithInteger("validityPeriodMinutes", m_validityPeriodMinutes);
  }

  if (m_maxAttemptsHasBeenSet) {
    payload.WithInteger("maxAttempts", m_maxAttempts);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
