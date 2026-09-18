/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/UpdateReplicationGroupMemberAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

UpdateReplicationGroupMemberAction::UpdateReplicationGroupMemberAction(JsonView jsonValue) { *this = jsonValue; }

UpdateReplicationGroupMemberAction& UpdateReplicationGroupMemberAction::operator=(JsonView jsonValue) { return *this; }

JsonValue UpdateReplicationGroupMemberAction::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
