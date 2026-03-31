/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredGitLabServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredGitLabServiceDetails::RegisteredGitLabServiceDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredGitLabServiceDetails& RegisteredGitLabServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetUrl")) {
    m_targetUrl = jsonValue.GetString("targetUrl");
    m_targetUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenType")) {
    m_tokenType = GitLabTokenTypeMapper::GetGitLabTokenTypeForName(jsonValue.GetString("tokenType"));
    m_tokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupId")) {
    m_groupId = jsonValue.GetString("groupId");
    m_groupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredGitLabServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_targetUrlHasBeenSet) {
    payload.WithString("targetUrl", m_targetUrl);
  }

  if (m_tokenTypeHasBeenSet) {
    payload.WithString("tokenType", GitLabTokenTypeMapper::GetNameForGitLabTokenType(m_tokenType));
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
