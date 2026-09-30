/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/FilterSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

FilterSpecification::FilterSpecification(JsonView jsonValue) { *this = jsonValue; }

FilterSpecification& FilterSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FilterExpression")) {
    m_filterExpression = jsonValue.GetString("FilterExpression");
    m_filterExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectionExpression")) {
    m_projectionExpression = jsonValue.GetString("ProjectionExpression");
    m_projectionExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyConditionExpression")) {
    m_keyConditionExpression = jsonValue.GetString("KeyConditionExpression");
    m_keyConditionExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpressionAttributeNames")) {
    Aws::Map<Aws::String, JsonView> expressionAttributeNamesJsonMap = jsonValue.GetObject("ExpressionAttributeNames").GetAllObjects();
    for (auto& expressionAttributeNamesItem : expressionAttributeNamesJsonMap) {
      m_expressionAttributeNames[expressionAttributeNamesItem.first] = expressionAttributeNamesItem.second.AsString();
    }
    m_expressionAttributeNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpressionAttributeValues")) {
    Aws::Map<Aws::String, JsonView> expressionAttributeValuesJsonMap = jsonValue.GetObject("ExpressionAttributeValues").GetAllObjects();
    for (auto& expressionAttributeValuesItem : expressionAttributeValuesJsonMap) {
      m_expressionAttributeValues[expressionAttributeValuesItem.first] = expressionAttributeValuesItem.second.AsObject();
    }
    m_expressionAttributeValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterSpecification::Jsonize() const {
  JsonValue payload;

  if (m_filterExpressionHasBeenSet) {
    payload.WithString("FilterExpression", m_filterExpression);
  }

  if (m_projectionExpressionHasBeenSet) {
    payload.WithString("ProjectionExpression", m_projectionExpression);
  }

  if (m_keyConditionExpressionHasBeenSet) {
    payload.WithString("KeyConditionExpression", m_keyConditionExpression);
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

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
