/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/NetworkConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue) { *this = jsonValue; }

NetworkConfiguration& NetworkConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpceAccessRequired")) {
    m_vpceAccessRequired = jsonValue.GetBool("VpceAccessRequired");
    m_vpceAccessRequiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApiRestrictSourceVpcs")) {
    Aws::Utils::Array<JsonView> apiRestrictSourceVpcsJsonList = jsonValue.GetArray("ApiRestrictSourceVpcs");
    for (unsigned apiRestrictSourceVpcsIndex = 0; apiRestrictSourceVpcsIndex < apiRestrictSourceVpcsJsonList.GetLength();
         ++apiRestrictSourceVpcsIndex) {
      m_apiRestrictSourceVpcs.push_back(apiRestrictSourceVpcsJsonList[apiRestrictSourceVpcsIndex].AsString());
    }
    m_apiRestrictSourceVpcsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApiAllowSourceIps")) {
    Aws::Utils::Array<JsonView> apiAllowSourceIpsJsonList = jsonValue.GetArray("ApiAllowSourceIps");
    for (unsigned apiAllowSourceIpsIndex = 0; apiAllowSourceIpsIndex < apiAllowSourceIpsJsonList.GetLength(); ++apiAllowSourceIpsIndex) {
      m_apiAllowSourceIps.push_back(apiAllowSourceIpsJsonList[apiAllowSourceIpsIndex].AsString());
    }
    m_apiAllowSourceIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScimAllowSourceIps")) {
    Aws::Utils::Array<JsonView> scimAllowSourceIpsJsonList = jsonValue.GetArray("ScimAllowSourceIps");
    for (unsigned scimAllowSourceIpsIndex = 0; scimAllowSourceIpsIndex < scimAllowSourceIpsJsonList.GetLength();
         ++scimAllowSourceIpsIndex) {
      m_scimAllowSourceIps.push_back(scimAllowSourceIpsJsonList[scimAllowSourceIpsIndex].AsString());
    }
    m_scimAllowSourceIpsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vpceAccessRequiredHasBeenSet) {
    payload.WithBool("VpceAccessRequired", m_vpceAccessRequired);
  }

  if (m_apiRestrictSourceVpcsHasBeenSet) {
    Aws::Utils::Array<JsonValue> apiRestrictSourceVpcsJsonList(m_apiRestrictSourceVpcs.size());
    for (unsigned apiRestrictSourceVpcsIndex = 0; apiRestrictSourceVpcsIndex < apiRestrictSourceVpcsJsonList.GetLength();
         ++apiRestrictSourceVpcsIndex) {
      apiRestrictSourceVpcsJsonList[apiRestrictSourceVpcsIndex].AsString(m_apiRestrictSourceVpcs[apiRestrictSourceVpcsIndex]);
    }
    payload.WithArray("ApiRestrictSourceVpcs", std::move(apiRestrictSourceVpcsJsonList));
  }

  if (m_apiAllowSourceIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> apiAllowSourceIpsJsonList(m_apiAllowSourceIps.size());
    for (unsigned apiAllowSourceIpsIndex = 0; apiAllowSourceIpsIndex < apiAllowSourceIpsJsonList.GetLength(); ++apiAllowSourceIpsIndex) {
      apiAllowSourceIpsJsonList[apiAllowSourceIpsIndex].AsString(m_apiAllowSourceIps[apiAllowSourceIpsIndex]);
    }
    payload.WithArray("ApiAllowSourceIps", std::move(apiAllowSourceIpsJsonList));
  }

  if (m_scimAllowSourceIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scimAllowSourceIpsJsonList(m_scimAllowSourceIps.size());
    for (unsigned scimAllowSourceIpsIndex = 0; scimAllowSourceIpsIndex < scimAllowSourceIpsJsonList.GetLength();
         ++scimAllowSourceIpsIndex) {
      scimAllowSourceIpsJsonList[scimAllowSourceIpsIndex].AsString(m_scimAllowSourceIps[scimAllowSourceIpsIndex]);
    }
    payload.WithArray("ScimAllowSourceIps", std::move(scimAllowSourceIpsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
