/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitLabConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

GitLabConfiguration::GitLabConfiguration(JsonView jsonValue) { *this = jsonValue; }

GitLabConfiguration& GitLabConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("accessToken")) {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue GitLabConfiguration::Jsonize() const {
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

  if (m_accessTokenHasBeenSet) {
    payload.WithString("accessToken", m_accessToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
