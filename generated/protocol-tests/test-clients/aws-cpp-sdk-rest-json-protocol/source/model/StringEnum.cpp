/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rest-json-protocol/model/StringEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace StringEnumMapper {

static const int enumvalue_HASH = HashingUtils::HashString("enumvalue");

StringEnum GetStringEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enumvalue_HASH) {
    return StringEnum::enumvalue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StringEnum>(hashCode);
  }

  return StringEnum::NOT_SET;
}

Aws::String GetNameForStringEnum(StringEnum enumValue) {
  switch (enumValue) {
    case StringEnum::NOT_SET:
      return {};
    case StringEnum::enumvalue:
      return "enumvalue";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StringEnumMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
