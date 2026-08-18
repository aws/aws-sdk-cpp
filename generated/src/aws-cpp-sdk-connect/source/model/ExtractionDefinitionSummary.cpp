/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractionDefinitionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractionDefinitionSummary::ExtractionDefinitionSummary(JsonView jsonValue) { *this = jsonValue; }

ExtractionDefinitionSummary& ExtractionDefinitionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionId")) {
    m_extractionDefinitionId = jsonValue.GetString("ExtractionDefinitionId");
    m_extractionDefinitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionArn")) {
    m_extractionDefinitionArn = jsonValue.GetString("ExtractionDefinitionArn");
    m_extractionDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedBy")) {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionDefinitionSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_extractionDefinitionIdHasBeenSet) {
    payload.WithString("ExtractionDefinitionId", m_extractionDefinitionId);
  }

  if (m_extractionDefinitionArnHasBeenSet) {
    payload.WithString("ExtractionDefinitionArn", m_extractionDefinitionArn);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedByHasBeenSet) {
    payload.WithString("LastUpdatedBy", m_lastUpdatedBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
