/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/IdentityCenterPrincipalFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

IdentityCenterPrincipalFilter::IdentityCenterPrincipalFilter(JsonView jsonValue) { *this = jsonValue; }

IdentityCenterPrincipalFilter& IdentityCenterPrincipalFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupId")) {
    m_groupId = jsonValue.GetString("groupId");
    m_groupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterPrincipalFilter::Jsonize() const {
  JsonValue payload;

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
