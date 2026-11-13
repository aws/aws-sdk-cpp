/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/Compatibility.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

Compatibility::Compatibility(JsonView jsonValue) { *this = jsonValue; }

Compatibility& Compatibility::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IntegrationModels")) {
    Aws::Utils::Array<JsonView> integrationModelsJsonList = jsonValue.GetArray("IntegrationModels");
    for (unsigned integrationModelsIndex = 0; integrationModelsIndex < integrationModelsJsonList.GetLength(); ++integrationModelsIndex) {
      m_integrationModels.push_back(
          IntegrationModelMapper::GetIntegrationModelForName(integrationModelsJsonList[integrationModelsIndex].AsString()));
    }
    m_integrationModelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Architectures")) {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("Architectures");
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      m_architectures.push_back(
          RuntimeArchitectureMapper::GetRuntimeArchitectureForName(architecturesJsonList[architecturesIndex].AsString()));
    }
    m_architecturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedInstances")) {
    m_managedInstances = CompatibilityPolicyMapper::GetCompatibilityPolicyForName(jsonValue.GetString("ManagedInstances"));
    m_managedInstancesHasBeenSet = true;
  }
  return *this;
}

JsonValue Compatibility::Jsonize() const {
  JsonValue payload;

  if (m_integrationModelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> integrationModelsJsonList(m_integrationModels.size());
    for (unsigned integrationModelsIndex = 0; integrationModelsIndex < integrationModelsJsonList.GetLength(); ++integrationModelsIndex) {
      integrationModelsJsonList[integrationModelsIndex].AsString(
          IntegrationModelMapper::GetNameForIntegrationModel(m_integrationModels[integrationModelsIndex]));
    }
    payload.WithArray("IntegrationModels", std::move(integrationModelsJsonList));
  }

  if (m_architecturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      architecturesJsonList[architecturesIndex].AsString(
          RuntimeArchitectureMapper::GetNameForRuntimeArchitecture(m_architectures[architecturesIndex]));
    }
    payload.WithArray("Architectures", std::move(architecturesJsonList));
  }

  if (m_managedInstancesHasBeenSet) {
    payload.WithString("ManagedInstances", CompatibilityPolicyMapper::GetNameForCompatibilityPolicy(m_managedInstances));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
