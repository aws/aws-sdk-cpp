/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/UserIntentClusteringResultContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

UserIntentClusteringResultContent::UserIntentClusteringResultContent(JsonView jsonValue) { *this = jsonValue; }

UserIntentClusteringResultContent& UserIntentClusteringResultContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userIntents")) {
    Aws::Utils::Array<JsonView> userIntentsJsonList = jsonValue.GetArray("userIntents");
    for (unsigned userIntentsIndex = 0; userIntentsIndex < userIntentsJsonList.GetLength(); ++userIntentsIndex) {
      m_userIntents.push_back(userIntentsJsonList[userIntentsIndex].AsObject());
    }
    m_userIntentsHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIntentClusteringResultContent::Jsonize() const {
  JsonValue payload;

  if (m_userIntentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> userIntentsJsonList(m_userIntents.size());
    for (unsigned userIntentsIndex = 0; userIntentsIndex < userIntentsJsonList.GetLength(); ++userIntentsIndex) {
      userIntentsJsonList[userIntentsIndex].AsObject(m_userIntents[userIntentsIndex].Jsonize());
    }
    payload.WithArray("userIntents", std::move(userIntentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
