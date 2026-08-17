/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotFoundBehaviorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NotFoundBehaviorTypeMapper {

static const int USE_DEFAULT_VALUE_HASH = HashingUtils::HashString("USE_DEFAULT_VALUE");
static const int OMIT_HASH = HashingUtils::HashString("OMIT");

NotFoundBehaviorType GetNotFoundBehaviorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USE_DEFAULT_VALUE_HASH) {
    return NotFoundBehaviorType::USE_DEFAULT_VALUE;
  } else if (hashCode == OMIT_HASH) {
    return NotFoundBehaviorType::OMIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotFoundBehaviorType>(hashCode);
  }

  return NotFoundBehaviorType::NOT_SET;
}

Aws::String GetNameForNotFoundBehaviorType(NotFoundBehaviorType enumValue) {
  switch (enumValue) {
    case NotFoundBehaviorType::NOT_SET:
      return {};
    case NotFoundBehaviorType::USE_DEFAULT_VALUE:
      return "USE_DEFAULT_VALUE";
    case NotFoundBehaviorType::OMIT:
      return "OMIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotFoundBehaviorTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
