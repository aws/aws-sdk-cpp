/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ServeOn.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace ServeOnMapper {

static const int any_HASH = HashingUtils::HashString("any");
static const int anycast_ip_list_only_HASH = HashingUtils::HashString("anycast-ip-list-only");

ServeOn GetServeOnForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == any_HASH) {
    return ServeOn::any;
  } else if (hashCode == anycast_ip_list_only_HASH) {
    return ServeOn::anycast_ip_list_only;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServeOn>(hashCode);
  }

  return ServeOn::NOT_SET;
}

Aws::String GetNameForServeOn(ServeOn enumValue) {
  switch (enumValue) {
    case ServeOn::NOT_SET:
      return {};
    case ServeOn::any:
      return "any";
    case ServeOn::anycast_ip_list_only:
      return "anycast-ip-list-only";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServeOnMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
