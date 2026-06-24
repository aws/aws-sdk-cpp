/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/Confidence.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ConfidenceMapper {

static const int Unknown_HASH = HashingUtils::HashString("Unknown");
static const int Low_HASH = HashingUtils::HashString("Low");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int High_HASH = HashingUtils::HashString("High");

Confidence GetConfidenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Unknown_HASH) {
    return Confidence::Unknown;
  } else if (hashCode == Low_HASH) {
    return Confidence::Low;
  } else if (hashCode == Medium_HASH) {
    return Confidence::Medium;
  } else if (hashCode == High_HASH) {
    return Confidence::High;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Confidence>(hashCode);
  }

  return Confidence::NOT_SET;
}

Aws::String GetNameForConfidence(Confidence enumValue) {
  switch (enumValue) {
    case Confidence::NOT_SET:
      return {};
    case Confidence::Unknown:
      return "Unknown";
    case Confidence::Low:
      return "Low";
    case Confidence::Medium:
      return "Medium";
    case Confidence::High:
      return "High";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfidenceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
