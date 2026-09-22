/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AccessGrantType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AccessGrantTypeMapper {

static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

AccessGrantType GetAccessGrantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_MANAGED_HASH) {
    return AccessGrantType::SERVICE_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return AccessGrantType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessGrantType>(hashCode);
  }

  return AccessGrantType::NOT_SET;
}

Aws::String GetNameForAccessGrantType(AccessGrantType enumValue) {
  switch (enumValue) {
    case AccessGrantType::NOT_SET:
      return {};
    case AccessGrantType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    case AccessGrantType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessGrantTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
