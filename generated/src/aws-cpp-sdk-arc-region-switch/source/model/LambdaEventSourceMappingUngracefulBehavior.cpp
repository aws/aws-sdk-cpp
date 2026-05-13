/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/LambdaEventSourceMappingUngracefulBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace LambdaEventSourceMappingUngracefulBehaviorMapper {

static const int skip_HASH = HashingUtils::HashString("skip");

LambdaEventSourceMappingUngracefulBehavior GetLambdaEventSourceMappingUngracefulBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == skip_HASH) {
    return LambdaEventSourceMappingUngracefulBehavior::skip;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LambdaEventSourceMappingUngracefulBehavior>(hashCode);
  }

  return LambdaEventSourceMappingUngracefulBehavior::NOT_SET;
}

Aws::String GetNameForLambdaEventSourceMappingUngracefulBehavior(LambdaEventSourceMappingUngracefulBehavior enumValue) {
  switch (enumValue) {
    case LambdaEventSourceMappingUngracefulBehavior::NOT_SET:
      return {};
    case LambdaEventSourceMappingUngracefulBehavior::skip:
      return "skip";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LambdaEventSourceMappingUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
