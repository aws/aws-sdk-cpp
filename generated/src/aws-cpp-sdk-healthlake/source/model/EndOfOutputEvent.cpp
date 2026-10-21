/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/EndOfOutputEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

EndOfOutputEvent::EndOfOutputEvent(JsonView jsonValue) { *this = jsonValue; }

EndOfOutputEvent& EndOfOutputEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FinalResponseMessage")) {
    m_finalResponseMessage = jsonValue.GetString("FinalResponseMessage");
    m_finalResponseMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Options")) {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      m_options.push_back(optionsJsonList[optionsIndex].AsString());
    }
    m_optionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConversationId")) {
    m_conversationId = jsonValue.GetString("ConversationId");
    m_conversationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EndOfOutputEvent::Jsonize() const {
  JsonValue payload;

  if (m_finalResponseMessageHasBeenSet) {
    payload.WithString("FinalResponseMessage", m_finalResponseMessage);
  }

  if (m_optionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      optionsJsonList[optionsIndex].AsString(m_options[optionsIndex]);
    }
    payload.WithArray("Options", std::move(optionsJsonList));
  }

  if (m_conversationIdHasBeenSet) {
    payload.WithString("ConversationId", m_conversationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
