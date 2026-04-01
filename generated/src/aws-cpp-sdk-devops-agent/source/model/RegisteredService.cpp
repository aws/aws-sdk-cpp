/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredService.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredService::RegisteredService(JsonView jsonValue) { *this = jsonValue; }

RegisteredService& RegisteredService::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceId")) {
    m_serviceId = jsonValue.GetString("serviceId");
    m_serviceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceType")) {
    m_serviceType = ServiceMapper::GetServiceForName(jsonValue.GetString("serviceType"));
    m_serviceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessibleResources")) {
    Aws::Utils::Array<JsonView> accessibleResourcesJsonList = jsonValue.GetArray("accessibleResources");
    for (unsigned accessibleResourcesIndex = 0; accessibleResourcesIndex < accessibleResourcesJsonList.GetLength();
         ++accessibleResourcesIndex) {
      m_accessibleResources.push_back(accessibleResourcesJsonList[accessibleResourcesIndex].AsObject());
    }
    m_accessibleResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalServiceDetails")) {
    m_additionalServiceDetails = jsonValue.GetObject("additionalServiceDetails");
    m_additionalServiceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateConnectionName")) {
    m_privateConnectionName = jsonValue.GetString("privateConnectionName");
    m_privateConnectionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredService::Jsonize() const {
  JsonValue payload;

  if (m_serviceIdHasBeenSet) {
    payload.WithString("serviceId", m_serviceId);
  }

  if (m_serviceTypeHasBeenSet) {
    payload.WithString("serviceType", ServiceMapper::GetNameForService(m_serviceType));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_accessibleResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> accessibleResourcesJsonList(m_accessibleResources.size());
    for (unsigned accessibleResourcesIndex = 0; accessibleResourcesIndex < accessibleResourcesJsonList.GetLength();
         ++accessibleResourcesIndex) {
      accessibleResourcesJsonList[accessibleResourcesIndex].AsObject(m_accessibleResources[accessibleResourcesIndex].View());
    }
    payload.WithArray("accessibleResources", std::move(accessibleResourcesJsonList));
  }

  if (m_additionalServiceDetailsHasBeenSet) {
    payload.WithObject("additionalServiceDetails", m_additionalServiceDetails.Jsonize());
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_privateConnectionNameHasBeenSet) {
    payload.WithString("privateConnectionName", m_privateConnectionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
