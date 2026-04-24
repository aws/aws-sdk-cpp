/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/model/AuthMaterial.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {

AuthMaterial::AuthMaterial(JsonView jsonValue) { *this = jsonValue; }

AuthMaterial& AuthMaterial::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SecretsManager")) {
    m_secretsManager = jsonValue.GetObject("SecretsManager");
    m_secretsManagerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthMaterialName")) {
    m_authMaterialName = jsonValue.GetString("AuthMaterialName");
    m_authMaterialNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthMaterial::Jsonize() const {
  JsonValue payload;

  if (m_secretsManagerHasBeenSet) {
    payload.WithObject("SecretsManager", m_secretsManager.Jsonize());
  }

  if (m_authMaterialNameHasBeenSet) {
    payload.WithString("AuthMaterialName", m_authMaterialName);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
