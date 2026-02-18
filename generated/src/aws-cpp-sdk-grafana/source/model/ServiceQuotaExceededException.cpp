/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/ServiceQuotaExceededException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

ServiceQuotaExceededException::ServiceQuotaExceededException(JsonView jsonValue) { *this = jsonValue; }

ServiceQuotaExceededException& ServiceQuotaExceededException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
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

JsonValue ServiceQuotaExceededException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
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
