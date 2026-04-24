/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ArgoCdRoleMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ArgoCdRoleMapping::ArgoCdRoleMapping(JsonView jsonValue) { *this = jsonValue; }

ArgoCdRoleMapping& ArgoCdRoleMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("role")) {
    m_role = ArgoCdRoleMapper::GetArgoCdRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identities")) {
    Aws::Utils::Array<JsonView> identitiesJsonList = jsonValue.GetArray("identities");
    for (unsigned identitiesIndex = 0; identitiesIndex < identitiesJsonList.GetLength(); ++identitiesIndex) {
      m_identities.push_back(identitiesJsonList[identitiesIndex].AsObject());
    }
    m_identitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ArgoCdRoleMapping::Jsonize() const {
  JsonValue payload;

  if (m_roleHasBeenSet) {
    payload.WithString("role", ArgoCdRoleMapper::GetNameForArgoCdRole(m_role));
  }

  if (m_identitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> identitiesJsonList(m_identities.size());
    for (unsigned identitiesIndex = 0; identitiesIndex < identitiesJsonList.GetLength(); ++identitiesIndex) {
      identitiesJsonList[identitiesIndex].AsObject(m_identities[identitiesIndex].Jsonize());
    }
    payload.WithArray("identities", std::move(identitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
