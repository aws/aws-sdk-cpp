/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/GitLabConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

GitLabConfiguration::GitLabConfiguration(JsonView jsonValue) { *this = jsonValue; }

GitLabConfiguration& GitLabConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("projectId")) {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectPath")) {
    m_projectPath = jsonValue.GetString("projectPath");
    m_projectPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceIdentifier")) {
    m_instanceIdentifier = jsonValue.GetString("instanceIdentifier");
    m_instanceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue GitLabConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_projectIdHasBeenSet) {
    payload.WithString("projectId", m_projectId);
  }

  if (m_projectPathHasBeenSet) {
    payload.WithString("projectPath", m_projectPath);
  }

  if (m_instanceIdentifierHasBeenSet) {
    payload.WithString("instanceIdentifier", m_instanceIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
