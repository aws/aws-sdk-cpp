/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/InstanceTypeEsxVersionsInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {

InstanceTypeEsxVersionsInfo::InstanceTypeEsxVersionsInfo(JsonView jsonValue) { *this = jsonValue; }

InstanceTypeEsxVersionsInfo& InstanceTypeEsxVersionsInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceType")) {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("esxVersions")) {
    Aws::Utils::Array<JsonView> esxVersionsJsonList = jsonValue.GetArray("esxVersions");
    for (unsigned esxVersionsIndex = 0; esxVersionsIndex < esxVersionsJsonList.GetLength(); ++esxVersionsIndex) {
      m_esxVersions.push_back(esxVersionsJsonList[esxVersionsIndex].AsString());
    }
    m_esxVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceTypeEsxVersionsInfo::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if (m_esxVersionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> esxVersionsJsonList(m_esxVersions.size());
    for (unsigned esxVersionsIndex = 0; esxVersionsIndex < esxVersionsJsonList.GetLength(); ++esxVersionsIndex) {
      esxVersionsJsonList[esxVersionsIndex].AsString(m_esxVersions[esxVersionsIndex]);
    }
    payload.WithArray("esxVersions", std::move(esxVersionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
