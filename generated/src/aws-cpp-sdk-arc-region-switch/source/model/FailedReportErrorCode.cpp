/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/FailedReportErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace FailedReportErrorCodeMapper {

static const int insufficientPermissions_HASH = HashingUtils::HashString("insufficientPermissions");
static const int invalidResource_HASH = HashingUtils::HashString("invalidResource");
static const int configurationError_HASH = HashingUtils::HashString("configurationError");

FailedReportErrorCode GetFailedReportErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == insufficientPermissions_HASH) {
    return FailedReportErrorCode::insufficientPermissions;
  } else if (hashCode == invalidResource_HASH) {
    return FailedReportErrorCode::invalidResource;
  } else if (hashCode == configurationError_HASH) {
    return FailedReportErrorCode::configurationError;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailedReportErrorCode>(hashCode);
  }

  return FailedReportErrorCode::NOT_SET;
}

Aws::String GetNameForFailedReportErrorCode(FailedReportErrorCode enumValue) {
  switch (enumValue) {
    case FailedReportErrorCode::NOT_SET:
      return {};
    case FailedReportErrorCode::insufficientPermissions:
      return "insufficientPermissions";
    case FailedReportErrorCode::invalidResource:
      return "invalidResource";
    case FailedReportErrorCode::configurationError:
      return "configurationError";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailedReportErrorCodeMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
