/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/Group.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {

Group::Group(JsonView jsonValue) { *this = jsonValue; }

Group& Group::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupId")) {
    m_groupId = jsonValue.GetString("GroupId");
    m_groupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupArn")) {
    m_groupArn = jsonValue.GetString("GroupArn");
    m_groupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetString("Revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExternalIds")) {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("ExternalIds");
    for (unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex) {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsObject());
    }
    m_externalIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedBy")) {
    m_updatedBy = jsonValue.GetString("UpdatedBy");
    m_updatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue Group::Jsonize() const {
  JsonValue payload;

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("GroupId", m_groupId);
  }

  if (m_groupArnHasBeenSet) {
    payload.WithString("GroupArn", m_groupArn);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("Revision", m_revision);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_externalIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> externalIdsJsonList(m_externalIds.size());
    for (unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex) {
      externalIdsJsonList[externalIdsIndex].AsObject(m_externalIds[externalIdsIndex].Jsonize());
    }
    payload.WithArray("ExternalIds", std::move(externalIdsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("UpdatedBy", m_updatedBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
