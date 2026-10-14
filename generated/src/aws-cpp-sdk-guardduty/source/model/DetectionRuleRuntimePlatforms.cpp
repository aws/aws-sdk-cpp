/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleRuntimePlatforms.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleRuntimePlatforms::DetectionRuleRuntimePlatforms(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleRuntimePlatforms& DetectionRuleRuntimePlatforms::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eks")) {
    m_eks = jsonValue.GetObject("eks");
    m_eksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2")) {
    m_ec2 = jsonValue.GetObject("ec2");
    m_ec2HasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecsFargate")) {
    m_ecsFargate = jsonValue.GetObject("ecsFargate");
    m_ecsFargateHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleRuntimePlatforms::Jsonize() const {
  JsonValue payload;

  if (m_eksHasBeenSet) {
    payload.WithObject("eks", m_eks.Jsonize());
  }

  if (m_ec2HasBeenSet) {
    payload.WithObject("ec2", m_ec2.Jsonize());
  }

  if (m_ecsFargateHasBeenSet) {
    payload.WithObject("ecsFargate", m_ecsFargate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
