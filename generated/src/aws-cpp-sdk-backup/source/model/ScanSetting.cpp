/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ScanSetting::ScanSetting(JsonView jsonValue) { *this = jsonValue; }

ScanSetting& ScanSetting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MalwareScanner")) {
    m_malwareScanner = MalwareScannerMapper::GetMalwareScannerForName(jsonValue.GetString("MalwareScanner"));
    m_malwareScannerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceTypes")) {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScannerRoleArn")) {
    m_scannerRoleArn = jsonValue.GetString("ScannerRoleArn");
    m_scannerRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanSetting::Jsonize() const {
  JsonValue payload;

  if (m_malwareScannerHasBeenSet) {
    payload.WithString("MalwareScanner", MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner));
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
    }
    payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));
  }

  if (m_scannerRoleArnHasBeenSet) {
    payload.WithString("ScannerRoleArn", m_scannerRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
