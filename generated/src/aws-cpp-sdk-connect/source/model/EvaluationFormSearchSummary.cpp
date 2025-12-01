/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormSearchSummary::EvaluationFormSearchSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormSearchSummary& EvaluationFormSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EvaluationFormId")) {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");
    m_evaluationFormIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormArn")) {
    m_evaluationFormArn = jsonValue.GetString("EvaluationFormArn");
    m_evaluationFormArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationFormVersionStatusMapper::GetEvaluationFormVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastActivatedTime")) {
    m_lastActivatedTime = jsonValue.GetDouble("LastActivatedTime");
    m_lastActivatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastActivatedBy")) {
    m_lastActivatedBy = jsonValue.GetString("LastActivatedBy");
    m_lastActivatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestVersion")) {
    m_latestVersion = jsonValue.GetInteger("LatestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActiveVersion")) {
    m_activeVersion = jsonValue.GetInteger("ActiveVersion");
    m_activeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationEnabled")) {
    m_autoEvaluationEnabled = jsonValue.GetBool("AutoEvaluationEnabled");
    m_autoEvaluationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationFormLanguage")) {
    m_evaluationFormLanguage =
        EvaluationFormLanguageCodeMapper::GetEvaluationFormLanguageCodeForName(jsonValue.GetString("EvaluationFormLanguage"));
    m_evaluationFormLanguageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactInteractionType")) {
    m_contactInteractionType =
        ContactInteractionTypeMapper::GetContactInteractionTypeForName(jsonValue.GetString("ContactInteractionType"));
    m_contactInteractionTypeHasBeenSet = true;
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

JsonValue EvaluationFormSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_evaluationFormIdHasBeenSet) {
    payload.WithString("EvaluationFormId", m_evaluationFormId);
  }

  if (m_evaluationFormArnHasBeenSet) {
    payload.WithString("EvaluationFormArn", m_evaluationFormArn);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationFormVersionStatusMapper::GetNameForEvaluationFormVersionStatus(m_status));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedByHasBeenSet) {
    payload.WithString("LastModifiedBy", m_lastModifiedBy);
  }

  if (m_lastActivatedTimeHasBeenSet) {
    payload.WithDouble("LastActivatedTime", m_lastActivatedTime.SecondsWithMSPrecision());
  }

  if (m_lastActivatedByHasBeenSet) {
    payload.WithString("LastActivatedBy", m_lastActivatedBy);
  }

  if (m_latestVersionHasBeenSet) {
    payload.WithInteger("LatestVersion", m_latestVersion);
  }

  if (m_activeVersionHasBeenSet) {
    payload.WithInteger("ActiveVersion", m_activeVersion);
  }

  if (m_autoEvaluationEnabledHasBeenSet) {
    payload.WithBool("AutoEvaluationEnabled", m_autoEvaluationEnabled);
  }

  if (m_evaluationFormLanguageHasBeenSet) {
    payload.WithString("EvaluationFormLanguage",
                       EvaluationFormLanguageCodeMapper::GetNameForEvaluationFormLanguageCode(m_evaluationFormLanguage));
  }

  if (m_contactInteractionTypeHasBeenSet) {
    payload.WithString("ContactInteractionType", ContactInteractionTypeMapper::GetNameForContactInteractionType(m_contactInteractionType));
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
