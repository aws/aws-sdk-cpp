/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SlackConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SlackConfiguration::SlackConfiguration(JsonView jsonValue) { *this = jsonValue; }

SlackConfiguration& SlackConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workspaceId")) {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transmissionTarget")) {
    m_transmissionTarget = jsonValue.GetObject("transmissionTarget");
    m_transmissionTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue SlackConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_workspaceIdHasBeenSet) {
    payload.WithString("workspaceId", m_workspaceId);
  }

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_transmissionTargetHasBeenSet) {
    payload.WithObject("transmissionTarget", m_transmissionTarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
