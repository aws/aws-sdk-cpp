/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MSTeamsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MSTeamsConfiguration::MSTeamsConfiguration(JsonView jsonValue) { *this = jsonValue; }

MSTeamsConfiguration& MSTeamsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("teamId")) {
    m_teamId = jsonValue.GetString("teamId");
    m_teamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("teamName")) {
    m_teamName = jsonValue.GetString("teamName");
    m_teamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transmissionTarget")) {
    m_transmissionTarget = jsonValue.GetObject("transmissionTarget");
    m_transmissionTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue MSTeamsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_teamIdHasBeenSet) {
    payload.WithString("teamId", m_teamId);
  }

  if (m_teamNameHasBeenSet) {
    payload.WithString("teamName", m_teamName);
  }

  if (m_transmissionTargetHasBeenSet) {
    payload.WithObject("transmissionTarget", m_transmissionTarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
