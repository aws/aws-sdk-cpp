/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/PipelineErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace PipelineErrorCodeMapper {

static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int EXECUTION_ERROR_HASH = HashingUtils::HashString("EXECUTION_ERROR");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

PipelineErrorCode GetPipelineErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_ERROR_HASH) {
    return PipelineErrorCode::VALIDATION_ERROR;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return PipelineErrorCode::INTERNAL_FAILURE;
  } else if (hashCode == EXECUTION_ERROR_HASH) {
    return PipelineErrorCode::EXECUTION_ERROR;
  } else if (hashCode == TIMED_OUT_HASH) {
    return PipelineErrorCode::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PipelineErrorCode>(hashCode);
  }

  return PipelineErrorCode::NOT_SET;
}

Aws::String GetNameForPipelineErrorCode(PipelineErrorCode enumValue) {
  switch (enumValue) {
    case PipelineErrorCode::NOT_SET:
      return {};
    case PipelineErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case PipelineErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case PipelineErrorCode::EXECUTION_ERROR:
      return "EXECUTION_ERROR";
    case PipelineErrorCode::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PipelineErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
