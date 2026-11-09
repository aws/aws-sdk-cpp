/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/GoogleOidcConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

GoogleOidcConfig::GoogleOidcConfig(JsonView jsonValue) { *this = jsonValue; }

GoogleOidcConfig& GoogleOidcConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProjectName")) {
    m_projectName = jsonValue.GetString("ProjectName");
    m_projectNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectNumber")) {
    m_projectNumber = jsonValue.GetString("ProjectNumber");
    m_projectNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityPoolName")) {
    m_identityPoolName = jsonValue.GetString("IdentityPoolName");
    m_identityPoolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityProviderName")) {
    m_identityProviderName = jsonValue.GetString("IdentityProviderName");
    m_identityProviderNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GoogleOidcConfig::Jsonize() const {
  JsonValue payload;

  if (m_projectNameHasBeenSet) {
    payload.WithString("ProjectName", m_projectName);
  }

  if (m_projectNumberHasBeenSet) {
    payload.WithString("ProjectNumber", m_projectNumber);
  }

  if (m_identityPoolNameHasBeenSet) {
    payload.WithString("IdentityPoolName", m_identityPoolName);
  }

  if (m_identityProviderNameHasBeenSet) {
    payload.WithString("IdentityProviderName", m_identityProviderName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
