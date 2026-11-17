/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementSource::EvaluationFormItemEnablementSource(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementSource& EvaluationFormItemEnablementSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = EvaluationFormItemEnablementSourceTypeMapper::GetEvaluationFormItemEnablementSourceTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactField")) {
    m_contactField = EvaluationFormContactFieldMapper::GetEvaluationFormContactFieldForName(jsonValue.GetString("ContactField"));
    m_contactFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactAttributeKey")) {
    m_contactAttributeKey = jsonValue.GetString("ContactAttributeKey");
    m_contactAttributeKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SegmentAttributeKey")) {
    m_segmentAttributeKey = jsonValue.GetString("SegmentAttributeKey");
    m_segmentAttributeKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EvaluationMetadataField")) {
    m_evaluationMetadataField = EvaluationFormEvaluationMetadataFieldMapper::GetEvaluationFormEvaluationMetadataFieldForName(
        jsonValue.GetString("EvaluationMetadataField"));
    m_evaluationMetadataFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AiMetricsField")) {
    m_aiMetricsField = EvaluationFormAiMetricsFieldMapper::GetEvaluationFormAiMetricsFieldForName(jsonValue.GetString("AiMetricsField"));
    m_aiMetricsFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementSource::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", EvaluationFormItemEnablementSourceTypeMapper::GetNameForEvaluationFormItemEnablementSourceType(m_type));
  }

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  if (m_contactFieldHasBeenSet) {
    payload.WithString("ContactField", EvaluationFormContactFieldMapper::GetNameForEvaluationFormContactField(m_contactField));
  }

  if (m_contactAttributeKeyHasBeenSet) {
    payload.WithString("ContactAttributeKey", m_contactAttributeKey);
  }

  if (m_segmentAttributeKeyHasBeenSet) {
    payload.WithString("SegmentAttributeKey", m_segmentAttributeKey);
  }

  if (m_evaluationMetadataFieldHasBeenSet) {
    payload.WithString(
        "EvaluationMetadataField",
        EvaluationFormEvaluationMetadataFieldMapper::GetNameForEvaluationFormEvaluationMetadataField(m_evaluationMetadataField));
  }

  if (m_aiMetricsFieldHasBeenSet) {
    payload.WithString("AiMetricsField", EvaluationFormAiMetricsFieldMapper::GetNameForEvaluationFormAiMetricsField(m_aiMetricsField));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
