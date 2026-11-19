/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/AssessmentFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

AssessmentFinding::AssessmentFinding(JsonView jsonValue) { *this = jsonValue; }

AssessmentFinding& AssessmentFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = FindingCategoryMapper::GetFindingCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediation")) {
    m_remediation = jsonValue.GetObject("remediation");
    m_remediationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = FindingSeverityMapper::GetFindingSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentFinding::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", FindingCategoryMapper::GetNameForFindingCategory(m_category));
  }

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_remediationHasBeenSet) {
    payload.WithObject("remediation", m_remediation.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", FindingSeverityMapper::GetNameForFindingSeverity(m_severity));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
