/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateOutboundEmailMessageSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace UpdateOutboundEmailMessageSourceTypeMapper {

static const int RAW_HASH = HashingUtils::HashString("RAW");

UpdateOutboundEmailMessageSourceType GetUpdateOutboundEmailMessageSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_HASH) {
    return UpdateOutboundEmailMessageSourceType::RAW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateOutboundEmailMessageSourceType>(hashCode);
  }

  return UpdateOutboundEmailMessageSourceType::NOT_SET;
}

Aws::String GetNameForUpdateOutboundEmailMessageSourceType(UpdateOutboundEmailMessageSourceType enumValue) {
  switch (enumValue) {
    case UpdateOutboundEmailMessageSourceType::NOT_SET:
      return {};
    case UpdateOutboundEmailMessageSourceType::RAW:
      return "RAW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateOutboundEmailMessageSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
