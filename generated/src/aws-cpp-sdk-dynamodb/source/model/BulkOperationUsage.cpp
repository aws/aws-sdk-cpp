/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationUsage::BulkOperationUsage(JsonView jsonValue) { *this = jsonValue; }

BulkOperationUsage& BulkOperationUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BulkPutBytes")) {
    m_bulkPutBytes = jsonValue.GetInt64("BulkPutBytes");
    m_bulkPutBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Table")) {
    m_table = jsonValue.GetObject("Table");
    m_tableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocalSecondaryIndexes")) {
    Aws::Map<Aws::String, JsonView> localSecondaryIndexesJsonMap = jsonValue.GetObject("LocalSecondaryIndexes").GetAllObjects();
    for (auto& localSecondaryIndexesItem : localSecondaryIndexesJsonMap) {
      m_localSecondaryIndexes[localSecondaryIndexesItem.first] = localSecondaryIndexesItem.second.AsObject();
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GlobalSecondaryIndexes")) {
    Aws::Map<Aws::String, JsonView> globalSecondaryIndexesJsonMap = jsonValue.GetObject("GlobalSecondaryIndexes").GetAllObjects();
    for (auto& globalSecondaryIndexesItem : globalSecondaryIndexesJsonMap) {
      m_globalSecondaryIndexes[globalSecondaryIndexesItem.first] = globalSecondaryIndexesItem.second.AsObject();
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VectorIndexes")) {
    Aws::Map<Aws::String, JsonView> vectorIndexesJsonMap = jsonValue.GetObject("VectorIndexes").GetAllObjects();
    for (auto& vectorIndexesItem : vectorIndexesJsonMap) {
      m_vectorIndexes[vectorIndexesItem.first] = vectorIndexesItem.second.AsObject();
    }
    m_vectorIndexesHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationUsage::Jsonize() const {
  JsonValue payload;

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_bulkPutBytesHasBeenSet) {
    payload.WithInt64("BulkPutBytes", m_bulkPutBytes);
  }

  if (m_tableHasBeenSet) {
    payload.WithObject("Table", m_table.Jsonize());
  }

  if (m_localSecondaryIndexesHasBeenSet) {
    JsonValue localSecondaryIndexesJsonMap;
    for (auto& localSecondaryIndexesItem : m_localSecondaryIndexes) {
      localSecondaryIndexesJsonMap.WithObject(localSecondaryIndexesItem.first, localSecondaryIndexesItem.second.Jsonize());
    }
    payload.WithObject("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonMap));
  }

  if (m_globalSecondaryIndexesHasBeenSet) {
    JsonValue globalSecondaryIndexesJsonMap;
    for (auto& globalSecondaryIndexesItem : m_globalSecondaryIndexes) {
      globalSecondaryIndexesJsonMap.WithObject(globalSecondaryIndexesItem.first, globalSecondaryIndexesItem.second.Jsonize());
    }
    payload.WithObject("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonMap));
  }

  if (m_vectorIndexesHasBeenSet) {
    JsonValue vectorIndexesJsonMap;
    for (auto& vectorIndexesItem : m_vectorIndexes) {
      vectorIndexesJsonMap.WithObject(vectorIndexesItem.first, vectorIndexesItem.second.Jsonize());
    }
    payload.WithObject("VectorIndexes", std::move(vectorIndexesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
