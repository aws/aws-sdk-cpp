/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingVerdict.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingVerdictMapper {

static const int TRUE_POSITIVE_HASH = HashingUtils::HashString("TRUE_POSITIVE");
static const int FALSE_POSITIVE_HASH = HashingUtils::HashString("FALSE_POSITIVE");
static const int BENIGN_TRUE_POSITIVE_HASH = HashingUtils::HashString("BENIGN_TRUE_POSITIVE");
static const int NEEDS_REVIEW_HASH = HashingUtils::HashString("NEEDS_REVIEW");

FindingVerdict GetFindingVerdictForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRUE_POSITIVE_HASH) {
    return FindingVerdict::TRUE_POSITIVE;
  } else if (hashCode == FALSE_POSITIVE_HASH) {
    return FindingVerdict::FALSE_POSITIVE;
  } else if (hashCode == BENIGN_TRUE_POSITIVE_HASH) {
    return FindingVerdict::BENIGN_TRUE_POSITIVE;
  } else if (hashCode == NEEDS_REVIEW_HASH) {
    return FindingVerdict::NEEDS_REVIEW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingVerdict>(hashCode);
  }

  return FindingVerdict::NOT_SET;
}

Aws::String GetNameForFindingVerdict(FindingVerdict enumValue) {
  switch (enumValue) {
    case FindingVerdict::NOT_SET:
      return {};
    case FindingVerdict::TRUE_POSITIVE:
      return "TRUE_POSITIVE";
    case FindingVerdict::FALSE_POSITIVE:
      return "FALSE_POSITIVE";
    case FindingVerdict::BENIGN_TRUE_POSITIVE:
      return "BENIGN_TRUE_POSITIVE";
    case FindingVerdict::NEEDS_REVIEW:
      return "NEEDS_REVIEW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingVerdictMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
