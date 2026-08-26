/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/AccountConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

AccountConstraint::AccountConstraint(JsonView jsonValue) { *this = jsonValue; }

AccountConstraint& AccountConstraint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managementAccount")) {
    m_managementAccount = jsonValue.GetObject("managementAccount");
    m_managementAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delegatedAdmin")) {
    m_delegatedAdmin = jsonValue.GetObject("delegatedAdmin");
    m_delegatedAdminHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountConstraint::Jsonize() const {
  JsonValue payload;

  if (m_managementAccountHasBeenSet) {
    payload.WithObject("managementAccount", m_managementAccount.Jsonize());
  }

  if (m_delegatedAdminHasBeenSet) {
    payload.WithObject("delegatedAdmin", m_delegatedAdmin.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
