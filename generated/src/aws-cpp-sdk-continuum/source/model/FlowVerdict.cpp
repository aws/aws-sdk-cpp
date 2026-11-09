/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FlowVerdict.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FlowVerdict::FlowVerdict(JsonView jsonValue) { *this = jsonValue; }

FlowVerdict& FlowVerdict::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("flowId")) {
    m_flowId = jsonValue.GetString("flowId");
    m_flowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verdict")) {
    m_verdict = FlowVerdictValueMapper::GetFlowVerdictValueForName(jsonValue.GetString("verdict"));
    m_verdictHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidence")) {
    Aws::Utils::Array<JsonView> evidenceJsonList = jsonValue.GetArray("evidence");
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      m_evidence.push_back(evidenceJsonList[evidenceIndex].AsString());
    }
    m_evidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowVerdict::Jsonize() const {
  JsonValue payload;

  if (m_flowIdHasBeenSet) {
    payload.WithString("flowId", m_flowId);
  }

  if (m_verdictHasBeenSet) {
    payload.WithString("verdict", FlowVerdictValueMapper::GetNameForFlowVerdictValue(m_verdict));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  if (m_evidenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> evidenceJsonList(m_evidence.size());
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      evidenceJsonList[evidenceIndex].AsString(m_evidence[evidenceIndex]);
    }
    payload.WithArray("evidence", std::move(evidenceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
