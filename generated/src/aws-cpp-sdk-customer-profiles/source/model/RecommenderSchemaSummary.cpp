/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderSchemaSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderSchemaSummary::RecommenderSchemaSummary(JsonView jsonValue) { *this = jsonValue; }

RecommenderSchemaSummary& RecommenderSchemaSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommenderSchemaName")) {
    m_recommenderSchemaName = jsonValue.GetString("RecommenderSchemaName");
    m_recommenderSchemaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Fields")) {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("Fields").GetAllObjects();
    for (auto& fieldsItem : fieldsJsonMap) {
      Aws::Utils::Array<JsonView> recommenderSchemaFieldList2JsonList = fieldsItem.second.AsArray();
      Aws::Vector<RecommenderSchemaField> recommenderSchemaFieldList2List;
      recommenderSchemaFieldList2List.reserve((size_t)recommenderSchemaFieldList2JsonList.GetLength());
      for (unsigned recommenderSchemaFieldList2Index = 0;
           recommenderSchemaFieldList2Index < recommenderSchemaFieldList2JsonList.GetLength(); ++recommenderSchemaFieldList2Index) {
        recommenderSchemaFieldList2List.push_back(recommenderSchemaFieldList2JsonList[recommenderSchemaFieldList2Index].AsObject());
      }
      m_fields[fieldsItem.first] = std::move(recommenderSchemaFieldList2List);
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommenderSchemaStatusMapper::GetRecommenderSchemaStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderSchemaSummary::Jsonize() const {
  JsonValue payload;

  if (m_recommenderSchemaNameHasBeenSet) {
    payload.WithString("RecommenderSchemaName", m_recommenderSchemaName);
  }

  if (m_fieldsHasBeenSet) {
    JsonValue fieldsJsonMap;
    for (auto& fieldsItem : m_fields) {
      Aws::Utils::Array<JsonValue> recommenderSchemaFieldListJsonList(fieldsItem.second.size());
      for (unsigned recommenderSchemaFieldListIndex = 0; recommenderSchemaFieldListIndex < recommenderSchemaFieldListJsonList.GetLength();
           ++recommenderSchemaFieldListIndex) {
        recommenderSchemaFieldListJsonList[recommenderSchemaFieldListIndex].AsObject(
            fieldsItem.second[recommenderSchemaFieldListIndex].Jsonize());
      }
      fieldsJsonMap.WithArray(fieldsItem.first, std::move(recommenderSchemaFieldListJsonList));
    }
    payload.WithObject("Fields", std::move(fieldsJsonMap));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RecommenderSchemaStatusMapper::GetNameForRecommenderSchemaStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
