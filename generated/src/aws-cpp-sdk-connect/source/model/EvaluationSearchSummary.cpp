/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSearchSummary::EvaluationSearchSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluationSearchSummary& EvaluationSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EvaluationId")) {
    m_evaluationId = jsonValue.GetString("EvaluationId");
    m_evaluationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationArn")) {
    m_evaluationArn = jsonValue.GetString("EvaluationArn");
    m_evaluationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormId")) {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");
    m_evaluationFormIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormVersion")) {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");
    m_evaluationFormVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Metadata")) {
    m_metadata = jsonValue.GetObject("Metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationStatusMapper::GetEvaluationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationType")) {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));
    m_evaluationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_evaluationIdHasBeenSet) {
    payload.WithString("EvaluationId", m_evaluationId);
  }

  if (m_evaluationArnHasBeenSet) {
    payload.WithString("EvaluationArn", m_evaluationArn);
  }

  if (m_evaluationFormIdHasBeenSet) {
    payload.WithString("EvaluationFormId", m_evaluationFormId);
  }

  if (m_evaluationFormVersionHasBeenSet) {
    payload.WithInteger("EvaluationFormVersion", m_evaluationFormVersion);
  }

  if (m_metadataHasBeenSet) {
    payload.WithObject("Metadata", m_metadata.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationStatusMapper::GetNameForEvaluationStatus(m_status));
  }

  if (m_evaluationTypeHasBeenSet) {
    payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
