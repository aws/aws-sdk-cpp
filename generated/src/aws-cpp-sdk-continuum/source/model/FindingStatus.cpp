/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
static const int DISCARDED_HASH = HashingUtils::HashString("DISCARDED");

FindingStatus GetFindingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return FindingStatus::SUBMITTED;
  } else if (hashCode == VALIDATING_HASH) {
    return FindingStatus::VALIDATING;
  } else if (hashCode == CONFIRMED_HASH) {
    return FindingStatus::CONFIRMED;
  } else if (hashCode == DISCARDED_HASH) {
    return FindingStatus::DISCARDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingStatus>(hashCode);
  }

  return FindingStatus::NOT_SET;
}

Aws::String GetNameForFindingStatus(FindingStatus enumValue) {
  switch (enumValue) {
    case FindingStatus::NOT_SET:
      return {};
    case FindingStatus::SUBMITTED:
      return "SUBMITTED";
    case FindingStatus::VALIDATING:
      return "VALIDATING";
    case FindingStatus::CONFIRMED:
      return "CONFIRMED";
    case FindingStatus::DISCARDED:
      return "DISCARDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
