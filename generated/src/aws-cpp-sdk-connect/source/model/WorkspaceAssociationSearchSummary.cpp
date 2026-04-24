/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceAssociationSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspaceAssociationSearchSummary::WorkspaceAssociationSearchSummary(JsonView jsonValue) { *this = jsonValue; }

WorkspaceAssociationSearchSummary& WorkspaceAssociationSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkspaceId")) {
    m_workspaceId = jsonValue.GetString("WorkspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkspaceArn")) {
    m_workspaceArn = jsonValue.GetString("WorkspaceArn");
    m_workspaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceName")) {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceAssociationSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_workspaceIdHasBeenSet) {
    payload.WithString("WorkspaceId", m_workspaceId);
  }

  if (m_workspaceArnHasBeenSet) {
    payload.WithString("WorkspaceArn", m_workspaceArn);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("ResourceName", m_resourceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
