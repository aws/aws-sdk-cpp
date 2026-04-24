/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/GroupMembership.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {

GroupMembership::GroupMembership(JsonView jsonValue) { *this = jsonValue; }

GroupMembership& GroupMembership::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MembershipId")) {
    m_membershipId = jsonValue.GetString("MembershipId");
    m_membershipIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupId")) {
    m_groupId = jsonValue.GetString("GroupId");
    m_groupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MemberId")) {
    m_memberId = jsonValue.GetObject("MemberId");
    m_memberIdHasBeenSet = true;
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

JsonValue GroupMembership::Jsonize() const {
  JsonValue payload;

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  if (m_membershipIdHasBeenSet) {
    payload.WithString("MembershipId", m_membershipId);
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("GroupId", m_groupId);
  }

  if (m_memberIdHasBeenSet) {
    payload.WithObject("MemberId", m_memberId.Jsonize());
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
