/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/Vm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

Vm::Vm(JsonView jsonValue) { *this = jsonValue; }

Vm& Vm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmName")) {
    m_vmName = jsonValue.GetString("vmName");
    m_vmNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmImageReference")) {
    m_vmImageReference = jsonValue.GetString("vmImageReference");
    m_vmImageReferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipV4Addresses")) {
    Aws::Utils::Array<JsonView> ipV4AddressesJsonList = jsonValue.GetArray("ipV4Addresses");
    for (unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex) {
      m_ipV4Addresses.push_back(ipV4AddressesJsonList[ipV4AddressesIndex].AsString());
    }
    m_ipV4AddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipV6Addresses")) {
    Aws::Utils::Array<JsonView> ipV6AddressesJsonList = jsonValue.GetArray("ipV6Addresses");
    for (unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex) {
      m_ipV6Addresses.push_back(ipV6AddressesJsonList[ipV6AddressesIndex].AsString());
    }
    m_ipV6AddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("launchedAt")) {
    m_launchedAt = jsonValue.GetDouble("launchedAt");
    m_launchedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("platform")) {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRole")) {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyName")) {
    m_keyName = jsonValue.GetString("keyName");
    m_keyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Vm::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_vmNameHasBeenSet) {
    payload.WithString("vmName", m_vmName);
  }

  if (m_vmImageReferenceHasBeenSet) {
    payload.WithString("vmImageReference", m_vmImageReference);
  }

  if (m_ipV4AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipV4AddressesJsonList(m_ipV4Addresses.size());
    for (unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex) {
      ipV4AddressesJsonList[ipV4AddressesIndex].AsString(m_ipV4Addresses[ipV4AddressesIndex]);
    }
    payload.WithArray("ipV4Addresses", std::move(ipV4AddressesJsonList));
  }

  if (m_ipV6AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipV6AddressesJsonList(m_ipV6Addresses.size());
    for (unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex) {
      ipV6AddressesJsonList[ipV6AddressesIndex].AsString(m_ipV6Addresses[ipV6AddressesIndex]);
    }
    payload.WithArray("ipV6Addresses", std::move(ipV6AddressesJsonList));
  }

  if (m_networkIdHasBeenSet) {
    payload.WithString("networkId", m_networkId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_launchedAtHasBeenSet) {
    payload.WithDouble("launchedAt", m_launchedAt.SecondsWithMSPrecision());
  }

  if (m_platformHasBeenSet) {
    payload.WithString("platform", m_platform);
  }

  if (m_executionRoleHasBeenSet) {
    payload.WithString("executionRole", m_executionRole);
  }

  if (m_keyNameHasBeenSet) {
    payload.WithString("keyName", m_keyName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
