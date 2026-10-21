/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MSTeamsTransmissionTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MSTeamsTransmissionTarget::MSTeamsTransmissionTarget(JsonView jsonValue) { *this = jsonValue; }

MSTeamsTransmissionTarget& MSTeamsTransmissionTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("opsOncallTarget")) {
    m_opsOncallTarget = jsonValue.GetObject("opsOncallTarget");
    m_opsOncallTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("opsSRETarget")) {
    m_opsSRETarget = jsonValue.GetObject("opsSRETarget");
    m_opsSRETargetHasBeenSet = true;
  }
  return *this;
}

JsonValue MSTeamsTransmissionTarget::Jsonize() const {
  JsonValue payload;

  if (m_opsOncallTargetHasBeenSet) {
    payload.WithObject("opsOncallTarget", m_opsOncallTarget.Jsonize());
  }

  if (m_opsSRETargetHasBeenSet) {
    payload.WithObject("opsSRETarget", m_opsSRETarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
