/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/Connector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

Connector::Connector(JsonView jsonValue) { *this = jsonValue; }

Connector& Connector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectorArn")) {
    m_connectorArn = jsonValue.GetString("connectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = ConnectorCloudProviderMapper::GetConnectorCloudProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enablementStatus")) {
    m_enablementStatus = EnablementStatusMapper::GetEnablementStatusForName(jsonValue.GetString("enablementStatus"));
    m_enablementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enablementStatusReason")) {
    m_enablementStatusReason = jsonValue.GetString("enablementStatusReason");
    m_enablementStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("health")) {
    m_health = jsonValue.GetObject("health");
    m_healthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azureRegions")) {
    Aws::Utils::Array<JsonView> azureRegionsJsonList = jsonValue.GetArray("azureRegions");
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      m_azureRegions.push_back(azureRegionsJsonList[azureRegionsIndex].AsString());
    }
    m_azureRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("awsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeConfiguration")) {
    m_scopeConfiguration = jsonValue.GetObject("scopeConfiguration");
    m_scopeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoInstallVMScanner")) {
    m_autoInstallVMScanner = jsonValue.GetBool("autoInstallVMScanner");
    m_autoInstallVMScannerHasBeenSet = true;
  }
  return *this;
}

JsonValue Connector::Jsonize() const {
  JsonValue payload;

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ConnectorCloudProviderMapper::GetNameForConnectorCloudProvider(m_provider));
  }

  if (m_enablementStatusHasBeenSet) {
    payload.WithString("enablementStatus", EnablementStatusMapper::GetNameForEnablementStatus(m_enablementStatus));
  }

  if (m_enablementStatusReasonHasBeenSet) {
    payload.WithString("enablementStatusReason", m_enablementStatusReason);
  }

  if (m_healthHasBeenSet) {
    payload.WithObject("health", m_health.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_azureRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> azureRegionsJsonList(m_azureRegions.size());
    for (unsigned azureRegionsIndex = 0; azureRegionsIndex < azureRegionsJsonList.GetLength(); ++azureRegionsIndex) {
      azureRegionsJsonList[azureRegionsIndex].AsString(m_azureRegions[azureRegionsIndex]);
    }
    payload.WithArray("azureRegions", std::move(azureRegionsJsonList));
  }

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("awsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("scopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_autoInstallVMScannerHasBeenSet) {
    payload.WithBool("autoInstallVMScanner", m_autoInstallVMScanner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
