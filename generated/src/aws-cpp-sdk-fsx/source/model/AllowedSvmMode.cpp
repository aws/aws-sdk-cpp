/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/AllowedSvmMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace AllowedSvmModeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");

AllowedSvmMode GetAllowedSvmModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return AllowedSvmMode::ALL;
  } else if (hashCode == NONE_HASH) {
    return AllowedSvmMode::NONE;
  } else if (hashCode == SPECIFIED_HASH) {
    return AllowedSvmMode::SPECIFIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AllowedSvmMode>(hashCode);
  }

  return AllowedSvmMode::NOT_SET;
}

Aws::String GetNameForAllowedSvmMode(AllowedSvmMode enumValue) {
  switch (enumValue) {
    case AllowedSvmMode::NOT_SET:
      return {};
    case AllowedSvmMode::ALL:
      return "ALL";
    case AllowedSvmMode::NONE:
      return "NONE";
    case AllowedSvmMode::SPECIFIED:
      return "SPECIFIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AllowedSvmModeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
