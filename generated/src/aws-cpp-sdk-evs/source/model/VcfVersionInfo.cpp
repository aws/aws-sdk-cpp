/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/VcfVersionInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {

VcfVersionInfo::VcfVersionInfo(JsonView jsonValue) { *this = jsonValue; }

VcfVersionInfo& VcfVersionInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vcfVersion")) {
    m_vcfVersion = VcfVersionMapper::GetVcfVersionForName(jsonValue.GetString("vcfVersion"));
    m_vcfVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultEsxVersion")) {
    m_defaultEsxVersion = jsonValue.GetString("defaultEsxVersion");
    m_defaultEsxVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceTypes")) {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("instanceTypes");
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      m_instanceTypes.push_back(InstanceTypeMapper::GetInstanceTypeForName(instanceTypesJsonList[instanceTypesIndex].AsString()));
    }
    m_instanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue VcfVersionInfo::Jsonize() const {
  JsonValue payload;

  if (m_vcfVersionHasBeenSet) {
    payload.WithString("vcfVersion", VcfVersionMapper::GetNameForVcfVersion(m_vcfVersion));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_defaultEsxVersionHasBeenSet) {
    payload.WithString("defaultEsxVersion", m_defaultEsxVersion);
  }

  if (m_instanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
    for (unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex) {
      instanceTypesJsonList[instanceTypesIndex].AsString(InstanceTypeMapper::GetNameForInstanceType(m_instanceTypes[instanceTypesIndex]));
    }
    payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
