/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/SignatureAgentCardAdditionalData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {

SignatureAgentCardAdditionalData::SignatureAgentCardAdditionalData(JsonView jsonValue) { *this = jsonValue; }

SignatureAgentCardAdditionalData& SignatureAgentCardAdditionalData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = BotCategoryMapper::GetBotCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue SignatureAgentCardAdditionalData::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", BotCategoryMapper::GetNameForBotCategory(m_category));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
