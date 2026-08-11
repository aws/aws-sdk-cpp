/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/IdentityCenter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

IdentityCenter::IdentityCenter(JsonView jsonValue) { *this = jsonValue; }

IdentityCenter& IdentityCenter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceArn")) {
    m_instanceArn = jsonValue.GetString("instanceArn");
    m_instanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenter::Jsonize() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("instanceArn", m_instanceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
