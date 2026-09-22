/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/ViewType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace ViewTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

ViewType GetViewTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return ViewType::USER;
  } else if (hashCode == MANAGED_HASH) {
    return ViewType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ViewType>(hashCode);
  }

  return ViewType::NOT_SET;
}

Aws::String GetNameForViewType(ViewType enumValue) {
  switch (enumValue) {
    case ViewType::NOT_SET:
      return {};
    case ViewType::USER:
      return "USER";
    case ViewType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ViewTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
