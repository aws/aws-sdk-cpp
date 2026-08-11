/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/IdentityCenterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {

IdentityCenterDetails::IdentityCenterDetails(JsonView jsonValue) { *this = jsonValue; }

IdentityCenterDetails& IdentityCenterDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceArn")) {
    m_instanceArn = jsonValue.GetString("instanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationArn")) {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterDetails::Jsonize() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("instanceArn", m_instanceArn);
  }

  if (m_applicationArnHasBeenSet) {
    payload.WithString("applicationArn", m_applicationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
