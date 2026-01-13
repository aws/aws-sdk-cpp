/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/DeploymentProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

DeploymentProperties::DeploymentProperties(JsonView jsonValue) { *this = jsonValue; }

DeploymentProperties& DeploymentProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTimeoutMinutes")) {
    m_startTimeoutMinutes = jsonValue.GetInteger("startTimeoutMinutes");
    m_startTimeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimeoutMinutes")) {
    m_endTimeoutMinutes = jsonValue.GetInteger("endTimeoutMinutes");
    m_endTimeoutMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentProperties::Jsonize() const {
  JsonValue payload;

  if (m_startTimeoutMinutesHasBeenSet) {
    payload.WithInteger("startTimeoutMinutes", m_startTimeoutMinutes);
  }

  if (m_endTimeoutMinutesHasBeenSet) {
    payload.WithInteger("endTimeoutMinutes", m_endTimeoutMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
