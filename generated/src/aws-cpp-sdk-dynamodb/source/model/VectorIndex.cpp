/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/VectorIndex.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

VectorIndex::VectorIndex(JsonView jsonValue) { *this = jsonValue; }

VectorIndex& VectorIndex::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IndexName")) {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VectorAttribute")) {
    m_vectorAttribute = jsonValue.GetObject("VectorAttribute");
    m_vectorAttributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchSchema")) {
    Aws::Utils::Array<JsonView> searchSchemaJsonList = jsonValue.GetArray("SearchSchema");
    for (unsigned searchSchemaIndex = 0; searchSchemaIndex < searchSchemaJsonList.GetLength(); ++searchSchemaIndex) {
      m_searchSchema.push_back(searchSchemaJsonList[searchSchemaIndex].AsObject());
    }
    m_searchSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Projection")) {
    m_projection = jsonValue.GetObject("Projection");
    m_projectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dimensions")) {
    m_dimensions = jsonValue.GetInt64("Dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DistanceFunction")) {
    m_distanceFunction = VectorDistanceFunctionMapper::GetVectorDistanceFunctionForName(jsonValue.GetString("DistanceFunction"));
    m_distanceFunctionHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorIndex::Jsonize() const {
  JsonValue payload;

  if (m_indexNameHasBeenSet) {
    payload.WithString("IndexName", m_indexName);
  }

  if (m_vectorAttributeHasBeenSet) {
    payload.WithObject("VectorAttribute", m_vectorAttribute.Jsonize());
  }

  if (m_searchSchemaHasBeenSet) {
    Aws::Utils::Array<JsonValue> searchSchemaJsonList(m_searchSchema.size());
    for (unsigned searchSchemaIndex = 0; searchSchemaIndex < searchSchemaJsonList.GetLength(); ++searchSchemaIndex) {
      searchSchemaJsonList[searchSchemaIndex].AsObject(m_searchSchema[searchSchemaIndex].Jsonize());
    }
    payload.WithArray("SearchSchema", std::move(searchSchemaJsonList));
  }

  if (m_projectionHasBeenSet) {
    payload.WithObject("Projection", m_projection.Jsonize());
  }

  if (m_dimensionsHasBeenSet) {
    payload.WithInt64("Dimensions", m_dimensions);
  }

  if (m_distanceFunctionHasBeenSet) {
    payload.WithString("DistanceFunction", VectorDistanceFunctionMapper::GetNameForVectorDistanceFunction(m_distanceFunction));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
