/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/model/AuthConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {

AuthConfig::AuthConfig(JsonView jsonValue) { *this = jsonValue; }

AuthConfig& AuthConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oAuth")) {
    m_oAuth = jsonValue.GetObject("oAuth");
    m_oAuthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GeneralAuthorization")) {
    Aws::Utils::Array<JsonView> generalAuthorizationJsonList = jsonValue.GetArray("GeneralAuthorization");
    for (unsigned generalAuthorizationIndex = 0; generalAuthorizationIndex < generalAuthorizationJsonList.GetLength();
         ++generalAuthorizationIndex) {
      m_generalAuthorization.push_back(generalAuthorizationJsonList[generalAuthorizationIndex].AsObject());
    }
    m_generalAuthorizationHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfig::Jsonize() const {
  JsonValue payload;

  if (m_oAuthHasBeenSet) {
    payload.WithObject("oAuth", m_oAuth.Jsonize());
  }

  if (m_generalAuthorizationHasBeenSet) {
    Aws::Utils::Array<JsonValue> generalAuthorizationJsonList(m_generalAuthorization.size());
    for (unsigned generalAuthorizationIndex = 0; generalAuthorizationIndex < generalAuthorizationJsonList.GetLength();
         ++generalAuthorizationIndex) {
      generalAuthorizationJsonList[generalAuthorizationIndex].AsObject(m_generalAuthorization[generalAuthorizationIndex].Jsonize());
    }
    payload.WithArray("GeneralAuthorization", std::move(generalAuthorizationJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
