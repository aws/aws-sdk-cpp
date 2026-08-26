/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/DelegatedAdminConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

DelegatedAdminConstraint::DelegatedAdminConstraint(JsonView jsonValue) { *this = jsonValue; }

DelegatedAdminConstraint& DelegatedAdminConstraint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("servicePrincipal")) {
    m_servicePrincipal = jsonValue.GetString("servicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  return *this;
}

JsonValue DelegatedAdminConstraint::Jsonize() const {
  JsonValue payload;

  if (m_servicePrincipalHasBeenSet) {
    payload.WithString("servicePrincipal", m_servicePrincipal);
  }

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
