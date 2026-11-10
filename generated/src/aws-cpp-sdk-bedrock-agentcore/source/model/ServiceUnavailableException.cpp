/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ServiceUnavailableException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ServiceUnavailableException::ServiceUnavailableException(JsonView jsonValue) { *this = jsonValue; }

ServiceUnavailableException& ServiceUnavailableException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retryAfterSeconds")) {
    m_retryAfterSeconds = jsonValue.GetInteger("retryAfterSeconds");
    m_retryAfterSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceUnavailableException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_retryAfterSecondsHasBeenSet) {
    payload.WithInteger("retryAfterSeconds", m_retryAfterSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
