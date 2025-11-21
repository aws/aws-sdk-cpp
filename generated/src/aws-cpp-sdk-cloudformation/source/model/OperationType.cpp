/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OperationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace OperationTypeMapper {

static const int CREATE_STACK_HASH = HashingUtils::HashString("CREATE_STACK");
static const int UPDATE_STACK_HASH = HashingUtils::HashString("UPDATE_STACK");
static const int DELETE_STACK_HASH = HashingUtils::HashString("DELETE_STACK");
static const int CONTINUE_ROLLBACK_HASH = HashingUtils::HashString("CONTINUE_ROLLBACK");
static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");
static const int CREATE_CHANGESET_HASH = HashingUtils::HashString("CREATE_CHANGESET");

OperationType GetOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_STACK_HASH) {
    return OperationType::CREATE_STACK;
  } else if (hashCode == UPDATE_STACK_HASH) {
    return OperationType::UPDATE_STACK;
  } else if (hashCode == DELETE_STACK_HASH) {
    return OperationType::DELETE_STACK;
  } else if (hashCode == CONTINUE_ROLLBACK_HASH) {
    return OperationType::CONTINUE_ROLLBACK;
  } else if (hashCode == ROLLBACK_HASH) {
    return OperationType::ROLLBACK;
  } else if (hashCode == CREATE_CHANGESET_HASH) {
    return OperationType::CREATE_CHANGESET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperationType>(hashCode);
  }

  return OperationType::NOT_SET;
}

Aws::String GetNameForOperationType(OperationType enumValue) {
  switch (enumValue) {
    case OperationType::NOT_SET:
      return {};
    case OperationType::CREATE_STACK:
      return "CREATE_STACK";
    case OperationType::UPDATE_STACK:
      return "UPDATE_STACK";
    case OperationType::DELETE_STACK:
      return "DELETE_STACK";
    case OperationType::CONTINUE_ROLLBACK:
      return "CONTINUE_ROLLBACK";
    case OperationType::ROLLBACK:
      return "ROLLBACK";
    case OperationType::CREATE_CHANGESET:
      return "CREATE_CHANGESET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperationTypeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
