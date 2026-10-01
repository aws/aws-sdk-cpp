/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/model/FunctionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {
namespace FunctionStateMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

FunctionState GetFunctionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return FunctionState::Pending;
  } else if (hashCode == Active_HASH) {
    return FunctionState::Active;
  } else if (hashCode == Failed_HASH) {
    return FunctionState::Failed;
  } else if (hashCode == Deleting_HASH) {
    return FunctionState::Deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FunctionState>(hashCode);
  }

  return FunctionState::NOT_SET;
}

Aws::String GetNameForFunctionState(FunctionState enumValue) {
  switch (enumValue) {
    case FunctionState::NOT_SET:
      return {};
    case FunctionState::Pending:
      return "Pending";
    case FunctionState::Active:
      return "Active";
    case FunctionState::Failed:
      return "Failed";
    case FunctionState::Deleting:
      return "Deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FunctionStateMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
