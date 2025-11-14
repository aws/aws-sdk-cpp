/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AssetPermission.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AssetPermission::AssetPermission(JsonView jsonValue) { *this = jsonValue; }

AssetPermission& AssetPermission::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetId")) {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissions")) {
    m_permissions = jsonValue.GetObject("permissions");
    m_permissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetPermission::Jsonize() const {
  JsonValue payload;

  if (m_assetIdHasBeenSet) {
    payload.WithString("assetId", m_assetId);
  }

  if (m_permissionsHasBeenSet) {
    payload.WithObject("permissions", m_permissions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
