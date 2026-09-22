/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AssumeStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AssumeStatusMapper {

static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");

AssumeStatus GetAssumeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOWED_HASH) {
    return AssumeStatus::ALLOWED;
  } else if (hashCode == DENIED_HASH) {
    return AssumeStatus::DENIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssumeStatus>(hashCode);
  }

  return AssumeStatus::NOT_SET;
}

Aws::String GetNameForAssumeStatus(AssumeStatus enumValue) {
  switch (enumValue) {
    case AssumeStatus::NOT_SET:
      return {};
    case AssumeStatus::ALLOWED:
      return "ALLOWED";
    case AssumeStatus::DENIED:
      return "DENIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssumeStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
