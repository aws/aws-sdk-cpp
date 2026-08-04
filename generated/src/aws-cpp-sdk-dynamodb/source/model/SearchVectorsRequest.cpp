/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/SearchVectorsRequest.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchVectorsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("IndexName", m_indexName);
  }

  if (m_returnConsumedCapacityHasBeenSet) {
    payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if (m_expressionAttributeNamesHasBeenSet) {
    JsonValue expressionAttributeNamesJsonMap;
    for (auto& expressionAttributeNamesItem : m_expressionAttributeNames) {
      expressionAttributeNamesJsonMap.WithString(expressionAttributeNamesItem.first, expressionAttributeNamesItem.second);
    }
    payload.WithObject("ExpressionAttributeNames", std::move(expressionAttributeNamesJsonMap));
  }

  if (m_expressionAttributeValuesHasBeenSet) {
    JsonValue expressionAttributeValuesJsonMap;
    for (auto& expressionAttributeValuesItem : m_expressionAttributeValues) {
      expressionAttributeValuesJsonMap.WithObject(expressionAttributeValuesItem.first, expressionAttributeValuesItem.second.Jsonize());
    }
    payload.WithObject("ExpressionAttributeValues", std::move(expressionAttributeValuesJsonMap));
  }

  if (m_projectionExpressionHasBeenSet) {
    payload.WithString("ProjectionExpression", m_projectionExpression);
  }

  if (m_searchVectorHasBeenSet) {
    Aws::Utils::Array<JsonValue> searchVectorJsonList(m_searchVector.size());
    for (unsigned searchVectorIndex = 0; searchVectorIndex < searchVectorJsonList.GetLength(); ++searchVectorIndex) {
      searchVectorJsonList[searchVectorIndex].AsObject(m_searchVector[searchVectorIndex].Jsonize());
    }
    payload.WithArray("SearchVector", std::move(searchVectorJsonList));
  }

  if (m_searchConditionExpressionHasBeenSet) {
    payload.WithString("SearchConditionExpression", m_searchConditionExpression);
  }

  if (m_topKHasBeenSet) {
    payload.WithInteger("TopK", m_topK);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchVectorsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.SearchVectors"));
  return headers;
}

SearchVectorsRequest::EndpointParameters SearchVectorsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("IsSearchOperation"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
