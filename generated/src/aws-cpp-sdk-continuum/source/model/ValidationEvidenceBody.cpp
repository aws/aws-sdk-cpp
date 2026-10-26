/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationEvidenceBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationEvidenceBody::ValidationEvidenceBody(JsonView jsonValue) { *this = jsonValue; }

ValidationEvidenceBody& ValidationEvidenceBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exploitable")) {
    m_exploitable = ExploitabilityVerdictMapper::GetExploitabilityVerdictForName(jsonValue.GetString("exploitable"));
    m_exploitableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("terminalStatus")) {
    m_terminalStatus = ValidationTerminalStatusMapper::GetValidationTerminalStatusForName(jsonValue.GetString("terminalStatus"));
    m_terminalStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowVerdicts")) {
    Aws::Utils::Array<JsonView> flowVerdictsJsonList = jsonValue.GetArray("flowVerdicts");
    for (unsigned flowVerdictsIndex = 0; flowVerdictsIndex < flowVerdictsJsonList.GetLength(); ++flowVerdictsIndex) {
      m_flowVerdicts.push_back(flowVerdictsJsonList[flowVerdictsIndex].AsObject());
    }
    m_flowVerdictsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attackFlowsConfirmed")) {
    Aws::Utils::Array<JsonView> attackFlowsConfirmedJsonList = jsonValue.GetArray("attackFlowsConfirmed");
    for (unsigned attackFlowsConfirmedIndex = 0; attackFlowsConfirmedIndex < attackFlowsConfirmedJsonList.GetLength();
         ++attackFlowsConfirmedIndex) {
      m_attackFlowsConfirmed.push_back(attackFlowsConfirmedJsonList[attackFlowsConfirmedIndex].AsString());
    }
    m_attackFlowsConfirmedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitArtifact")) {
    m_exploitArtifact = jsonValue.GetObject("exploitArtifact");
    m_exploitArtifactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executedProof")) {
    m_executedProof = jsonValue.GetObject("executedProof");
    m_executedProofHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceAnalysis")) {
    m_sourceAnalysis = jsonValue.GetObject("sourceAnalysis");
    m_sourceAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perFindingResults")) {
    Aws::Utils::Array<JsonView> perFindingResultsJsonList = jsonValue.GetArray("perFindingResults");
    for (unsigned perFindingResultsIndex = 0; perFindingResultsIndex < perFindingResultsJsonList.GetLength(); ++perFindingResultsIndex) {
      m_perFindingResults.push_back(perFindingResultsJsonList[perFindingResultsIndex].AsObject());
    }
    m_perFindingResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationEvidenceBody::Jsonize() const {
  JsonValue payload;

  if (m_exploitableHasBeenSet) {
    payload.WithString("exploitable", ExploitabilityVerdictMapper::GetNameForExploitabilityVerdict(m_exploitable));
  }

  if (m_terminalStatusHasBeenSet) {
    payload.WithString("terminalStatus", ValidationTerminalStatusMapper::GetNameForValidationTerminalStatus(m_terminalStatus));
  }

  if (m_flowVerdictsHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowVerdictsJsonList(m_flowVerdicts.size());
    for (unsigned flowVerdictsIndex = 0; flowVerdictsIndex < flowVerdictsJsonList.GetLength(); ++flowVerdictsIndex) {
      flowVerdictsJsonList[flowVerdictsIndex].AsObject(m_flowVerdicts[flowVerdictsIndex].Jsonize());
    }
    payload.WithArray("flowVerdicts", std::move(flowVerdictsJsonList));
  }

  if (m_attackFlowsConfirmedHasBeenSet) {
    Aws::Utils::Array<JsonValue> attackFlowsConfirmedJsonList(m_attackFlowsConfirmed.size());
    for (unsigned attackFlowsConfirmedIndex = 0; attackFlowsConfirmedIndex < attackFlowsConfirmedJsonList.GetLength();
         ++attackFlowsConfirmedIndex) {
      attackFlowsConfirmedJsonList[attackFlowsConfirmedIndex].AsString(m_attackFlowsConfirmed[attackFlowsConfirmedIndex]);
    }
    payload.WithArray("attackFlowsConfirmed", std::move(attackFlowsConfirmedJsonList));
  }

  if (m_exploitArtifactHasBeenSet) {
    payload.WithObject("exploitArtifact", m_exploitArtifact.Jsonize());
  }

  if (m_executedProofHasBeenSet) {
    payload.WithObject("executedProof", m_executedProof.Jsonize());
  }

  if (m_sourceAnalysisHasBeenSet) {
    payload.WithObject("sourceAnalysis", m_sourceAnalysis.Jsonize());
  }

  if (m_perFindingResultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> perFindingResultsJsonList(m_perFindingResults.size());
    for (unsigned perFindingResultsIndex = 0; perFindingResultsIndex < perFindingResultsJsonList.GetLength(); ++perFindingResultsIndex) {
      perFindingResultsJsonList[perFindingResultsIndex].AsObject(m_perFindingResults[perFindingResultsIndex].Jsonize());
    }
    payload.WithArray("perFindingResults", std::move(perFindingResultsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
