/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/InstanceRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

InstanceRequirements::InstanceRequirements(JsonView jsonValue) { *this = jsonValue; }

InstanceRequirements& InstanceRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Architectures")) {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("Architectures");
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      m_architectures.push_back(ArchitectureMapper::GetArchitectureForName(architecturesJsonList[architecturesIndex].AsString()));
    }
    m_architecturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedInstanceTypes")) {
    Aws::Utils::Array<JsonView> allowedInstanceTypesJsonList = jsonValue.GetArray("AllowedInstanceTypes");
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      m_allowedInstanceTypes.push_back(allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString());
    }
    m_allowedInstanceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExcludedInstanceTypes")) {
    Aws::Utils::Array<JsonView> excludedInstanceTypesJsonList = jsonValue.GetArray("ExcludedInstanceTypes");
    for (unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength();
         ++excludedInstanceTypesIndex) {
      m_excludedInstanceTypes.push_back(excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString());
    }
    m_excludedInstanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRequirements::Jsonize() const {
  JsonValue payload;

  if (m_architecturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
    for (unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex) {
      architecturesJsonList[architecturesIndex].AsString(ArchitectureMapper::GetNameForArchitecture(m_architectures[architecturesIndex]));
    }
    payload.WithArray("Architectures", std::move(architecturesJsonList));
  }

  if (m_allowedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedInstanceTypesJsonList(m_allowedInstanceTypes.size());
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString(m_allowedInstanceTypes[allowedInstanceTypesIndex]);
    }
    payload.WithArray("AllowedInstanceTypes", std::move(allowedInstanceTypesJsonList));
  }

  if (m_excludedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedInstanceTypesJsonList(m_excludedInstanceTypes.size());
    for (unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength();
         ++excludedInstanceTypesIndex) {
      excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString(m_excludedInstanceTypes[excludedInstanceTypesIndex]);
    }
    payload.WithArray("ExcludedInstanceTypes", std::move(excludedInstanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
