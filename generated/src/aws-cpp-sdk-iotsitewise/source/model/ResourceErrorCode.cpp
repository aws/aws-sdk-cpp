/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ResourceErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ResourceErrorCodeMapper {

static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");

ResourceErrorCode GetResourceErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_ERROR_HASH) {
    return ResourceErrorCode::VALIDATION_ERROR;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return ResourceErrorCode::INTERNAL_FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceErrorCode>(hashCode);
  }

  return ResourceErrorCode::NOT_SET;
}

Aws::String GetNameForResourceErrorCode(ResourceErrorCode enumValue) {
  switch (enumValue) {
    case ResourceErrorCode::NOT_SET:
      return {};
    case ResourceErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case ResourceErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
