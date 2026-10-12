/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityResultsV2Description.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityResultsV2Description::DataQualityResultsV2Description(JsonView jsonValue) { *this = jsonValue; }

DataQualityResultsV2Description& DataQualityResultsV2Description::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResultId")) {
    m_resultId = jsonValue.GetString("ResultId");
    m_resultIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResultPublishedOn")) {
    m_resultPublishedOn = jsonValue.GetDouble("ResultPublishedOn");
    m_resultPublishedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationContext")) {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Descriptors")) {
    Aws::Map<Aws::String, JsonView> descriptorsJsonMap = jsonValue.GetObject("Descriptors").GetAllObjects();
    for (auto& descriptorsItem : descriptorsJsonMap) {
      m_descriptors[descriptorsItem.first] = descriptorsItem.second.AsString();
    }
    m_descriptorsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityResultsV2Description::Jsonize() const {
  JsonValue payload;

  if (m_resultIdHasBeenSet) {
    payload.WithString("ResultId", m_resultId);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
  }

  if (m_resultPublishedOnHasBeenSet) {
    payload.WithDouble("ResultPublishedOn", m_resultPublishedOn.SecondsWithMSPrecision());
  }

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
    }
    payload.WithObject("Dimensions", std::move(dimensionsJsonMap));
  }

  if (m_evaluationContextHasBeenSet) {
    payload.WithString("EvaluationContext", m_evaluationContext);
  }

  if (m_descriptorsHasBeenSet) {
    JsonValue descriptorsJsonMap;
    for (auto& descriptorsItem : m_descriptors) {
      descriptorsJsonMap.WithString(descriptorsItem.first, descriptorsItem.second);
    }
    payload.WithObject("Descriptors", std::move(descriptorsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
