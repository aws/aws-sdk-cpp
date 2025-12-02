/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/OperationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace OperationTypeMapper {

static const int EXECUTION_HASH = HashingUtils::HashString("EXECUTION");
static const int CONTEXT_HASH = HashingUtils::HashString("CONTEXT");
static const int STEP_HASH = HashingUtils::HashString("STEP");
static const int WAIT_HASH = HashingUtils::HashString("WAIT");
static const int CALLBACK_HASH = HashingUtils::HashString("CALLBACK");
static const int CHAINED_INVOKE_HASH = HashingUtils::HashString("CHAINED_INVOKE");

OperationType GetOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXECUTION_HASH) {
    return OperationType::EXECUTION;
  } else if (hashCode == CONTEXT_HASH) {
    return OperationType::CONTEXT;
  } else if (hashCode == STEP_HASH) {
    return OperationType::STEP;
  } else if (hashCode == WAIT_HASH) {
    return OperationType::WAIT;
  } else if (hashCode == CALLBACK_HASH) {
    return OperationType::CALLBACK;
  } else if (hashCode == CHAINED_INVOKE_HASH) {
    return OperationType::CHAINED_INVOKE;
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
    case OperationType::EXECUTION:
      return "EXECUTION";
    case OperationType::CONTEXT:
      return "CONTEXT";
    case OperationType::STEP:
      return "STEP";
    case OperationType::WAIT:
      return "WAIT";
    case OperationType::CALLBACK:
      return "CALLBACK";
    case OperationType::CHAINED_INVOKE:
      return "CHAINED_INVOKE";
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
}  // namespace Lambda
}  // namespace Aws
