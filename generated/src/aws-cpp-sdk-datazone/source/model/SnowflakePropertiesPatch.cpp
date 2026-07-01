/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SnowflakePropertiesPatch.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

SnowflakePropertiesPatch::SnowflakePropertiesPatch(JsonView jsonValue) { *this = jsonValue; }

SnowflakePropertiesPatch& SnowflakePropertiesPatch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectivityPropertiesPatch")) {
    m_connectivityPropertiesPatch = jsonValue.GetObject("connectivityPropertiesPatch");
    m_connectivityPropertiesPatchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("snowflakeRole")) {
    m_snowflakeRole = jsonValue.GetString("snowflakeRole");
    m_snowflakeRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineageSync")) {
    m_lineageSync = jsonValue.GetObject("lineageSync");
    m_lineageSyncHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakePropertiesPatch::Jsonize() const {
  JsonValue payload;

  if (m_connectivityPropertiesPatchHasBeenSet) {
    payload.WithObject("connectivityPropertiesPatch", m_connectivityPropertiesPatch.Jsonize());
  }

  if (m_snowflakeRoleHasBeenSet) {
    payload.WithString("snowflakeRole", m_snowflakeRole);
  }

  if (m_lineageSyncHasBeenSet) {
    payload.WithObject("lineageSync", m_lineageSync.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
