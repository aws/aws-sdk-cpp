/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/WafPayloadTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace WafPayloadTypeEnumMapper {

static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int FORM_ENCODED_HASH = HashingUtils::HashString("FORM_ENCODED");

WafPayloadTypeEnum GetWafPayloadTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JSON_HASH) {
    return WafPayloadTypeEnum::JSON;
  } else if (hashCode == FORM_ENCODED_HASH) {
    return WafPayloadTypeEnum::FORM_ENCODED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WafPayloadTypeEnum>(hashCode);
  }

  return WafPayloadTypeEnum::NOT_SET;
}

Aws::String GetNameForWafPayloadTypeEnum(WafPayloadTypeEnum enumValue) {
  switch (enumValue) {
    case WafPayloadTypeEnum::NOT_SET:
      return {};
    case WafPayloadTypeEnum::JSON:
      return "JSON";
    case WafPayloadTypeEnum::FORM_ENCODED:
      return "FORM_ENCODED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WafPayloadTypeEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
