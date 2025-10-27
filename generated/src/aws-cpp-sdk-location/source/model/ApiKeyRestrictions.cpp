/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/ApiKeyRestrictions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

ApiKeyRestrictions::ApiKeyRestrictions(JsonView jsonValue) { *this = jsonValue; }

ApiKeyRestrictions& ApiKeyRestrictions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllowActions")) {
    Aws::Utils::Array<JsonView> allowActionsJsonList = jsonValue.GetArray("AllowActions");
    for (unsigned allowActionsIndex = 0; allowActionsIndex < allowActionsJsonList.GetLength(); ++allowActionsIndex) {
      m_allowActions.push_back(allowActionsJsonList[allowActionsIndex].AsString());
    }
    m_allowActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowResources")) {
    Aws::Utils::Array<JsonView> allowResourcesJsonList = jsonValue.GetArray("AllowResources");
    for (unsigned allowResourcesIndex = 0; allowResourcesIndex < allowResourcesJsonList.GetLength(); ++allowResourcesIndex) {
      m_allowResources.push_back(allowResourcesJsonList[allowResourcesIndex].AsString());
    }
    m_allowResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowReferers")) {
    Aws::Utils::Array<JsonView> allowReferersJsonList = jsonValue.GetArray("AllowReferers");
    for (unsigned allowReferersIndex = 0; allowReferersIndex < allowReferersJsonList.GetLength(); ++allowReferersIndex) {
      m_allowReferers.push_back(allowReferersJsonList[allowReferersIndex].AsString());
    }
    m_allowReferersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowAndroidApps")) {
    Aws::Utils::Array<JsonView> allowAndroidAppsJsonList = jsonValue.GetArray("AllowAndroidApps");
    for (unsigned allowAndroidAppsIndex = 0; allowAndroidAppsIndex < allowAndroidAppsJsonList.GetLength(); ++allowAndroidAppsIndex) {
      m_allowAndroidApps.push_back(allowAndroidAppsJsonList[allowAndroidAppsIndex].AsObject());
    }
    m_allowAndroidAppsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowAppleApps")) {
    Aws::Utils::Array<JsonView> allowAppleAppsJsonList = jsonValue.GetArray("AllowAppleApps");
    for (unsigned allowAppleAppsIndex = 0; allowAppleAppsIndex < allowAppleAppsJsonList.GetLength(); ++allowAppleAppsIndex) {
      m_allowAppleApps.push_back(allowAppleAppsJsonList[allowAppleAppsIndex].AsObject());
    }
    m_allowAppleAppsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiKeyRestrictions::Jsonize() const {
  JsonValue payload;

  if (m_allowActionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowActionsJsonList(m_allowActions.size());
    for (unsigned allowActionsIndex = 0; allowActionsIndex < allowActionsJsonList.GetLength(); ++allowActionsIndex) {
      allowActionsJsonList[allowActionsIndex].AsString(m_allowActions[allowActionsIndex]);
    }
    payload.WithArray("AllowActions", std::move(allowActionsJsonList));
  }

  if (m_allowResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowResourcesJsonList(m_allowResources.size());
    for (unsigned allowResourcesIndex = 0; allowResourcesIndex < allowResourcesJsonList.GetLength(); ++allowResourcesIndex) {
      allowResourcesJsonList[allowResourcesIndex].AsString(m_allowResources[allowResourcesIndex]);
    }
    payload.WithArray("AllowResources", std::move(allowResourcesJsonList));
  }

  if (m_allowReferersHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowReferersJsonList(m_allowReferers.size());
    for (unsigned allowReferersIndex = 0; allowReferersIndex < allowReferersJsonList.GetLength(); ++allowReferersIndex) {
      allowReferersJsonList[allowReferersIndex].AsString(m_allowReferers[allowReferersIndex]);
    }
    payload.WithArray("AllowReferers", std::move(allowReferersJsonList));
  }

  if (m_allowAndroidAppsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowAndroidAppsJsonList(m_allowAndroidApps.size());
    for (unsigned allowAndroidAppsIndex = 0; allowAndroidAppsIndex < allowAndroidAppsJsonList.GetLength(); ++allowAndroidAppsIndex) {
      allowAndroidAppsJsonList[allowAndroidAppsIndex].AsObject(m_allowAndroidApps[allowAndroidAppsIndex].Jsonize());
    }
    payload.WithArray("AllowAndroidApps", std::move(allowAndroidAppsJsonList));
  }

  if (m_allowAppleAppsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowAppleAppsJsonList(m_allowAppleApps.size());
    for (unsigned allowAppleAppsIndex = 0; allowAppleAppsIndex < allowAppleAppsJsonList.GetLength(); ++allowAppleAppsIndex) {
      allowAppleAppsJsonList[allowAppleAppsIndex].AsObject(m_allowAppleApps[allowAppleAppsIndex].Jsonize());
    }
    payload.WithArray("AllowAppleApps", std::move(allowAppleAppsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
