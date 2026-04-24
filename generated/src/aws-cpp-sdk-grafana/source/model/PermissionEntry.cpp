/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/PermissionEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

PermissionEntry::PermissionEntry(JsonView jsonValue) { *this = jsonValue; }

PermissionEntry& PermissionEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("user")) {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionEntry::Jsonize() const {
  JsonValue payload;

  if (m_userHasBeenSet) {
    payload.WithObject("user", m_user.Jsonize());
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", RoleMapper::GetNameForRole(m_role));
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
