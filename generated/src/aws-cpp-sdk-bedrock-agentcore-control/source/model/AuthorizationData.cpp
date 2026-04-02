/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AuthorizationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AuthorizationData::AuthorizationData(JsonView jsonValue) { *this = jsonValue; }

AuthorizationData& AuthorizationData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oauth2")) {
    m_oauth2 = jsonValue.GetObject("oauth2");
    m_oauth2HasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationData::Jsonize() const {
  JsonValue payload;

  if (m_oauth2HasBeenSet) {
    payload.WithObject("oauth2", m_oauth2.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
