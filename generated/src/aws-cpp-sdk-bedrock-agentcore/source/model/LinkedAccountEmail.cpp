/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LinkedAccountEmail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

LinkedAccountEmail::LinkedAccountEmail(JsonView jsonValue) { *this = jsonValue; }

LinkedAccountEmail& LinkedAccountEmail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("emailAddress")) {
    m_emailAddress = jsonValue.GetString("emailAddress");
    m_emailAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedAccountEmail::Jsonize() const {
  JsonValue payload;

  if (m_emailAddressHasBeenSet) {
    payload.WithString("emailAddress", m_emailAddress);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
