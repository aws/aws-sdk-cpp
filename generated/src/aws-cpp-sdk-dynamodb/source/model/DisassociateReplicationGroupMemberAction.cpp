/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/DisassociateReplicationGroupMemberAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

DisassociateReplicationGroupMemberAction::DisassociateReplicationGroupMemberAction(JsonView jsonValue) { *this = jsonValue; }

DisassociateReplicationGroupMemberAction& DisassociateReplicationGroupMemberAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RegionName")) {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisassociationMode")) {
    m_disassociationMode = DisassociationModeMapper::GetDisassociationModeForName(jsonValue.GetString("DisassociationMode"));
    m_disassociationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue DisassociateReplicationGroupMemberAction::Jsonize() const {
  JsonValue payload;

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  if (m_disassociationModeHasBeenSet) {
    payload.WithString("DisassociationMode", DisassociationModeMapper::GetNameForDisassociationMode(m_disassociationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
