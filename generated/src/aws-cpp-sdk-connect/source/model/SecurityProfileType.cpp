/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SecurityProfileType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace SecurityProfileTypeMapper {

static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

SecurityProfileType GetSecurityProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_HASH) {
    return SecurityProfileType::AWS_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return SecurityProfileType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityProfileType>(hashCode);
  }

  return SecurityProfileType::NOT_SET;
}

Aws::String GetNameForSecurityProfileType(SecurityProfileType enumValue) {
  switch (enumValue) {
    case SecurityProfileType::NOT_SET:
      return {};
    case SecurityProfileType::AWS_MANAGED:
      return "AWS_MANAGED";
    case SecurityProfileType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityProfileTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
