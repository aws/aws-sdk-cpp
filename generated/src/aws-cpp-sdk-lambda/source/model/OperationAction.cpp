/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/OperationAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace OperationActionMapper {

static const int START_HASH = HashingUtils::HashString("START");
static const int SUCCEED_HASH = HashingUtils::HashString("SUCCEED");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");
static const int RETRY_HASH = HashingUtils::HashString("RETRY");
static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");

OperationAction GetOperationActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == START_HASH) {
    return OperationAction::START;
  } else if (hashCode == SUCCEED_HASH) {
    return OperationAction::SUCCEED;
  } else if (hashCode == FAIL_HASH) {
    return OperationAction::FAIL;
  } else if (hashCode == RETRY_HASH) {
    return OperationAction::RETRY;
  } else if (hashCode == CANCEL_HASH) {
    return OperationAction::CANCEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperationAction>(hashCode);
  }

  return OperationAction::NOT_SET;
}

Aws::String GetNameForOperationAction(OperationAction enumValue) {
  switch (enumValue) {
    case OperationAction::NOT_SET:
      return {};
    case OperationAction::START:
      return "START";
    case OperationAction::SUCCEED:
      return "SUCCEED";
    case OperationAction::FAIL:
      return "FAIL";
    case OperationAction::RETRY:
      return "RETRY";
    case OperationAction::CANCEL:
      return "CANCEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperationActionMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
