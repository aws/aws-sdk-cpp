/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DetailedPipelineErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DetailedPipelineErrorCodeMapper {

static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int EXECUTION_ERROR_HASH = HashingUtils::HashString("EXECUTION_ERROR");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

DetailedPipelineErrorCode GetDetailedPipelineErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_ERROR_HASH) {
    return DetailedPipelineErrorCode::VALIDATION_ERROR;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return DetailedPipelineErrorCode::INTERNAL_FAILURE;
  } else if (hashCode == EXECUTION_ERROR_HASH) {
    return DetailedPipelineErrorCode::EXECUTION_ERROR;
  } else if (hashCode == TIMED_OUT_HASH) {
    return DetailedPipelineErrorCode::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetailedPipelineErrorCode>(hashCode);
  }

  return DetailedPipelineErrorCode::NOT_SET;
}

Aws::String GetNameForDetailedPipelineErrorCode(DetailedPipelineErrorCode enumValue) {
  switch (enumValue) {
    case DetailedPipelineErrorCode::NOT_SET:
      return {};
    case DetailedPipelineErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case DetailedPipelineErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case DetailedPipelineErrorCode::EXECUTION_ERROR:
      return "EXECUTION_ERROR";
    case DetailedPipelineErrorCode::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetailedPipelineErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
