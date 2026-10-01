/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/OnAttributeConflict.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace OnAttributeConflictMapper {

static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");

OnAttributeConflict GetOnAttributeConflictForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REPLACE_HASH) {
    return OnAttributeConflict::REPLACE;
  } else if (hashCode == PRESERVE_HASH) {
    return OnAttributeConflict::PRESERVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnAttributeConflict>(hashCode);
  }

  return OnAttributeConflict::NOT_SET;
}

Aws::String GetNameForOnAttributeConflict(OnAttributeConflict enumValue) {
  switch (enumValue) {
    case OnAttributeConflict::NOT_SET:
      return {};
    case OnAttributeConflict::REPLACE:
      return "REPLACE";
    case OnAttributeConflict::PRESERVE:
      return "PRESERVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnAttributeConflictMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
