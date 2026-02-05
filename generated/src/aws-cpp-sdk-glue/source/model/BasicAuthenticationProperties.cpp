/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/BasicAuthenticationProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

BasicAuthenticationProperties::BasicAuthenticationProperties(JsonView jsonValue) { *this = jsonValue; }

BasicAuthenticationProperties& BasicAuthenticationProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Username")) {
    m_username = jsonValue.GetObject("Username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Password")) {
    m_password = jsonValue.GetObject("Password");
    m_passwordHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicAuthenticationProperties::Jsonize() const {
  JsonValue payload;

  if (m_usernameHasBeenSet) {
    payload.WithObject("Username", m_username.Jsonize());
  }

  if (m_passwordHasBeenSet) {
    payload.WithObject("Password", m_password.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
