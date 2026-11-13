/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/RuntimeAliasState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace RuntimeAliasStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");

RuntimeAliasState GetRuntimeAliasStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return RuntimeAliasState::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return RuntimeAliasState::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return RuntimeAliasState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return RuntimeAliasState::DELETING;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return RuntimeAliasState::PENDING_DELETION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeAliasState>(hashCode);
  }

  return RuntimeAliasState::NOT_SET;
}

Aws::String GetNameForRuntimeAliasState(RuntimeAliasState enumValue) {
  switch (enumValue) {
    case RuntimeAliasState::NOT_SET:
      return {};
    case RuntimeAliasState::CREATING:
      return "CREATING";
    case RuntimeAliasState::ACTIVE:
      return "ACTIVE";
    case RuntimeAliasState::UPDATING:
      return "UPDATING";
    case RuntimeAliasState::DELETING:
      return "DELETING";
    case RuntimeAliasState::PENDING_DELETION:
      return "PENDING_DELETION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeAliasStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
