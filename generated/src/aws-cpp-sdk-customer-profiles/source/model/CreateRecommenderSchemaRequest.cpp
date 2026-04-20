/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/CreateRecommenderSchemaRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRecommenderSchemaRequest::SerializePayload() const {
  JsonValue payload;

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

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
