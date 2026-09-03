/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ApiCall.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ApiCall::ApiCall(JsonView jsonValue) { *this = jsonValue; }

ApiCall& ApiCall::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operation")) {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgent")) {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiCall::Jsonize() const {
  JsonValue payload;

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  if (m_userAgentHasBeenSet) {
    payload.WithString("userAgent", m_userAgent);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
