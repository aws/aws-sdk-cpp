/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/SuccessCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace SuccessCodeMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int DEDUPLICATED_HASH = HashingUtils::HashString("DEDUPLICATED");

SuccessCode GetSuccessCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return SuccessCode::PUBLISHED;
  } else if (hashCode == DEDUPLICATED_HASH) {
    return SuccessCode::DEDUPLICATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SuccessCode>(hashCode);
  }

  return SuccessCode::NOT_SET;
}

Aws::String GetNameForSuccessCode(SuccessCode enumValue) {
  switch (enumValue) {
    case SuccessCode::NOT_SET:
      return {};
    case SuccessCode::PUBLISHED:
      return "PUBLISHED";
    case SuccessCode::DEDUPLICATED:
      return "DEDUPLICATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SuccessCodeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
