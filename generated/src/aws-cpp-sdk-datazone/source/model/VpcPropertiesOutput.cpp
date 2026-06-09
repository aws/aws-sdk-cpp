/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/VpcPropertiesOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

VpcPropertiesOutput::VpcPropertiesOutput(JsonView jsonValue) { *this = jsonValue; }

VpcPropertiesOutput& VpcPropertiesOutput::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("status")) {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupId")) {
    m_securityGroupId = jsonValue.GetString("securityGroupId");
    m_securityGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("glueConnectionNames")) {
    Aws::Utils::Array<JsonView> glueConnectionNamesJsonList = jsonValue.GetArray("glueConnectionNames");
    for (unsigned glueConnectionNamesIndex = 0; glueConnectionNamesIndex < glueConnectionNamesJsonList.GetLength();
         ++glueConnectionNamesIndex) {
      m_glueConnectionNames.push_back(glueConnectionNamesJsonList[glueConnectionNamesIndex].AsString());
    }
    m_glueConnectionNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcPropertiesOutput::Jsonize() const {
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

  if (m_statusHasBeenSet) {
    payload.WithString("status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if (m_securityGroupIdHasBeenSet) {
    payload.WithString("securityGroupId", m_securityGroupId);
  }

  if (m_glueConnectionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> glueConnectionNamesJsonList(m_glueConnectionNames.size());
    for (unsigned glueConnectionNamesIndex = 0; glueConnectionNamesIndex < glueConnectionNamesJsonList.GetLength();
         ++glueConnectionNamesIndex) {
      glueConnectionNamesJsonList[glueConnectionNamesIndex].AsString(m_glueConnectionNames[glueConnectionNamesIndex]);
    }
    payload.WithArray("glueConnectionNames", std::move(glueConnectionNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
