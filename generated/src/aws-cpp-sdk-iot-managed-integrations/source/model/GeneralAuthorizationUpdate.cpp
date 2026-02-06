/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/model/GeneralAuthorizationUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {

GeneralAuthorizationUpdate::GeneralAuthorizationUpdate(JsonView jsonValue) { *this = jsonValue; }

GeneralAuthorizationUpdate& GeneralAuthorizationUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthMaterialsToAdd")) {
    Aws::Utils::Array<JsonView> authMaterialsToAddJsonList = jsonValue.GetArray("AuthMaterialsToAdd");
    for (unsigned authMaterialsToAddIndex = 0; authMaterialsToAddIndex < authMaterialsToAddJsonList.GetLength();
         ++authMaterialsToAddIndex) {
      m_authMaterialsToAdd.push_back(authMaterialsToAddJsonList[authMaterialsToAddIndex].AsObject());
    }
    m_authMaterialsToAddHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthMaterialsToUpdate")) {
    Aws::Utils::Array<JsonView> authMaterialsToUpdateJsonList = jsonValue.GetArray("AuthMaterialsToUpdate");
    for (unsigned authMaterialsToUpdateIndex = 0; authMaterialsToUpdateIndex < authMaterialsToUpdateJsonList.GetLength();
         ++authMaterialsToUpdateIndex) {
      m_authMaterialsToUpdate.push_back(authMaterialsToUpdateJsonList[authMaterialsToUpdateIndex].AsObject());
    }
    m_authMaterialsToUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue GeneralAuthorizationUpdate::Jsonize() const {
  JsonValue payload;

  if (m_authMaterialsToAddHasBeenSet) {
    Aws::Utils::Array<JsonValue> authMaterialsToAddJsonList(m_authMaterialsToAdd.size());
    for (unsigned authMaterialsToAddIndex = 0; authMaterialsToAddIndex < authMaterialsToAddJsonList.GetLength();
         ++authMaterialsToAddIndex) {
      authMaterialsToAddJsonList[authMaterialsToAddIndex].AsObject(m_authMaterialsToAdd[authMaterialsToAddIndex].Jsonize());
    }
    payload.WithArray("AuthMaterialsToAdd", std::move(authMaterialsToAddJsonList));
  }

  if (m_authMaterialsToUpdateHasBeenSet) {
    Aws::Utils::Array<JsonValue> authMaterialsToUpdateJsonList(m_authMaterialsToUpdate.size());
    for (unsigned authMaterialsToUpdateIndex = 0; authMaterialsToUpdateIndex < authMaterialsToUpdateJsonList.GetLength();
         ++authMaterialsToUpdateIndex) {
      authMaterialsToUpdateJsonList[authMaterialsToUpdateIndex].AsObject(m_authMaterialsToUpdate[authMaterialsToUpdateIndex].Jsonize());
    }
    payload.WithArray("AuthMaterialsToUpdate", std::move(authMaterialsToUpdateJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
