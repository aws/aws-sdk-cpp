/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationRecord::InvestigationRecord(JsonView jsonValue) { *this = jsonValue; }

InvestigationRecord& InvestigationRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordId")) {
    m_recordId = jsonValue.GetString("recordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RecordTypeMapper::GetRecordTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("narrative")) {
    m_narrative = jsonValue.GetString("narrative");
    m_narrativeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportingData")) {
    m_supportingData = jsonValue.GetObject("supportingData");
    m_supportingDataHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationRecord::Jsonize() const {
  JsonValue payload;

  if (m_recordIdHasBeenSet) {
    payload.WithString("recordId", m_recordId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", RecordTypeMapper::GetNameForRecordType(m_type));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_narrativeHasBeenSet) {
    payload.WithString("narrative", m_narrative);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_supportingDataHasBeenSet) {
    payload.WithObject("supportingData", m_supportingData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
