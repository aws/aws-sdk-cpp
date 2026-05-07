/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LinkedAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

LinkedAccount::LinkedAccount(JsonView jsonValue) { *this = jsonValue; }

LinkedAccount& LinkedAccount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetObject("email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sms")) {
    m_sms = jsonValue.GetObject("sms");
    m_smsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("developerJwt")) {
    m_developerJwt = jsonValue.GetObject("developerJwt");
    m_developerJwtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oAuth2")) {
    m_oAuth2 = jsonValue.GetObject("oAuth2");
    m_oAuth2HasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedAccount::Jsonize() const {
  JsonValue payload;

  if (m_emailHasBeenSet) {
    payload.WithObject("email", m_email.Jsonize());
  }

  if (m_smsHasBeenSet) {
    payload.WithObject("sms", m_sms.Jsonize());
  }

  if (m_developerJwtHasBeenSet) {
    payload.WithObject("developerJwt", m_developerJwt.Jsonize());
  }

  if (m_oAuth2HasBeenSet) {
    payload.WithObject("oAuth2", m_oAuth2.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
