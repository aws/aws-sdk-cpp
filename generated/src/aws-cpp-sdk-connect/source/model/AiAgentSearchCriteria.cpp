/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AiAgentSearchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AiAgentSearchCriteria::AiAgentSearchCriteria(JsonView jsonValue) { *this = jsonValue; }

AiAgentSearchCriteria& AiAgentSearchCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VersionNumber")) {
    m_versionNumber = jsonValue.GetInteger("VersionNumber");
    m_versionNumberHasBeenSet = true;
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

JsonValue AiAgentSearchCriteria::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_versionNumberHasBeenSet) {
    payload.WithInteger("VersionNumber", m_versionNumber);
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
