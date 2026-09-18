/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/LocalSecondaryIndexDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

LocalSecondaryIndexDescription::LocalSecondaryIndexDescription(JsonView jsonValue) { *this = jsonValue; }

LocalSecondaryIndexDescription& LocalSecondaryIndexDescription::operator=(JsonView jsonValue) { return *this; }

JsonValue LocalSecondaryIndexDescription::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
