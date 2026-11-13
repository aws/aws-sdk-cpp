/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ProtectedJobError::ProtectedJobError(JsonView jsonValue) { *this = jsonValue; }

ProtectedJobError& ProtectedJobError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retry")) {
    m_retry = jsonValue.GetObject("retry");
    m_retryHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedJobError::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_retryHasBeenSet) {
    payload.WithObject("retry", m_retry.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
