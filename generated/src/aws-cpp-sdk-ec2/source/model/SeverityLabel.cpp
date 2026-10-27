/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SeverityLabel.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SeverityLabelMapper {

static const int informational_HASH = HashingUtils::HashString("informational");
static const int low_HASH = HashingUtils::HashString("low");
static const int medium_HASH = HashingUtils::HashString("medium");
static const int high_HASH = HashingUtils::HashString("high");
static const int critical_HASH = HashingUtils::HashString("critical");

SeverityLabel GetSeverityLabelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == informational_HASH) {
    return SeverityLabel::informational;
  } else if (hashCode == low_HASH) {
    return SeverityLabel::low;
  } else if (hashCode == medium_HASH) {
    return SeverityLabel::medium;
  } else if (hashCode == high_HASH) {
    return SeverityLabel::high;
  } else if (hashCode == critical_HASH) {
    return SeverityLabel::critical;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SeverityLabel>(hashCode);
  }

  return SeverityLabel::NOT_SET;
}

Aws::String GetNameForSeverityLabel(SeverityLabel enumValue) {
  switch (enumValue) {
    case SeverityLabel::NOT_SET:
      return {};
    case SeverityLabel::informational:
      return "informational";
    case SeverityLabel::low:
      return "low";
    case SeverityLabel::medium:
      return "medium";
    case SeverityLabel::high:
      return "high";
    case SeverityLabel::critical:
      return "critical";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SeverityLabelMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
