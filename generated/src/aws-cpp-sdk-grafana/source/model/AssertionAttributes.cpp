/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/AssertionAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

AssertionAttributes::AssertionAttributes(JsonView jsonValue) { *this = jsonValue; }

AssertionAttributes& AssertionAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("login")) {
    m_login = jsonValue.GetString("login");
    m_loginHasBeenSet = true;
  }
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groups")) {
    m_groups = jsonValue.GetString("groups");
    m_groupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("org")) {
    m_org = jsonValue.GetString("org");
    m_orgHasBeenSet = true;
  }
  return *this;
}

JsonValue AssertionAttributes::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_loginHasBeenSet) {
    payload.WithString("login", m_login);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  if (m_groupsHasBeenSet) {
    payload.WithString("groups", m_groups);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", m_role);
  }

  if (m_orgHasBeenSet) {
    payload.WithString("org", m_org);
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
