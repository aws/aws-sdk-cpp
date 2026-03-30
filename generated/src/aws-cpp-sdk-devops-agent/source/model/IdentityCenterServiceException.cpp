/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/IdentityCenterServiceException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

IdentityCenterServiceException::IdentityCenterServiceException(JsonView jsonValue) { *this = jsonValue; }

IdentityCenterServiceException& IdentityCenterServiceException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("underlyingErrorCode")) {
    m_underlyingErrorCode = jsonValue.GetString("underlyingErrorCode");
    m_underlyingErrorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterServiceException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_underlyingErrorCodeHasBeenSet) {
    payload.WithString("underlyingErrorCode", m_underlyingErrorCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
