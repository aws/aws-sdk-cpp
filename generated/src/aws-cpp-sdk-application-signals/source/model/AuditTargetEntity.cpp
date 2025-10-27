/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/AuditTargetEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

AuditTargetEntity::AuditTargetEntity(JsonView jsonValue) { *this = jsonValue; }

AuditTargetEntity& AuditTargetEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetObject("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Slo")) {
    m_slo = jsonValue.GetObject("Slo");
    m_sloHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceOperation")) {
    m_serviceOperation = jsonValue.GetObject("ServiceOperation");
    m_serviceOperationHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditTargetEntity::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithObject("Service", m_service.Jsonize());
  }

  if (m_sloHasBeenSet) {
    payload.WithObject("Slo", m_slo.Jsonize());
  }

  if (m_serviceOperationHasBeenSet) {
    payload.WithObject("ServiceOperation", m_serviceOperation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
