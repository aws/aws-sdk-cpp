/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DatabricksTableReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

DatabricksTableReference::DatabricksTableReference(JsonView jsonValue) { *this = jsonValue; }

DatabricksTableReference& DatabricksTableReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schemaName")) {
    m_schemaName = jsonValue.GetString("schemaName");
    m_schemaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableName")) {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceUrl")) {
    m_workspaceUrl = jsonValue.GetString("workspaceUrl");
    m_workspaceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionType")) {
    m_connectionType = jsonValue.GetObject("connectionType");
    m_connectionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabricksTableReference::Jsonize() const {
  JsonValue payload;

  if (m_schemaNameHasBeenSet) {
    payload.WithString("schemaName", m_schemaName);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("tableName", m_tableName);
  }

  if (m_workspaceUrlHasBeenSet) {
    payload.WithString("workspaceUrl", m_workspaceUrl);
  }

  if (m_connectionTypeHasBeenSet) {
    payload.WithObject("connectionType", m_connectionType.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
