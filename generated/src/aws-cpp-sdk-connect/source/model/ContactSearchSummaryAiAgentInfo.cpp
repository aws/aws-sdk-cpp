/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactSearchSummaryAiAgentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactSearchSummaryAiAgentInfo::ContactSearchSummaryAiAgentInfo(JsonView jsonValue) { *this = jsonValue; }

ContactSearchSummaryAiAgentInfo& ContactSearchSummaryAiAgentInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AiAgentVersionId")) {
    m_aiAgentVersionId = jsonValue.GetString("AiAgentVersionId");
    m_aiAgentVersionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AiAgentEscalated")) {
    m_aiAgentEscalated = jsonValue.GetBool("AiAgentEscalated");
    m_aiAgentEscalatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AiUseCase")) {
    m_aiUseCase = AiUseCaseMapper::GetAiUseCaseForName(jsonValue.GetString("AiUseCase"));
    m_aiUseCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactSearchSummaryAiAgentInfo::Jsonize() const {
  JsonValue payload;

  if (m_aiAgentVersionIdHasBeenSet) {
    payload.WithString("AiAgentVersionId", m_aiAgentVersionId);
  }

  if (m_aiAgentEscalatedHasBeenSet) {
    payload.WithBool("AiAgentEscalated", m_aiAgentEscalated);
  }

  if (m_aiUseCaseHasBeenSet) {
    payload.WithString("AiUseCase", AiUseCaseMapper::GetNameForAiUseCase(m_aiUseCase));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
