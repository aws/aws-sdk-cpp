/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AnnotationSeverityLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace AnnotationSeverityLevelMapper {

static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");

AnnotationSeverityLevel GetAnnotationSeverityLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INFORMATIONAL_HASH) {
    return AnnotationSeverityLevel::INFORMATIONAL;
  } else if (hashCode == LOW_HASH) {
    return AnnotationSeverityLevel::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return AnnotationSeverityLevel::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return AnnotationSeverityLevel::HIGH;
  } else if (hashCode == CRITICAL_HASH) {
    return AnnotationSeverityLevel::CRITICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnnotationSeverityLevel>(hashCode);
  }

  return AnnotationSeverityLevel::NOT_SET;
}

Aws::String GetNameForAnnotationSeverityLevel(AnnotationSeverityLevel enumValue) {
  switch (enumValue) {
    case AnnotationSeverityLevel::NOT_SET:
      return {};
    case AnnotationSeverityLevel::INFORMATIONAL:
      return "INFORMATIONAL";
    case AnnotationSeverityLevel::LOW:
      return "LOW";
    case AnnotationSeverityLevel::MEDIUM:
      return "MEDIUM";
    case AnnotationSeverityLevel::HIGH:
      return "HIGH";
    case AnnotationSeverityLevel::CRITICAL:
      return "CRITICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnnotationSeverityLevelMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
