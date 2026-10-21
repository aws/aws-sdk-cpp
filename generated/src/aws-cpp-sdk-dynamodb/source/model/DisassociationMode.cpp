/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/DisassociationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace DisassociationModeMapper {

static const int WAIT_FOR_REPLICATION_HASH = HashingUtils::HashString("WAIT_FOR_REPLICATION");

DisassociationMode GetDisassociationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAIT_FOR_REPLICATION_HASH) {
    return DisassociationMode::WAIT_FOR_REPLICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DisassociationMode>(hashCode);
  }

  return DisassociationMode::NOT_SET;
}

Aws::String GetNameForDisassociationMode(DisassociationMode enumValue) {
  switch (enumValue) {
    case DisassociationMode::NOT_SET:
      return {};
    case DisassociationMode::WAIT_FOR_REPLICATION:
      return "WAIT_FOR_REPLICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DisassociationModeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
