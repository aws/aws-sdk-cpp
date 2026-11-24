/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/AuthorizationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

AuthorizationConfig::AuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

AuthorizationConfig& AuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("none")) {
    m_none = jsonValue.GetObject("none");
    m_noneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cognitoConfig")) {
    m_cognitoConfig = jsonValue.GetObject("cognitoConfig");
    m_cognitoConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_noneHasBeenSet) {
    payload.WithObject("none", m_none.Jsonize());
  }

  if (m_cognitoConfigHasBeenSet) {
    payload.WithObject("cognitoConfig", m_cognitoConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
