/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/OrgSourceDeploymentState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

OrgSourceDeploymentState::OrgSourceDeploymentState(JsonView jsonValue) { *this = jsonValue; }

OrgSourceDeploymentState& OrgSourceDeploymentState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deployedAccountCount")) {
    m_deployedAccountCount = jsonValue.GetInteger("deployedAccountCount");
    m_deployedAccountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issues")) {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("issues");
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastEvaluatedAt")) {
    m_lastEvaluatedAt = jsonValue.GetString("lastEvaluatedAt");
    m_lastEvaluatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue OrgSourceDeploymentState::Jsonize() const {
  JsonValue payload;

  if (m_deployedAccountCountHasBeenSet) {
    payload.WithInteger("deployedAccountCount", m_deployedAccountCount);
  }

  if (m_issuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      issuesJsonList[issuesIndex].AsObject(m_issues[issuesIndex].Jsonize());
    }
    payload.WithArray("issues", std::move(issuesJsonList));
  }

  if (m_lastEvaluatedAtHasBeenSet) {
    payload.WithString("lastEvaluatedAt", m_lastEvaluatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
