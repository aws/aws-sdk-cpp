/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/grafana/model/ThrottlingException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

ThrottlingException::ThrottlingException(JsonView jsonValue) { *this = jsonValue; }

ThrottlingException& ThrottlingException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceCode")) {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaCode")) {
    m_quotaCode = jsonValue.GetString("quotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottlingException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("serviceCode", m_serviceCode);
  }

  if (m_quotaCodeHasBeenSet) {
    payload.WithString("quotaCode", m_quotaCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
