/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BasicAuth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BasicAuth::BasicAuth(JsonView jsonValue) { *this = jsonValue; }

BasicAuth& BasicAuth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicAuth::Jsonize() const {
  JsonValue payload;

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
