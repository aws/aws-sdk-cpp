/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/OAuth2Authentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

OAuth2Authentication::OAuth2Authentication(JsonView jsonValue) { *this = jsonValue; }

OAuth2Authentication& OAuth2Authentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sub")) {
    m_sub = jsonValue.GetString("sub");
    m_subHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailAddress")) {
    m_emailAddress = jsonValue.GetString("emailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2Authentication::Jsonize() const {
  JsonValue payload;

  if (m_subHasBeenSet) {
    payload.WithString("sub", m_sub);
  }

  if (m_emailAddressHasBeenSet) {
    payload.WithString("emailAddress", m_emailAddress);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
