/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/PrincipalFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

PrincipalFilter::PrincipalFilter(JsonView jsonValue) { *this = jsonValue; }

PrincipalFilter& PrincipalFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identityCenter")) {
    m_identityCenter = jsonValue.GetObject("identityCenter");
    m_identityCenterHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalFilter::Jsonize() const {
  JsonValue payload;

  if (m_identityCenterHasBeenSet) {
    payload.WithObject("identityCenter", m_identityCenter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
