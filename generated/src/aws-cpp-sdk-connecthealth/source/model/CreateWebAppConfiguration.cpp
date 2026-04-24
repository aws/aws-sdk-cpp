/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/CreateWebAppConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

CreateWebAppConfiguration::CreateWebAppConfiguration(JsonView jsonValue) { *this = jsonValue; }

CreateWebAppConfiguration& CreateWebAppConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ehrRole")) {
    m_ehrRole = jsonValue.GetString("ehrRole");
    m_ehrRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcInstanceId")) {
    m_idcInstanceId = jsonValue.GetString("idcInstanceId");
    m_idcInstanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcRegion")) {
    m_idcRegion = jsonValue.GetString("idcRegion");
    m_idcRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateWebAppConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ehrRoleHasBeenSet) {
    payload.WithString("ehrRole", m_ehrRole);
  }

  if (m_idcInstanceIdHasBeenSet) {
    payload.WithString("idcInstanceId", m_idcInstanceId);
  }

  if (m_idcRegionHasBeenSet) {
    payload.WithString("idcRegion", m_idcRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
