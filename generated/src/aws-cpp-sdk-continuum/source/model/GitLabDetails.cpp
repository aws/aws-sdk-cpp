/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitLabDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitLabDetails::GitLabDetails(JsonView jsonValue) { *this = jsonValue; }

GitLabDetails& GitLabDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceUrl")) {
    m_instanceUrl = jsonValue.GetString("instanceUrl");
    m_instanceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetType")) {
    m_targetType = GitLabTargetTypeMapper::GetGitLabTargetTypeForName(jsonValue.GetString("targetType"));
    m_targetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetPath")) {
    m_targetPath = jsonValue.GetString("targetPath");
    m_targetPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenRotation")) {
    m_tokenRotation = GitLabTokenRotationMapper::GetGitLabTokenRotationForName(jsonValue.GetString("tokenRotation"));
    m_tokenRotationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetString("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue GitLabDetails::Jsonize() const {
  JsonValue payload;

  if (m_instanceUrlHasBeenSet) {
    payload.WithString("instanceUrl", m_instanceUrl);
  }

  if (m_targetTypeHasBeenSet) {
    payload.WithString("targetType", GitLabTargetTypeMapper::GetNameForGitLabTargetType(m_targetType));
  }

  if (m_targetPathHasBeenSet) {
    payload.WithString("targetPath", m_targetPath);
  }

  if (m_tokenRotationHasBeenSet) {
    payload.WithString("tokenRotation", GitLabTokenRotationMapper::GetNameForGitLabTokenRotation(m_tokenRotation));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("expiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
