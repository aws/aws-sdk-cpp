/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UserPolicyGrantPrincipal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

UserPolicyGrantPrincipal::UserPolicyGrantPrincipal(JsonView jsonValue) { *this = jsonValue; }

UserPolicyGrantPrincipal& UserPolicyGrantPrincipal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userIdentifier")) {
    m_userIdentifier = jsonValue.GetString("userIdentifier");
    m_userIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allUsersGrantFilter")) {
    m_allUsersGrantFilter = jsonValue.GetObject("allUsersGrantFilter");
    m_allUsersGrantFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPolicyGrantPrincipal::Jsonize() const {
  JsonValue payload;

  if (m_userIdentifierHasBeenSet) {
    payload.WithString("userIdentifier", m_userIdentifier);
  }

  if (m_allUsersGrantFilterHasBeenSet) {
    payload.WithObject("allUsersGrantFilter", m_allUsersGrantFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
