/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SystemTableStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {

SystemTableStatus::SystemTableStatus(JsonView jsonValue) { *this = jsonValue; }

SystemTableStatus& SystemTableStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = SystemTableTypeMapper::GetSystemTableTypeForName(jsonValue.GetString("TableName"));
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemTableStatus::Jsonize() const {
  JsonValue payload;

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", SystemTableTypeMapper::GetNameForSystemTableType(m_tableName));
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
