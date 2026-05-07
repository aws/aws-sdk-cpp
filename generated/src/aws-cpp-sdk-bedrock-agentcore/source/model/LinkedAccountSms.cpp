/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LinkedAccountSms.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

LinkedAccountSms::LinkedAccountSms(JsonView jsonValue) { *this = jsonValue; }

LinkedAccountSms& LinkedAccountSms::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("phoneNumber")) {
    m_phoneNumber = jsonValue.GetString("phoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedAccountSms::Jsonize() const {
  JsonValue payload;

  if (m_phoneNumberHasBeenSet) {
    payload.WithString("phoneNumber", m_phoneNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
