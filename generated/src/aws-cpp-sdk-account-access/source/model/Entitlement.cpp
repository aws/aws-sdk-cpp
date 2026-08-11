/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/Entitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

Entitlement::Entitlement(JsonView jsonValue) { *this = jsonValue; }

Entitlement& Entitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("principalRole")) {
    m_principalRole = jsonValue.GetObject("principalRole");
    m_principalRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue Entitlement::Jsonize() const {
  JsonValue payload;

  if (m_principalRoleHasBeenSet) {
    payload.WithObject("principalRole", m_principalRole.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
