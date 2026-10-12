/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityResultsV2FilterCriteria.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityResultsV2FilterCriteria::DataQualityResultsV2FilterCriteria(JsonView jsonValue) { *this = jsonValue; }

DataQualityResultsV2FilterCriteria& DataQualityResultsV2FilterCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublishedAfter")) {
    m_publishedAfter = jsonValue.GetDouble("PublishedAfter");
    m_publishedAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublishedBefore")) {
    m_publishedBefore = jsonValue.GetDouble("PublishedBefore");
    m_publishedBeforeHasBeenSet = true;
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
  return *this;
}

JsonValue DataQualityResultsV2FilterCriteria::Jsonize() const {
  JsonValue payload;

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
  }

  if (m_publishedAfterHasBeenSet) {
    payload.WithDouble("PublishedAfter", m_publishedAfter.SecondsWithMSPrecision());
  }

  if (m_publishedBeforeHasBeenSet) {
    payload.WithDouble("PublishedBefore", m_publishedBefore.SecondsWithMSPrecision());
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

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
