/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredGithubServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredGithubServiceDetails::RegisteredGithubServiceDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredGithubServiceDetails& RegisteredGithubServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("owner")) {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerType")) {
    m_ownerType = GithubRepoOwnerTypeMapper::GetGithubRepoOwnerTypeForName(jsonValue.GetString("ownerType"));
    m_ownerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetUrl")) {
    m_targetUrl = jsonValue.GetString("targetUrl");
    m_targetUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredGithubServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", m_owner);
  }

  if (m_ownerTypeHasBeenSet) {
    payload.WithString("ownerType", GithubRepoOwnerTypeMapper::GetNameForGithubRepoOwnerType(m_ownerType));
  }

  if (m_targetUrlHasBeenSet) {
    payload.WithString("targetUrl", m_targetUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
