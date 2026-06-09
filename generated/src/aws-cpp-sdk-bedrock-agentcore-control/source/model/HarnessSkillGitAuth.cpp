/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSkillGitAuth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSkillGitAuth::HarnessSkillGitAuth(JsonView jsonValue) { *this = jsonValue; }

HarnessSkillGitAuth& HarnessSkillGitAuth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialArn")) {
    m_credentialArn = jsonValue.GetString("credentialArn");
    m_credentialArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSkillGitAuth::Jsonize() const {
  JsonValue payload;

  if (m_credentialArnHasBeenSet) {
    payload.WithString("credentialArn", m_credentialArn);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
