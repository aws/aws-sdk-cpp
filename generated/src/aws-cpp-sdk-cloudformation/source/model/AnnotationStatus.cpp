/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AnnotationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace AnnotationStatusMapper {

static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");

AnnotationStatus GetAnnotationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSED_HASH) {
    return AnnotationStatus::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return AnnotationStatus::FAILED;
  } else if (hashCode == SKIPPED_HASH) {
    return AnnotationStatus::SKIPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnnotationStatus>(hashCode);
  }

  return AnnotationStatus::NOT_SET;
}

Aws::String GetNameForAnnotationStatus(AnnotationStatus enumValue) {
  switch (enumValue) {
    case AnnotationStatus::NOT_SET:
      return {};
    case AnnotationStatus::PASSED:
      return "PASSED";
    case AnnotationStatus::FAILED:
      return "FAILED";
    case AnnotationStatus::SKIPPED:
      return "SKIPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnnotationStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
