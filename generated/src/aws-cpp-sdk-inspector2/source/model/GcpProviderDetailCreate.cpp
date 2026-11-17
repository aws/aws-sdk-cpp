/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/GcpProviderDetailCreate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

GcpProviderDetailCreate::GcpProviderDetailCreate(JsonView jsonValue) { *this = jsonValue; }

GcpProviderDetailCreate& GcpProviderDetailCreate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("awsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("scopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gcpRegions")) {
    Aws::Utils::Array<JsonView> gcpRegionsJsonList = jsonValue.GetArray("gcpRegions");
    for (unsigned gcpRegionsIndex = 0; gcpRegionsIndex < gcpRegionsJsonList.GetLength(); ++gcpRegionsIndex) {
      m_gcpRegions.push_back(gcpRegionsJsonList[gcpRegionsIndex].AsString());
    }
    m_gcpRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoInstallVMScanner")) {
    m_autoInstallVMScanner = jsonValue.GetBool("autoInstallVMScanner");
    m_autoInstallVMScannerHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpProviderDetailCreate::Jsonize() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("awsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("scopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_gcpRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> gcpRegionsJsonList(m_gcpRegions.size());
    for (unsigned gcpRegionsIndex = 0; gcpRegionsIndex < gcpRegionsJsonList.GetLength(); ++gcpRegionsIndex) {
      gcpRegionsJsonList[gcpRegionsIndex].AsString(m_gcpRegions[gcpRegionsIndex]);
    }
    payload.WithArray("gcpRegions", std::move(gcpRegionsJsonList));
  }

  if (m_autoInstallVMScannerHasBeenSet) {
    payload.WithBool("autoInstallVMScanner", m_autoInstallVMScanner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
