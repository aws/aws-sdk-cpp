/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/AuthConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppIntegrationsService {
namespace Model {

AuthConfig::AuthConfig(JsonView jsonValue) { *this = jsonValue; }

AuthConfig& AuthConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CredentialProviderIdentifier")) {
    m_credentialProviderIdentifier = jsonValue.GetString("CredentialProviderIdentifier");
    m_credentialProviderIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfig::Jsonize() const {
  JsonValue payload;

  if (m_authTypeHasBeenSet) {
    payload.WithString("AuthType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if (m_credentialProviderIdentifierHasBeenSet) {
    payload.WithString("CredentialProviderIdentifier", m_credentialProviderIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
