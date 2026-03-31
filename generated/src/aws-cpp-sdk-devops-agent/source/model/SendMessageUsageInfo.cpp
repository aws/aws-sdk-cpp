/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageUsageInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageUsageInfo::SendMessageUsageInfo(JsonView jsonValue) { *this = jsonValue; }

SendMessageUsageInfo& SendMessageUsageInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inputTokens")) {
    m_inputTokens = jsonValue.GetInteger("inputTokens");
    m_inputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputTokens")) {
    m_outputTokens = jsonValue.GetInteger("outputTokens");
    m_outputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTokens")) {
    m_totalTokens = jsonValue.GetInteger("totalTokens");
    m_totalTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageUsageInfo::Jsonize() const {
  JsonValue payload;

  if (m_inputTokensHasBeenSet) {
    payload.WithInteger("inputTokens", m_inputTokens);
  }

  if (m_outputTokensHasBeenSet) {
    payload.WithInteger("outputTokens", m_outputTokens);
  }

  if (m_totalTokensHasBeenSet) {
    payload.WithInteger("totalTokens", m_totalTokens);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
