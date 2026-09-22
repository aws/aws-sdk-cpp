/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AccessProfileType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AccessProfileTypeMapper {

static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

AccessProfileType GetAccessProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_MANAGED_HASH) {
    return AccessProfileType::SERVICE_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return AccessProfileType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessProfileType>(hashCode);
  }

  return AccessProfileType::NOT_SET;
}

Aws::String GetNameForAccessProfileType(AccessProfileType enumValue) {
  switch (enumValue) {
    case AccessProfileType::NOT_SET:
      return {};
    case AccessProfileType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    case AccessProfileType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessProfileTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
