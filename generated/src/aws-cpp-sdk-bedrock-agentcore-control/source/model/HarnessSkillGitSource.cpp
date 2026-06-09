/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSkillGitSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSkillGitSource::HarnessSkillGitSource(JsonView jsonValue) { *this = jsonValue; }

HarnessSkillGitSource& HarnessSkillGitSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("auth")) {
    m_auth = jsonValue.GetObject("auth");
    m_authHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSkillGitSource::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_authHasBeenSet) {
    payload.WithObject("auth", m_auth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
