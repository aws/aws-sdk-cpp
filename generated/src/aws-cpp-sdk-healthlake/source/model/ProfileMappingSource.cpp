/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ProfileMappingSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

ProfileMappingSource::ProfileMappingSource(JsonView jsonValue) { *this = jsonValue; }

ProfileMappingSource& ProfileMappingSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProfileMapping")) {
    Aws::Map<Aws::String, JsonView> profileMappingJsonMap = jsonValue.GetObject("ProfileMapping").GetAllObjects();
    for (auto& profileMappingItem : profileMappingJsonMap) {
      m_profileMapping[profileMappingItem.first] = profileMappingItem.second.AsString();
    }
    m_profileMappingHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileMappingSource::Jsonize() const {
  JsonValue payload;

  if (m_profileMappingHasBeenSet) {
    JsonValue profileMappingJsonMap;
    for (auto& profileMappingItem : m_profileMapping) {
      profileMappingJsonMap.WithString(profileMappingItem.first, profileMappingItem.second);
    }
    payload.WithObject("ProfileMapping", std::move(profileMappingJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
