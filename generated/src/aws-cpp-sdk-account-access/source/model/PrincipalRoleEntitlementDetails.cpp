/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/PrincipalRoleEntitlementDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

PrincipalRoleEntitlementDetails::PrincipalRoleEntitlementDetails(JsonView jsonValue) { *this = jsonValue; }

PrincipalRoleEntitlementDetails& PrincipalRoleEntitlementDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("principal")) {
    m_principal = jsonValue.GetObject("principal");
    m_principalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("account")) {
    m_account = jsonValue.GetString("account");
    m_accountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountName")) {
    m_accountName = jsonValue.GetString("accountName");
    m_accountNameHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalRoleEntitlementDetails::Jsonize() const {
  JsonValue payload;

  if (m_principalHasBeenSet) {
    payload.WithObject("principal", m_principal.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_accountHasBeenSet) {
    payload.WithString("account", m_account);
  }

  if (m_accountNameHasBeenSet) {
    payload.WithString("accountName", m_accountName);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
