/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/UpdateArgoCdConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

UpdateArgoCdConfig::UpdateArgoCdConfig(JsonView jsonValue) { *this = jsonValue; }

UpdateArgoCdConfig& UpdateArgoCdConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rbacRoleMappings")) {
    m_rbacRoleMappings = jsonValue.GetObject("rbacRoleMappings");
    m_rbacRoleMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkAccess")) {
    m_networkAccess = jsonValue.GetObject("networkAccess");
    m_networkAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateArgoCdConfig::Jsonize() const {
  JsonValue payload;

  if (m_rbacRoleMappingsHasBeenSet) {
    payload.WithObject("rbacRoleMappings", m_rbacRoleMappings.Jsonize());
  }

  if (m_networkAccessHasBeenSet) {
    payload.WithObject("networkAccess", m_networkAccess.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
