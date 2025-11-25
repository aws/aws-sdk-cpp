/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ViewerMtlsMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace ViewerMtlsModeMapper {

static const int required_HASH = HashingUtils::HashString("required");
static const int optional_HASH = HashingUtils::HashString("optional");

ViewerMtlsMode GetViewerMtlsModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == required_HASH) {
    return ViewerMtlsMode::required;
  } else if (hashCode == optional_HASH) {
    return ViewerMtlsMode::optional;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ViewerMtlsMode>(hashCode);
  }

  return ViewerMtlsMode::NOT_SET;
}

Aws::String GetNameForViewerMtlsMode(ViewerMtlsMode enumValue) {
  switch (enumValue) {
    case ViewerMtlsMode::NOT_SET:
      return {};
    case ViewerMtlsMode::required:
      return "required";
    case ViewerMtlsMode::optional:
      return "optional";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ViewerMtlsModeMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
