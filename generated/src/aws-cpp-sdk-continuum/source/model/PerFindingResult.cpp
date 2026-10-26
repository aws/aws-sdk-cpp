/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PerFindingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

PerFindingResult::PerFindingResult(JsonView jsonValue) { *this = jsonValue; }

PerFindingResult& PerFindingResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitable")) {
    m_exploitable = ExploitabilityVerdictMapper::GetExploitabilityVerdictForName(jsonValue.GetString("exploitable"));
    m_exploitableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowVerdicts")) {
    Aws::Utils::Array<JsonView> flowVerdictsJsonList = jsonValue.GetArray("flowVerdicts");
    for (unsigned flowVerdictsIndex = 0; flowVerdictsIndex < flowVerdictsJsonList.GetLength(); ++flowVerdictsIndex) {
      m_flowVerdicts.push_back(flowVerdictsJsonList[flowVerdictsIndex].AsObject());
    }
    m_flowVerdictsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasoningChain")) {
    Aws::Utils::Array<JsonView> reasoningChainJsonList = jsonValue.GetArray("reasoningChain");
    for (unsigned reasoningChainIndex = 0; reasoningChainIndex < reasoningChainJsonList.GetLength(); ++reasoningChainIndex) {
      m_reasoningChain.push_back(reasoningChainJsonList[reasoningChainIndex].AsObject());
    }
    m_reasoningChainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitArtifact")) {
    m_exploitArtifact = jsonValue.GetObject("exploitArtifact");
    m_exploitArtifactHasBeenSet = true;
  }
  return *this;
}

JsonValue PerFindingResult::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_exploitableHasBeenSet) {
    payload.WithString("exploitable", ExploitabilityVerdictMapper::GetNameForExploitabilityVerdict(m_exploitable));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  if (m_flowVerdictsHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowVerdictsJsonList(m_flowVerdicts.size());
    for (unsigned flowVerdictsIndex = 0; flowVerdictsIndex < flowVerdictsJsonList.GetLength(); ++flowVerdictsIndex) {
      flowVerdictsJsonList[flowVerdictsIndex].AsObject(m_flowVerdicts[flowVerdictsIndex].Jsonize());
    }
    payload.WithArray("flowVerdicts", std::move(flowVerdictsJsonList));
  }

  if (m_reasoningChainHasBeenSet) {
    Aws::Utils::Array<JsonValue> reasoningChainJsonList(m_reasoningChain.size());
    for (unsigned reasoningChainIndex = 0; reasoningChainIndex < reasoningChainJsonList.GetLength(); ++reasoningChainIndex) {
      reasoningChainJsonList[reasoningChainIndex].AsObject(m_reasoningChain[reasoningChainIndex].Jsonize());
    }
    payload.WithArray("reasoningChain", std::move(reasoningChainJsonList));
  }

  if (m_exploitArtifactHasBeenSet) {
    payload.WithObject("exploitArtifact", m_exploitArtifact.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
