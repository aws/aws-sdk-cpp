/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationItemResolutionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationItemResolutionStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

EvaluationItemResolutionStatus GetEvaluationItemResolutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return EvaluationItemResolutionStatus::PENDING;
  } else if (hashCode == RESOLVED_HASH) {
    return EvaluationItemResolutionStatus::RESOLVED;
  } else if (hashCode == FAILED_HASH) {
    return EvaluationItemResolutionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationItemResolutionStatus>(hashCode);
  }

  return EvaluationItemResolutionStatus::NOT_SET;
}

Aws::String GetNameForEvaluationItemResolutionStatus(EvaluationItemResolutionStatus enumValue) {
  switch (enumValue) {
    case EvaluationItemResolutionStatus::NOT_SET:
      return {};
    case EvaluationItemResolutionStatus::PENDING:
      return "PENDING";
    case EvaluationItemResolutionStatus::RESOLVED:
      return "RESOLVED";
    case EvaluationItemResolutionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationItemResolutionStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
