/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/AutoScalingTargetTrackingScalingPolicyConfigurationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

AutoScalingTargetTrackingScalingPolicyConfigurationDescription::AutoScalingTargetTrackingScalingPolicyConfigurationDescription(
    JsonView jsonValue) {
  *this = jsonValue;
}

AutoScalingTargetTrackingScalingPolicyConfigurationDescription& AutoScalingTargetTrackingScalingPolicyConfigurationDescription::operator=(
    JsonView jsonValue) {
  return *this;
}

JsonValue AutoScalingTargetTrackingScalingPolicyConfigurationDescription::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
