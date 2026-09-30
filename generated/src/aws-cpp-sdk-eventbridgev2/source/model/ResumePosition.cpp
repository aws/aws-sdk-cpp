/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/ResumePosition.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace ResumePositionMapper {

static const int LAST_PROCESSED_HASH = HashingUtils::HashString("LAST_PROCESSED");
static const int LATEST_HASH = HashingUtils::HashString("LATEST");

ResumePosition GetResumePositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LAST_PROCESSED_HASH) {
    return ResumePosition::LAST_PROCESSED;
  } else if (hashCode == LATEST_HASH) {
    return ResumePosition::LATEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResumePosition>(hashCode);
  }

  return ResumePosition::NOT_SET;
}

Aws::String GetNameForResumePosition(ResumePosition enumValue) {
  switch (enumValue) {
    case ResumePosition::NOT_SET:
      return {};
    case ResumePosition::LAST_PROCESSED:
      return "LAST_PROCESSED";
    case ResumePosition::LATEST:
      return "LATEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResumePositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
