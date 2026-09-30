/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/IncludePayload.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace IncludePayloadMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int ON_ERROR_ONLY_HASH = HashingUtils::HashString("ON_ERROR_ONLY");

IncludePayload GetIncludePayloadForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return IncludePayload::FULL;
  } else if (hashCode == ON_ERROR_ONLY_HASH) {
    return IncludePayload::ON_ERROR_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IncludePayload>(hashCode);
  }

  return IncludePayload::NOT_SET;
}

Aws::String GetNameForIncludePayload(IncludePayload enumValue) {
  switch (enumValue) {
    case IncludePayload::NOT_SET:
      return {};
    case IncludePayload::FULL:
      return "FULL";
    case IncludePayload::ON_ERROR_ONLY:
      return "ON_ERROR_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IncludePayloadMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
