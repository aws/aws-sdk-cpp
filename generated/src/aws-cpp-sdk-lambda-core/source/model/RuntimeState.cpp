/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/RuntimeState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace RuntimeStateMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

RuntimeState GetRuntimeStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RuntimeState::ACTIVE;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return RuntimeState::PENDING_DELETION;
  } else if (hashCode == DELETING_HASH) {
    return RuntimeState::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return RuntimeState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeState>(hashCode);
  }

  return RuntimeState::NOT_SET;
}

Aws::String GetNameForRuntimeState(RuntimeState enumValue) {
  switch (enumValue) {
    case RuntimeState::NOT_SET:
      return {};
    case RuntimeState::ACTIVE:
      return "ACTIVE";
    case RuntimeState::PENDING_DELETION:
      return "PENDING_DELETION";
    case RuntimeState::DELETING:
      return "DELETING";
    case RuntimeState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
