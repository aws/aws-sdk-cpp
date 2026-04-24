/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ClinicalNoteGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

ClinicalNoteGenerationResult::ClinicalNoteGenerationResult(JsonView jsonValue) { *this = jsonValue; }

ClinicalNoteGenerationResult& ClinicalNoteGenerationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("noteResult")) {
    m_noteResult = jsonValue.GetObject("noteResult");
    m_noteResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transcriptResult")) {
    m_transcriptResult = jsonValue.GetObject("transcriptResult");
    m_transcriptResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterVisitSummaryResult")) {
    m_afterVisitSummaryResult = jsonValue.GetObject("afterVisitSummaryResult");
    m_afterVisitSummaryResultHasBeenSet = true;
  }
  return *this;
}

JsonValue ClinicalNoteGenerationResult::Jsonize() const {
  JsonValue payload;

  if (m_noteResultHasBeenSet) {
    payload.WithObject("noteResult", m_noteResult.Jsonize());
  }

  if (m_transcriptResultHasBeenSet) {
    payload.WithObject("transcriptResult", m_transcriptResult.Jsonize());
  }

  if (m_afterVisitSummaryResultHasBeenSet) {
    payload.WithObject("afterVisitSummaryResult", m_afterVisitSummaryResult.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
