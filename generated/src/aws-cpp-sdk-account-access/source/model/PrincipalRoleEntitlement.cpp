/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/PrincipalRoleEntitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

PrincipalRoleEntitlement::PrincipalRoleEntitlement(JsonView jsonValue) { *this = jsonValue; }

PrincipalRoleEntitlement& PrincipalRoleEntitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("principal")) {
    m_principal = jsonValue.GetObject("principal");
    m_principalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalRoleEntitlement::Jsonize() const {
  JsonValue payload;

  if (m_principalHasBeenSet) {
    payload.WithObject("principal", m_principal.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
