/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/WebAppConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

WebAppConfiguration::WebAppConfiguration(JsonView jsonValue) { *this = jsonValue; }

WebAppConfiguration& WebAppConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ehrRole")) {
    m_ehrRole = jsonValue.GetString("ehrRole");
    m_ehrRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcApplicationId")) {
    m_idcApplicationId = jsonValue.GetString("idcApplicationId");
    m_idcApplicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcRegion")) {
    m_idcRegion = jsonValue.GetString("idcRegion");
    m_idcRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue WebAppConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ehrRoleHasBeenSet) {
    payload.WithString("ehrRole", m_ehrRole);
  }

  if (m_idcApplicationIdHasBeenSet) {
    payload.WithString("idcApplicationId", m_idcApplicationId);
  }

  if (m_idcRegionHasBeenSet) {
    payload.WithString("idcRegion", m_idcRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
