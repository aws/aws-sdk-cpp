/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WisdomInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WisdomInfo::WisdomInfo(JsonView jsonValue) { *this = jsonValue; }

WisdomInfo& WisdomInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SessionArn")) {
    m_sessionArn = jsonValue.GetString("SessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AiAgents")) {
    Aws::Utils::Array<JsonView> aiAgentsJsonList = jsonValue.GetArray("AiAgents");
    for (unsigned aiAgentsIndex = 0; aiAgentsIndex < aiAgentsJsonList.GetLength(); ++aiAgentsIndex) {
      m_aiAgents.push_back(aiAgentsJsonList[aiAgentsIndex].AsObject());
    }
    m_aiAgentsHasBeenSet = true;
  }
  return *this;
}

JsonValue WisdomInfo::Jsonize() const {
  JsonValue payload;

  if (m_sessionArnHasBeenSet) {
    payload.WithString("SessionArn", m_sessionArn);
  }

  if (m_aiAgentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> aiAgentsJsonList(m_aiAgents.size());
    for (unsigned aiAgentsIndex = 0; aiAgentsIndex < aiAgentsJsonList.GetLength(); ++aiAgentsIndex) {
      aiAgentsJsonList[aiAgentsIndex].AsObject(m_aiAgents[aiAgentsIndex].Jsonize());
    }
    payload.WithArray("AiAgents", std::move(aiAgentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
