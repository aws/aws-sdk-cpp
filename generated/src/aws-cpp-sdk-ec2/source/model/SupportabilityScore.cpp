/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SupportabilityScore.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SupportabilityScoreMapper {

static const int high_HASH = HashingUtils::HashString("high");
static const int medium_HASH = HashingUtils::HashString("medium");
static const int low_HASH = HashingUtils::HashString("low");

SupportabilityScore GetSupportabilityScoreForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == high_HASH) {
    return SupportabilityScore::high;
  } else if (hashCode == medium_HASH) {
    return SupportabilityScore::medium;
  } else if (hashCode == low_HASH) {
    return SupportabilityScore::low;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupportabilityScore>(hashCode);
  }

  return SupportabilityScore::NOT_SET;
}

Aws::String GetNameForSupportabilityScore(SupportabilityScore enumValue) {
  switch (enumValue) {
    case SupportabilityScore::NOT_SET:
      return {};
    case SupportabilityScore::high:
      return "high";
    case SupportabilityScore::medium:
      return "medium";
    case SupportabilityScore::low:
      return "low";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupportabilityScoreMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
