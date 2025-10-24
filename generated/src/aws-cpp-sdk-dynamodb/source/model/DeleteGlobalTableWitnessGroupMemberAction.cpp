﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/DeleteGlobalTableWitnessGroupMemberAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

DeleteGlobalTableWitnessGroupMemberAction::DeleteGlobalTableWitnessGroupMemberAction(JsonView jsonValue) { *this = jsonValue; }

DeleteGlobalTableWitnessGroupMemberAction& DeleteGlobalTableWitnessGroupMemberAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RegionName")) {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteGlobalTableWitnessGroupMemberAction::Jsonize() const {
  JsonValue payload;

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
