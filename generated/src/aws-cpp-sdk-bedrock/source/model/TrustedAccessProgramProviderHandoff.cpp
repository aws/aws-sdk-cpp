/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramProviderHandoff.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

TrustedAccessProgramProviderHandoff::TrustedAccessProgramProviderHandoff(JsonView jsonValue) { *this = jsonValue; }

TrustedAccessProgramProviderHandoff& TrustedAccessProgramProviderHandoff::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enrollmentUrl")) {
    m_enrollmentUrl = jsonValue.GetString("enrollmentUrl");
    m_enrollmentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationToken")) {
    m_applicationToken = jsonValue.GetString("applicationToken");
    m_applicationTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationTokenExpiresAt")) {
    m_applicationTokenExpiresAt = jsonValue.GetString("applicationTokenExpiresAt");
    m_applicationTokenExpiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedAccessProgramProviderHandoff::Jsonize() const {
  JsonValue payload;

  if (m_enrollmentUrlHasBeenSet) {
    payload.WithString("enrollmentUrl", m_enrollmentUrl);
  }

  if (m_applicationTokenHasBeenSet) {
    payload.WithString("applicationToken", m_applicationToken);
  }

  if (m_applicationTokenExpiresAtHasBeenSet) {
    payload.WithString("applicationTokenExpiresAt", m_applicationTokenExpiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
