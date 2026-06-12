/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IcebergTableMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IcebergTableMetadata::IcebergTableMetadata(JsonView jsonValue) { *this = jsonValue; }

IcebergTableMetadata& IcebergTableMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormatVersion")) {
    m_formatVersion = jsonValue.GetString("FormatVersion");
    m_formatVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableUuid")) {
    m_tableUuid = jsonValue.GetString("TableUuid");
    m_tableUuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Schemas")) {
    Aws::Utils::Array<JsonView> schemasJsonList = jsonValue.GetArray("Schemas");
    for (unsigned schemasIndex = 0; schemasIndex < schemasJsonList.GetLength(); ++schemasIndex) {
      m_schemas.push_back(schemasJsonList[schemasIndex].AsObject());
    }
    m_schemasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentSchemaId")) {
    m_currentSchemaId = jsonValue.GetInteger("CurrentSchemaId");
    m_currentSchemaIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastColumnId")) {
    m_lastColumnId = jsonValue.GetInteger("LastColumnId");
    m_lastColumnIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionSpecs")) {
    Aws::Utils::Array<JsonView> partitionSpecsJsonList = jsonValue.GetArray("PartitionSpecs");
    for (unsigned partitionSpecsIndex = 0; partitionSpecsIndex < partitionSpecsJsonList.GetLength(); ++partitionSpecsIndex) {
      m_partitionSpecs.push_back(partitionSpecsJsonList[partitionSpecsIndex].AsObject());
    }
    m_partitionSpecsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultSpecId")) {
    m_defaultSpecId = jsonValue.GetInteger("DefaultSpecId");
    m_defaultSpecIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastPartitionId")) {
    m_lastPartitionId = jsonValue.GetInteger("LastPartitionId");
    m_lastPartitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortOrders")) {
    Aws::Utils::Array<JsonView> sortOrdersJsonList = jsonValue.GetArray("SortOrders");
    for (unsigned sortOrdersIndex = 0; sortOrdersIndex < sortOrdersJsonList.GetLength(); ++sortOrdersIndex) {
      m_sortOrders.push_back(sortOrdersJsonList[sortOrdersIndex].AsObject());
    }
    m_sortOrdersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultSortOrderId")) {
    m_defaultSortOrderId = jsonValue.GetInteger("DefaultSortOrderId");
    m_defaultSortOrderIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergTableMetadata::Jsonize() const {
  JsonValue payload;

  if (m_formatVersionHasBeenSet) {
    payload.WithString("FormatVersion", m_formatVersion);
  }

  if (m_tableUuidHasBeenSet) {
    payload.WithString("TableUuid", m_tableUuid);
  }

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
    }
    payload.WithObject("Properties", std::move(propertiesJsonMap));
  }

  if (m_schemasHasBeenSet) {
    Aws::Utils::Array<JsonValue> schemasJsonList(m_schemas.size());
    for (unsigned schemasIndex = 0; schemasIndex < schemasJsonList.GetLength(); ++schemasIndex) {
      schemasJsonList[schemasIndex].AsObject(m_schemas[schemasIndex].Jsonize());
    }
    payload.WithArray("Schemas", std::move(schemasJsonList));
  }

  if (m_currentSchemaIdHasBeenSet) {
    payload.WithInteger("CurrentSchemaId", m_currentSchemaId);
  }

  if (m_lastColumnIdHasBeenSet) {
    payload.WithInteger("LastColumnId", m_lastColumnId);
  }

  if (m_partitionSpecsHasBeenSet) {
    Aws::Utils::Array<JsonValue> partitionSpecsJsonList(m_partitionSpecs.size());
    for (unsigned partitionSpecsIndex = 0; partitionSpecsIndex < partitionSpecsJsonList.GetLength(); ++partitionSpecsIndex) {
      partitionSpecsJsonList[partitionSpecsIndex].AsObject(m_partitionSpecs[partitionSpecsIndex].Jsonize());
    }
    payload.WithArray("PartitionSpecs", std::move(partitionSpecsJsonList));
  }

  if (m_defaultSpecIdHasBeenSet) {
    payload.WithInteger("DefaultSpecId", m_defaultSpecId);
  }

  if (m_lastPartitionIdHasBeenSet) {
    payload.WithInteger("LastPartitionId", m_lastPartitionId);
  }

  if (m_sortOrdersHasBeenSet) {
    Aws::Utils::Array<JsonValue> sortOrdersJsonList(m_sortOrders.size());
    for (unsigned sortOrdersIndex = 0; sortOrdersIndex < sortOrdersJsonList.GetLength(); ++sortOrdersIndex) {
      sortOrdersJsonList[sortOrdersIndex].AsObject(m_sortOrders[sortOrdersIndex].Jsonize());
    }
    payload.WithArray("SortOrders", std::move(sortOrdersJsonList));
  }

  if (m_defaultSortOrderIdHasBeenSet) {
    payload.WithInteger("DefaultSortOrderId", m_defaultSortOrderId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
