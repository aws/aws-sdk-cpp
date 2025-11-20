/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DetectionSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DetectionSourceMapper {

static const int AMAZON_HASH = HashingUtils::HashString("AMAZON");
static const int BITDEFENDER_HASH = HashingUtils::HashString("BITDEFENDER");

DetectionSource GetDetectionSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AMAZON_HASH) {
    return DetectionSource::AMAZON;
  } else if (hashCode == BITDEFENDER_HASH) {
    return DetectionSource::BITDEFENDER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetectionSource>(hashCode);
  }

  return DetectionSource::NOT_SET;
}

Aws::String GetNameForDetectionSource(DetectionSource enumValue) {
  switch (enumValue) {
    case DetectionSource::NOT_SET:
      return {};
    case DetectionSource::AMAZON:
      return "AMAZON";
    case DetectionSource::BITDEFENDER:
      return "BITDEFENDER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetectionSourceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
