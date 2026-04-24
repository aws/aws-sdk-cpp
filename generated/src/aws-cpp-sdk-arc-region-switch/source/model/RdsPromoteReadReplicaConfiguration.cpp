/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RdsPromoteReadReplicaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

RdsPromoteReadReplicaConfiguration::RdsPromoteReadReplicaConfiguration(JsonView jsonValue) { *this = jsonValue; }

RdsPromoteReadReplicaConfiguration& RdsPromoteReadReplicaConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("dbInstanceArnMap")) {
    Aws::Map<Aws::String, JsonView> dbInstanceArnMapJsonMap = jsonValue.GetObject("dbInstanceArnMap").GetAllObjects();
    for (auto& dbInstanceArnMapItem : dbInstanceArnMapJsonMap) {
      m_dbInstanceArnMap[dbInstanceArnMapItem.first] = dbInstanceArnMapItem.second.AsString();
    }
    m_dbInstanceArnMapHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsPromoteReadReplicaConfiguration::Jsonize() const {
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

  if (m_dbInstanceArnMapHasBeenSet) {
    JsonValue dbInstanceArnMapJsonMap;
    for (auto& dbInstanceArnMapItem : m_dbInstanceArnMap) {
      dbInstanceArnMapJsonMap.WithString(dbInstanceArnMapItem.first, dbInstanceArnMapItem.second);
    }
    payload.WithObject("dbInstanceArnMap", std::move(dbInstanceArnMapJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
