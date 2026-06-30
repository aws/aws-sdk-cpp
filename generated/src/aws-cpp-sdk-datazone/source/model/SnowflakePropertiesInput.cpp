/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SnowflakePropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SnowflakePropertiesInput::SnowflakePropertiesInput(JsonView jsonValue) { *this = jsonValue; }

SnowflakePropertiesInput& SnowflakePropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectivityProperties")) {
    m_connectivityProperties = jsonValue.GetObject("connectivityProperties");
    m_connectivityPropertiesHasBeenSet = true;
  }
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
  return *this;
}

JsonValue SnowflakePropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_connectivityPropertiesHasBeenSet) {
    payload.WithObject("connectivityProperties", m_connectivityProperties.Jsonize());
  }

  if (m_snowflakeRoleHasBeenSet) {
    payload.WithString("snowflakeRole", m_snowflakeRole);
  }

  if (m_identityMappingHasBeenSet) {
    payload.WithObject("identityMapping", m_identityMapping.Jsonize());
  }

  if (m_lineageSyncHasBeenSet) {
    payload.WithObject("lineageSync", m_lineageSync.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
