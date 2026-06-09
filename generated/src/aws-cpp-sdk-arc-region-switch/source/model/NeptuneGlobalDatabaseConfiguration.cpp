/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/NeptuneGlobalDatabaseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

NeptuneGlobalDatabaseConfiguration::NeptuneGlobalDatabaseConfiguration(JsonView jsonValue) { *this = jsonValue; }

NeptuneGlobalDatabaseConfiguration& NeptuneGlobalDatabaseConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeoutMinutes")) {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossAccountRole")) {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalId")) {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("behavior")) {
    m_behavior = NeptuneDefaultBehaviorMapper::GetNeptuneDefaultBehaviorForName(jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalClusterIdentifier")) {
    m_globalClusterIdentifier = jsonValue.GetString("globalClusterIdentifier");
    m_globalClusterIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionDatabaseClusterArns")) {
    Aws::Map<Aws::String, JsonView> regionDatabaseClusterArnsJsonMap = jsonValue.GetObject("regionDatabaseClusterArns").GetAllObjects();
    for (auto& regionDatabaseClusterArnsItem : regionDatabaseClusterArnsJsonMap) {
      m_regionDatabaseClusterArns[regionDatabaseClusterArnsItem.first] = regionDatabaseClusterArnsItem.second.AsString();
    }
    m_regionDatabaseClusterArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue NeptuneGlobalDatabaseConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_timeoutMinutesHasBeenSet) {
    payload.WithInteger("timeoutMinutes", m_timeoutMinutes);
  }

  if (m_crossAccountRoleHasBeenSet) {
    payload.WithString("crossAccountRole", m_crossAccountRole);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("externalId", m_externalId);
  }

  if (m_behaviorHasBeenSet) {
    payload.WithString("behavior", NeptuneDefaultBehaviorMapper::GetNameForNeptuneDefaultBehavior(m_behavior));
  }

  if (m_ungracefulHasBeenSet) {
    payload.WithObject("ungraceful", m_ungraceful.Jsonize());
  }

  if (m_globalClusterIdentifierHasBeenSet) {
    payload.WithString("globalClusterIdentifier", m_globalClusterIdentifier);
  }

  if (m_regionDatabaseClusterArnsHasBeenSet) {
    JsonValue regionDatabaseClusterArnsJsonMap;
    for (auto& regionDatabaseClusterArnsItem : m_regionDatabaseClusterArns) {
      regionDatabaseClusterArnsJsonMap.WithString(regionDatabaseClusterArnsItem.first, regionDatabaseClusterArnsItem.second);
    }
    payload.WithObject("regionDatabaseClusterArns", std::move(regionDatabaseClusterArnsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
