/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/SummaryStateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace SummaryStateTypeMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");
static const int NOT_SUPPORTED_HASH = HashingUtils::HashString("NOT_SUPPORTED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SummaryStateType GetSummaryStateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return SummaryStateType::AVAILABLE;
  } else if (hashCode == NOT_AVAILABLE_HASH) {
    return SummaryStateType::NOT_AVAILABLE;
  } else if (hashCode == NOT_SUPPORTED_HASH) {
    return SummaryStateType::NOT_SUPPORTED;
  } else if (hashCode == FAILED_HASH) {
    return SummaryStateType::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SummaryStateType>(hashCode);
  }

  return SummaryStateType::NOT_SET;
}

Aws::String GetNameForSummaryStateType(SummaryStateType enumValue) {
  switch (enumValue) {
    case SummaryStateType::NOT_SET:
      return {};
    case SummaryStateType::AVAILABLE:
      return "AVAILABLE";
    case SummaryStateType::NOT_AVAILABLE:
      return "NOT_AVAILABLE";
    case SummaryStateType::NOT_SUPPORTED:
      return "NOT_SUPPORTED";
    case SummaryStateType::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SummaryStateTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
