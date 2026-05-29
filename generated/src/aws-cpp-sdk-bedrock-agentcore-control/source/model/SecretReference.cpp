/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SecretReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SecretReference::SecretReference(JsonView jsonValue) { *this = jsonValue; }

SecretReference& SecretReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretId")) {
    m_secretId = jsonValue.GetString("secretId");
    m_secretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jsonKey")) {
    m_jsonKey = jsonValue.GetString("jsonKey");
    m_jsonKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue SecretReference::Jsonize() const {
  JsonValue payload;

  if (m_secretIdHasBeenSet) {
    payload.WithString("secretId", m_secretId);
  }

  if (m_jsonKeyHasBeenSet) {
    payload.WithString("jsonKey", m_jsonKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
