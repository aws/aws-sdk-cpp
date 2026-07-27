/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ObservationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ObservationModeMapper {

static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int FIXED_HASH = HashingUtils::HashString("FIXED");

ObservationMode GetObservationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SCHEDULED_HASH) {
    return ObservationMode::SCHEDULED;
  } else if (hashCode == FIXED_HASH) {
    return ObservationMode::FIXED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ObservationMode>(hashCode);
  }

  return ObservationMode::NOT_SET;
}

Aws::String GetNameForObservationMode(ObservationMode enumValue) {
  switch (enumValue) {
    case ObservationMode::NOT_SET:
      return {};
    case ObservationMode::SCHEDULED:
      return "SCHEDULED";
    case ObservationMode::FIXED:
      return "FIXED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ObservationModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
