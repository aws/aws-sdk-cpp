/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/model/GeneralAuthorizationName.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {

GeneralAuthorizationName::GeneralAuthorizationName(JsonView jsonValue) { *this = jsonValue; }

GeneralAuthorizationName& GeneralAuthorizationName::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthMaterialName")) {
    m_authMaterialName = jsonValue.GetString("AuthMaterialName");
    m_authMaterialNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GeneralAuthorizationName::Jsonize() const {
  JsonValue payload;

  if (m_authMaterialNameHasBeenSet) {
    payload.WithString("AuthMaterialName", m_authMaterialName);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
