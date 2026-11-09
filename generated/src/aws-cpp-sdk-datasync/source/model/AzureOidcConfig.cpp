/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/AzureOidcConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

AzureOidcConfig::AzureOidcConfig(JsonView jsonValue) { *this = jsonValue; }

AzureOidcConfig& AzureOidcConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TenantId")) {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureOidcConfig::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdHasBeenSet) {
    payload.WithString("TenantId", m_tenantId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
