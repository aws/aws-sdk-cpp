/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/model/ProgrammaticAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccessRuntime {
namespace Model {

ProgrammaticAccessDetails::ProgrammaticAccessDetails(JsonView jsonValue) { *this = jsonValue; }

ProgrammaticAccessDetails& ProgrammaticAccessDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessKeyId")) {
    m_accessKeyId = jsonValue.GetString("accessKeyId");
    m_accessKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretAccessKey")) {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");
    m_secretAccessKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionToken")) {
    m_sessionToken = jsonValue.GetString("sessionToken");
    m_sessionTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgrammaticAccessDetails::Jsonize() const {
  JsonValue payload;

  if (m_accessKeyIdHasBeenSet) {
    payload.WithString("accessKeyId", m_accessKeyId);
  }

  if (m_secretAccessKeyHasBeenSet) {
    payload.WithString("secretAccessKey", m_secretAccessKey);
  }

  if (m_sessionTokenHasBeenSet) {
    payload.WithString("sessionToken", m_sessionToken);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
