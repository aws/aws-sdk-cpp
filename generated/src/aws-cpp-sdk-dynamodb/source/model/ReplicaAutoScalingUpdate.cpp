/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/ReplicaAutoScalingUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate(JsonView jsonValue) { *this = jsonValue; }

ReplicaAutoScalingUpdate& ReplicaAutoScalingUpdate::operator=(JsonView jsonValue) { return *this; }

JsonValue ReplicaAutoScalingUpdate::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
