/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/model/JobErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {
namespace JobErrorCodeMapper {

static const int ValidationError_HASH = HashingUtils::HashString("ValidationError");
static const int InternalServerError_HASH = HashingUtils::HashString("InternalServerError");

JobErrorCode GetJobErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ValidationError_HASH) {
    return JobErrorCode::ValidationError;
  } else if (hashCode == InternalServerError_HASH) {
    return JobErrorCode::InternalServerError;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobErrorCode>(hashCode);
  }

  return JobErrorCode::NOT_SET;
}

Aws::String GetNameForJobErrorCode(JobErrorCode enumValue) {
  switch (enumValue) {
    case JobErrorCode::NOT_SET:
      return {};
    case JobErrorCode::ValidationError:
      return "ValidationError";
    case JobErrorCode::InternalServerError:
      return "InternalServerError";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobErrorCodeMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
