/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/SsmSendCommandUngracefulBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace SsmSendCommandUngracefulBehaviorMapper {

static const int skip_HASH = HashingUtils::HashString("skip");

SsmSendCommandUngracefulBehavior GetSsmSendCommandUngracefulBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == skip_HASH) {
    return SsmSendCommandUngracefulBehavior::skip;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SsmSendCommandUngracefulBehavior>(hashCode);
  }

  return SsmSendCommandUngracefulBehavior::NOT_SET;
}

Aws::String GetNameForSsmSendCommandUngracefulBehavior(SsmSendCommandUngracefulBehavior enumValue) {
  switch (enumValue) {
    case SsmSendCommandUngracefulBehavior::NOT_SET:
      return {};
    case SsmSendCommandUngracefulBehavior::skip:
      return "skip";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SsmSendCommandUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
