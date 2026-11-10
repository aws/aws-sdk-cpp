/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/AnyResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

AnyResource::AnyResource(JsonView jsonValue) { *this = jsonValue; }

AnyResource& AnyResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = AnyResourceSupportedTypesMapper::GetAnyResourceSupportedTypesForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AnyResource::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", AnyResourceSupportedTypesMapper::GetNameForAnyResourceSupportedTypes(m_resourceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
