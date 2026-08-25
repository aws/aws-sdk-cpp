/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/GitHubConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

GitHubConfiguration::GitHubConfiguration(JsonView jsonValue) { *this = jsonValue; }

GitHubConfiguration& GitHubConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("repoName")) {
    m_repoName = jsonValue.GetString("repoName");
    m_repoNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repoId")) {
    m_repoId = jsonValue.GetString("repoId");
    m_repoIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owner")) {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerType")) {
    m_ownerType = GithubRepoOwnerTypeMapper::GetGithubRepoOwnerTypeForName(jsonValue.GetString("ownerType"));
    m_ownerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceIdentifier")) {
    m_instanceIdentifier = jsonValue.GetString("instanceIdentifier");
    m_instanceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_repoNameHasBeenSet) {
    payload.WithString("repoName", m_repoName);
  }

  if (m_repoIdHasBeenSet) {
    payload.WithString("repoId", m_repoId);
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", m_owner);
  }

  if (m_ownerTypeHasBeenSet) {
    payload.WithString("ownerType", GithubRepoOwnerTypeMapper::GetNameForGithubRepoOwnerType(m_ownerType));
  }

  if (m_instanceIdentifierHasBeenSet) {
    payload.WithString("instanceIdentifier", m_instanceIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
