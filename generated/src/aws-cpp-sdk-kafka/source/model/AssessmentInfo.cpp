/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/AssessmentInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

AssessmentInfo::AssessmentInfo(JsonView jsonValue) { *this = jsonValue; }

AssessmentInfo& AssessmentInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assessmentArn")) {
    m_assessmentArn = jsonValue.GetString("assessmentArn");
    m_assessmentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentType")) {
    m_assessmentType = AssessmentTypeMapper::GetAssessmentTypeForName(jsonValue.GetString("assessmentType"));
    m_assessmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentInfo::Jsonize() const {
  JsonValue payload;

  if (m_assessmentArnHasBeenSet) {
    payload.WithString("assessmentArn", m_assessmentArn);
  }

  if (m_assessmentTypeHasBeenSet) {
    payload.WithString("assessmentType", AssessmentTypeMapper::GetNameForAssessmentType(m_assessmentType));
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AssessmentStatusMapper::GetNameForAssessmentStatus(m_status));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
