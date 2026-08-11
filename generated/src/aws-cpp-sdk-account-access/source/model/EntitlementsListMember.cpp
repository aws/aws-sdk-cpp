/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/EntitlementsListMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

EntitlementsListMember::EntitlementsListMember(JsonView jsonValue) { *this = jsonValue; }

EntitlementsListMember& EntitlementsListMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entitlementId")) {
    m_entitlementId = jsonValue.GetString("entitlementId");
    m_entitlementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entitlement")) {
    m_entitlement = jsonValue.GetObject("entitlement");
    m_entitlementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue EntitlementsListMember::Jsonize() const {
  JsonValue payload;

  if (m_entitlementIdHasBeenSet) {
    payload.WithString("entitlementId", m_entitlementId);
  }

  if (m_entitlementHasBeenSet) {
    payload.WithObject("entitlement", m_entitlement.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
