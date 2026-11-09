/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitHubTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitHubTarget::GitHubTarget(JsonView jsonValue) { *this = jsonValue; }

GitHubTarget& GitHubTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("owner")) {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repository")) {
    m_repository = jsonValue.GetString("repository");
    m_repositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pullRequestNumber")) {
    m_pullRequestNumber = jsonValue.GetInt64("pullRequestNumber");
    m_pullRequestNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("headSha")) {
    m_headSha = jsonValue.GetString("headSha");
    m_headShaHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubTarget::Jsonize() const {
  JsonValue payload;

  if (m_ownerHasBeenSet) {
    payload.WithString("owner", m_owner);
  }

  if (m_repositoryHasBeenSet) {
    payload.WithString("repository", m_repository);
  }

  if (m_pullRequestNumberHasBeenSet) {
    payload.WithInt64("pullRequestNumber", m_pullRequestNumber);
  }

  if (m_headShaHasBeenSet) {
    payload.WithString("headSha", m_headSha);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
