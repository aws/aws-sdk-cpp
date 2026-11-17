/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/TargetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace TargetTypeMapper {

static const int BUILT_IN_HASH = HashingUtils::HashString("BUILT_IN");
static const int NONE_HASH = HashingUtils::HashString("NONE");

TargetType GetTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUILT_IN_HASH) {
    return TargetType::BUILT_IN;
  } else if (hashCode == NONE_HASH) {
    return TargetType::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetType>(hashCode);
  }

  return TargetType::NOT_SET;
}

Aws::String GetNameForTargetType(TargetType enumValue) {
  switch (enumValue) {
    case TargetType::NOT_SET:
      return {};
    case TargetType::BUILT_IN:
      return "BUILT_IN";
    case TargetType::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
