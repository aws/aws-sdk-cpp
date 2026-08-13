/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregationThreshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

AggregationThreshold::AggregationThreshold(JsonView jsonValue) { *this = jsonValue; }

AggregationThreshold& AggregationThreshold::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identityColumns")) {
    Aws::Utils::Array<JsonView> identityColumnsJsonList = jsonValue.GetArray("identityColumns");
    for (unsigned identityColumnsIndex = 0; identityColumnsIndex < identityColumnsJsonList.GetLength(); ++identityColumnsIndex) {
      m_identityColumns.push_back(identityColumnsJsonList[identityColumnsIndex].AsString());
    }
    m_identityColumnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumIdentityCount")) {
    m_minimumIdentityCount = jsonValue.GetInteger("minimumIdentityCount");
    m_minimumIdentityCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = AggregationThresholdTypeMapper::GetAggregationThresholdTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputColumnThresholds")) {
    Aws::Utils::Array<JsonView> outputColumnThresholdsJsonList = jsonValue.GetArray("outputColumnThresholds");
    for (unsigned outputColumnThresholdsIndex = 0; outputColumnThresholdsIndex < outputColumnThresholdsJsonList.GetLength();
         ++outputColumnThresholdsIndex) {
      m_outputColumnThresholds.push_back(outputColumnThresholdsJsonList[outputColumnThresholdsIndex].AsObject());
    }
    m_outputColumnThresholdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedAggregateExpressionType")) {
    m_allowedAggregateExpressionType = AllowedAggregateExpressionTypeMapper::GetAllowedAggregateExpressionTypeForName(
        jsonValue.GetString("allowedAggregateExpressionType"));
    m_allowedAggregateExpressionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationThreshold::Jsonize() const {
  JsonValue payload;

  if (m_identityColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> identityColumnsJsonList(m_identityColumns.size());
    for (unsigned identityColumnsIndex = 0; identityColumnsIndex < identityColumnsJsonList.GetLength(); ++identityColumnsIndex) {
      identityColumnsJsonList[identityColumnsIndex].AsString(m_identityColumns[identityColumnsIndex]);
    }
    payload.WithArray("identityColumns", std::move(identityColumnsJsonList));
  }

  if (m_minimumIdentityCountHasBeenSet) {
    payload.WithInteger("minimumIdentityCount", m_minimumIdentityCount);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", AggregationThresholdTypeMapper::GetNameForAggregationThresholdType(m_type));
  }

  if (m_outputColumnThresholdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputColumnThresholdsJsonList(m_outputColumnThresholds.size());
    for (unsigned outputColumnThresholdsIndex = 0; outputColumnThresholdsIndex < outputColumnThresholdsJsonList.GetLength();
         ++outputColumnThresholdsIndex) {
      outputColumnThresholdsJsonList[outputColumnThresholdsIndex].AsObject(m_outputColumnThresholds[outputColumnThresholdsIndex].Jsonize());
    }
    payload.WithArray("outputColumnThresholds", std::move(outputColumnThresholdsJsonList));
  }

  if (m_allowedAggregateExpressionTypeHasBeenSet) {
    payload.WithString("allowedAggregateExpressionType",
                       AllowedAggregateExpressionTypeMapper::GetNameForAllowedAggregateExpressionType(m_allowedAggregateExpressionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
