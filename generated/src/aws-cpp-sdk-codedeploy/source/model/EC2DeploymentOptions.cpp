/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/EC2DeploymentOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

EC2DeploymentOptions::EC2DeploymentOptions(JsonView jsonValue) { *this = jsonValue; }

EC2DeploymentOptions& EC2DeploymentOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoScalingGroupProcessesToSuspend")) {
    Aws::Utils::Array<JsonView> autoScalingGroupProcessesToSuspendJsonList = jsonValue.GetArray("autoScalingGroupProcessesToSuspend");
    for (unsigned autoScalingGroupProcessesToSuspendIndex = 0;
         autoScalingGroupProcessesToSuspendIndex < autoScalingGroupProcessesToSuspendJsonList.GetLength();
         ++autoScalingGroupProcessesToSuspendIndex) {
      m_autoScalingGroupProcessesToSuspend.push_back(AutoScalingGroupProcessMapper::GetAutoScalingGroupProcessForName(
          autoScalingGroupProcessesToSuspendJsonList[autoScalingGroupProcessesToSuspendIndex].AsString()));
    }
    m_autoScalingGroupProcessesToSuspendHasBeenSet = true;
  }
  return *this;
}

JsonValue EC2DeploymentOptions::Jsonize() const {
  JsonValue payload;

  if (m_autoScalingGroupProcessesToSuspendHasBeenSet) {
    Aws::Utils::Array<JsonValue> autoScalingGroupProcessesToSuspendJsonList(m_autoScalingGroupProcessesToSuspend.size());
    for (unsigned autoScalingGroupProcessesToSuspendIndex = 0;
         autoScalingGroupProcessesToSuspendIndex < autoScalingGroupProcessesToSuspendJsonList.GetLength();
         ++autoScalingGroupProcessesToSuspendIndex) {
      autoScalingGroupProcessesToSuspendJsonList[autoScalingGroupProcessesToSuspendIndex].AsString(
          AutoScalingGroupProcessMapper::GetNameForAutoScalingGroupProcess(
              m_autoScalingGroupProcessesToSuspend[autoScalingGroupProcessesToSuspendIndex]));
    }
    payload.WithArray("autoScalingGroupProcessesToSuspend", std::move(autoScalingGroupProcessesToSuspendJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
