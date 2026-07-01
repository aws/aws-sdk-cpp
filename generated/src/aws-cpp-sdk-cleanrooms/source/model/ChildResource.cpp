/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChildResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ChildResource::ChildResource(JsonView jsonValue) { *this = jsonValue; }

ChildResource& ChildResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ChildResourceTypeMapper::GetChildResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceName")) {
    m_resourceName = jsonValue.GetString("resourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceStatus")) {
    m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("resourceStatus"));
    m_resourceStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ChildResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ChildResourceTypeMapper::GetNameForChildResourceType(m_resourceType));
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("resourceName", m_resourceName);
  }

  if (m_ownerAccountIdHasBeenSet) {
    payload.WithString("ownerAccountId", m_ownerAccountId);
  }

  if (m_resourceStatusHasBeenSet) {
    payload.WithString("resourceStatus", ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
