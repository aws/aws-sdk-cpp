/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ComputeNodeErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ComputeNodeErrorCodeMapper {

static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int EXECUTION_ERROR_HASH = HashingUtils::HashString("EXECUTION_ERROR");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

ComputeNodeErrorCode GetComputeNodeErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_ERROR_HASH) {
    return ComputeNodeErrorCode::VALIDATION_ERROR;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return ComputeNodeErrorCode::INTERNAL_FAILURE;
  } else if (hashCode == EXECUTION_ERROR_HASH) {
    return ComputeNodeErrorCode::EXECUTION_ERROR;
  } else if (hashCode == TIMED_OUT_HASH) {
    return ComputeNodeErrorCode::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComputeNodeErrorCode>(hashCode);
  }

  return ComputeNodeErrorCode::NOT_SET;
}

Aws::String GetNameForComputeNodeErrorCode(ComputeNodeErrorCode enumValue) {
  switch (enumValue) {
    case ComputeNodeErrorCode::NOT_SET:
      return {};
    case ComputeNodeErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case ComputeNodeErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case ComputeNodeErrorCode::EXECUTION_ERROR:
      return "EXECUTION_ERROR";
    case ComputeNodeErrorCode::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComputeNodeErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
