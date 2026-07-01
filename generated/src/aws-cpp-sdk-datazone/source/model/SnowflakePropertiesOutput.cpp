/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SnowflakePropertiesOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SnowflakePropertiesOutput::SnowflakePropertiesOutput(JsonView jsonValue) { *this = jsonValue; }

SnowflakePropertiesOutput& SnowflakePropertiesOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("snowflakeRole")) {
    m_snowflakeRole = jsonValue.GetString("snowflakeRole");
    m_snowflakeRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identityMapping")) {
    m_identityMapping = jsonValue.GetObject("identityMapping");
    m_identityMappingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineageSync")) {
    m_lineageSync = jsonValue.GetObject("lineageSync");
    m_lineageSyncHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakePropertiesOutput::Jsonize() const {
  JsonValue payload;

  if (m_snowflakeRoleHasBeenSet) {
    payload.WithString("snowflakeRole", m_snowflakeRole);
  }

  if (m_identityMappingHasBeenSet) {
    payload.WithObject("identityMapping", m_identityMapping.Jsonize());
  }

  if (m_lineageSyncHasBeenSet) {
    payload.WithObject("lineageSync", m_lineageSync.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
