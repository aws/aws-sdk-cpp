/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitHubAuthorizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitHubAuthorizationConfiguration::GitHubAuthorizationConfiguration(JsonView jsonValue) { *this = jsonValue; }

GitHubAuthorizationConfiguration& GitHubAuthorizationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationCode")) {
    m_authorizationCode = jsonValue.GetString("authorizationCode");
    m_authorizationCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redirectUrl")) {
    m_redirectUrl = jsonValue.GetString("redirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubAuthorizationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_authorizationCodeHasBeenSet) {
    payload.WithString("authorizationCode", m_authorizationCode);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", m_state);
  }

  if (m_redirectUrlHasBeenSet) {
    payload.WithString("redirectUrl", m_redirectUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
