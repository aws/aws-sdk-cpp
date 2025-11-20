/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/TenancyConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

TenancyConfig::TenancyConfig(JsonView jsonValue) { *this = jsonValue; }

TenancyConfig& TenancyConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TenantIsolationMode")) {
    m_tenantIsolationMode = TenantIsolationModeMapper::GetTenantIsolationModeForName(jsonValue.GetString("TenantIsolationMode"));
    m_tenantIsolationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue TenancyConfig::Jsonize() const {
  JsonValue payload;

  if (m_tenantIsolationModeHasBeenSet) {
    payload.WithString("TenantIsolationMode", TenantIsolationModeMapper::GetNameForTenantIsolationMode(m_tenantIsolationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
