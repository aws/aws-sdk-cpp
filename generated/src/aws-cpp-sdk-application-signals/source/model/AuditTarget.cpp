/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/AuditTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

AuditTarget::AuditTarget(JsonView jsonValue) { *this = jsonValue; }

AuditTarget& AuditTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Data")) {
    m_data = jsonValue.GetObject("Data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditTarget::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_dataHasBeenSet) {
    payload.WithObject("Data", m_data.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
