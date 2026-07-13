/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AzureProviderDetailCreate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AzureProviderDetailCreate::AzureProviderDetailCreate(JsonView jsonValue) { *this = jsonValue; }

AzureProviderDetailCreate& AzureProviderDetailCreate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("awsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("awsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("scopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azureRegions")) {
    Aws::Utils::Array<JsonView> azureRegionsJsonList = jsonValue.GetArray("azureRegions");
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      m_azureRegions.push_back(azureRegionsJsonList[azureRegionsIndex].AsString());
    }
    m_azureRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoInstallVMScanner")) {
    m_autoInstallVMScanner = jsonValue.GetBool("autoInstallVMScanner");
    m_autoInstallVMScannerHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureProviderDetailCreate::Jsonize() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("awsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("scopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_azureRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> azureRegionsJsonList(m_azureRegions.size());
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      azureRegionsJsonList[azureRegionsIndex].AsString(m_azureRegions[azureRegionsIndex]);
    }
    payload.WithArray("azureRegions", std::move(azureRegionsJsonList));
  }

  if (m_autoInstallVMScannerHasBeenSet) {
    payload.WithBool("autoInstallVMScanner", m_autoInstallVMScanner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
