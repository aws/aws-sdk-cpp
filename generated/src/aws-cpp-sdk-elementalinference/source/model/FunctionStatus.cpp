/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/FunctionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace FunctionStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int REFERENCED_HASH = HashingUtils::HashString("REFERENCED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

FunctionStatus GetFunctionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return FunctionStatus::CREATING;
  } else if (hashCode == AVAILABLE_HASH) {
    return FunctionStatus::AVAILABLE;
  } else if (hashCode == REFERENCED_HASH) {
    return FunctionStatus::REFERENCED;
  } else if (hashCode == DELETING_HASH) {
    return FunctionStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return FunctionStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FunctionStatus>(hashCode);
  }

  return FunctionStatus::NOT_SET;
}

Aws::String GetNameForFunctionStatus(FunctionStatus enumValue) {
  switch (enumValue) {
    case FunctionStatus::NOT_SET:
      return {};
    case FunctionStatus::CREATING:
      return "CREATING";
    case FunctionStatus::AVAILABLE:
      return "AVAILABLE";
    case FunctionStatus::REFERENCED:
      return "REFERENCED";
    case FunctionStatus::DELETING:
      return "DELETING";
    case FunctionStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FunctionStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
