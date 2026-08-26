/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/InfluxDBAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

InfluxDBAction::InfluxDBAction(JsonView jsonValue) { *this = jsonValue; }

InfluxDBAction& InfluxDBAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationArn")) {
    m_destinationArn = jsonValue.GetString("destinationArn");
    m_destinationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("databaseName")) {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableName")) {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organization")) {
    m_organization = jsonValue.GetString("organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestampUnit")) {
    m_timestampUnit = InfluxDBTimestampUnitMapper::GetInfluxDBTimestampUnitForName(jsonValue.GetString("timestampUnit"));
    m_timestampUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchConfig")) {
    m_batchConfig = jsonValue.GetObject("batchConfig");
    m_batchConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBAction::Jsonize() const {
  JsonValue payload;

  if (m_destinationArnHasBeenSet) {
    payload.WithString("destinationArn", m_destinationArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_databaseNameHasBeenSet) {
    payload.WithString("databaseName", m_databaseName);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("tableName", m_tableName);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("organization", m_organization);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_timestampUnitHasBeenSet) {
    payload.WithString("timestampUnit", InfluxDBTimestampUnitMapper::GetNameForInfluxDBTimestampUnit(m_timestampUnit));
  }

  if (m_batchConfigHasBeenSet) {
    payload.WithObject("batchConfig", m_batchConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
