/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/ServiceAccountSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

ServiceAccountSummary::ServiceAccountSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceAccountSummary& ServiceAccountSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isDisabled")) {
    m_isDisabled = jsonValue.GetString("isDisabled");
    m_isDisabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grafanaRole")) {
    m_grafanaRole = RoleMapper::GetRoleForName(jsonValue.GetString("grafanaRole"));
    m_grafanaRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceAccountSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_isDisabledHasBeenSet) {
    payload.WithString("isDisabled", m_isDisabled);
  }

  if (m_grafanaRoleHasBeenSet) {
    payload.WithString("grafanaRole", RoleMapper::GetNameForRole(m_grafanaRole));
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
