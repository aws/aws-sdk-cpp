/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/VpcPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

VpcPropertiesInput::VpcPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

VpcPropertiesInput& VpcPropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupId")) {
    m_securityGroupId = jsonValue.GetString("securityGroupId");
    m_securityGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcPropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdHasBeenSet) {
    payload.WithString("securityGroupId", m_securityGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
