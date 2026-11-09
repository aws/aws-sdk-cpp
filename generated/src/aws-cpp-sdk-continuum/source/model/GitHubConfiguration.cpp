/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitHubConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitHubConfiguration::GitHubConfiguration(JsonView jsonValue) { *this = jsonValue; }

GitHubConfiguration& GitHubConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorization")) {
    m_authorization = jsonValue.GetObject("authorization");
    m_authorizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationName")) {
    m_organizationName = jsonValue.GetString("organizationName");
    m_organizationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_authorizationHasBeenSet) {
    payload.WithObject("authorization", m_authorization.Jsonize());
  }

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
