/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ResponseMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ResponseModeMapper {

static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");

ResponseMode GetResponseModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCREMENTAL_HASH) {
    return ResponseMode::INCREMENTAL;
  } else if (hashCode == COMPLETE_HASH) {
    return ResponseMode::COMPLETE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponseMode>(hashCode);
  }

  return ResponseMode::NOT_SET;
}

Aws::String GetNameForResponseMode(ResponseMode enumValue) {
  switch (enumValue) {
    case ResponseMode::NOT_SET:
      return {};
    case ResponseMode::INCREMENTAL:
      return "INCREMENTAL";
    case ResponseMode::COMPLETE:
      return "COMPLETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponseModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
