/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ProfileConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

ProfileConfiguration::ProfileConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProfileConfiguration& ProfileConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DefaultProfiles")) {
    Aws::Utils::Array<JsonView> defaultProfilesJsonList = jsonValue.GetArray("DefaultProfiles");
    for (unsigned defaultProfilesIndex = 0; defaultProfilesIndex < defaultProfilesJsonList.GetLength(); ++defaultProfilesIndex) {
      m_defaultProfiles.push_back(defaultProfilesJsonList[defaultProfilesIndex].AsString());
    }
    m_defaultProfilesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_defaultProfilesHasBeenSet) {
    Aws::Utils::Array<JsonValue> defaultProfilesJsonList(m_defaultProfiles.size());
    for (unsigned defaultProfilesIndex = 0; defaultProfilesIndex < defaultProfilesJsonList.GetLength(); ++defaultProfilesIndex) {
      defaultProfilesJsonList[defaultProfilesIndex].AsString(m_defaultProfiles[defaultProfilesIndex]);
    }
    payload.WithArray("DefaultProfiles", std::move(defaultProfilesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
