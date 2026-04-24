/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/UserContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

UserContext::UserContext(JsonView jsonValue) { *this = jsonValue; }

UserContext& UserContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = ProviderRoleMapper::GetProviderRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specialty")) {
    m_specialty = SpecialtyMapper::GetSpecialtyForName(jsonValue.GetString("specialty"));
    m_specialtyHasBeenSet = true;
  }
  return *this;
}

JsonValue UserContext::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", ProviderRoleMapper::GetNameForProviderRole(m_role));
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_specialtyHasBeenSet) {
    payload.WithString("specialty", SpecialtyMapper::GetNameForSpecialty(m_specialty));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
