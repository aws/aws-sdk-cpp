/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/AgentOutputMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

AgentOutputMessage::AgentOutputMessage(JsonView jsonValue) { *this = jsonValue; }

AgentOutputMessage& AgentOutputMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = AgentOutputMessageTypeMapper::GetAgentOutputMessageTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptionsList")) {
    Aws::Utils::Array<JsonView> optionsListJsonList = jsonValue.GetArray("OptionsList");
    for (unsigned optionsListIndex = 0; optionsListIndex < optionsListJsonList.GetLength(); ++optionsListIndex) {
      m_optionsList.push_back(optionsListJsonList[optionsListIndex].AsString());
    }
    m_optionsListHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentOutputMessage::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", AgentOutputMessageTypeMapper::GetNameForAgentOutputMessageType(m_type));
  }

  if (m_optionsListHasBeenSet) {
    Aws::Utils::Array<JsonValue> optionsListJsonList(m_optionsList.size());
    for (unsigned optionsListIndex = 0; optionsListIndex < optionsListJsonList.GetLength(); ++optionsListIndex) {
      optionsListJsonList[optionsListIndex].AsString(m_optionsList[optionsListIndex]);
    }
    payload.WithArray("OptionsList", std::move(optionsListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
