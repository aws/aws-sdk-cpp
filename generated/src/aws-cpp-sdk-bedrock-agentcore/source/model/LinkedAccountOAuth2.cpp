/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LinkedAccountOAuth2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

LinkedAccountOAuth2::LinkedAccountOAuth2(JsonView jsonValue) { *this = jsonValue; }

LinkedAccountOAuth2& LinkedAccountOAuth2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("google")) {
    m_google = jsonValue.GetObject("google");
    m_googleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apple")) {
    m_apple = jsonValue.GetObject("apple");
    m_appleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("x")) {
    m_x = jsonValue.GetObject("x");
    m_xHasBeenSet = true;
  }
  if (jsonValue.ValueExists("telegram")) {
    m_telegram = jsonValue.GetObject("telegram");
    m_telegramHasBeenSet = true;
  }
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedAccountOAuth2::Jsonize() const {
  JsonValue payload;

  if (m_googleHasBeenSet) {
    payload.WithObject("google", m_google.Jsonize());
  }

  if (m_appleHasBeenSet) {
    payload.WithObject("apple", m_apple.Jsonize());
  }

  if (m_xHasBeenSet) {
    payload.WithObject("x", m_x.Jsonize());
  }

  if (m_telegramHasBeenSet) {
    payload.WithObject("telegram", m_telegram.Jsonize());
  }

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
