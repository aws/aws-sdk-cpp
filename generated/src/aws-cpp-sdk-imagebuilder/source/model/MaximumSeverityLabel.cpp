/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/imagebuilder/model/MaximumSeverityLabel.h>

using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {
namespace MaximumSeverityLabelMapper {

static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

MaximumSeverityLabel GetMaximumSeverityLabelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INFORMATIONAL_HASH) {
    return MaximumSeverityLabel::INFORMATIONAL;
  } else if (hashCode == LOW_HASH) {
    return MaximumSeverityLabel::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return MaximumSeverityLabel::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return MaximumSeverityLabel::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaximumSeverityLabel>(hashCode);
  }

  return MaximumSeverityLabel::NOT_SET;
}

Aws::String GetNameForMaximumSeverityLabel(MaximumSeverityLabel enumValue) {
  switch (enumValue) {
    case MaximumSeverityLabel::NOT_SET:
      return {};
    case MaximumSeverityLabel::INFORMATIONAL:
      return "INFORMATIONAL";
    case MaximumSeverityLabel::LOW:
      return "LOW";
    case MaximumSeverityLabel::MEDIUM:
      return "MEDIUM";
    case MaximumSeverityLabel::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaximumSeverityLabelMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
