/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalBlastRadius.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalBlastRadiusMapper {

static const int CROSS_TENANT_HASH = HashingUtils::HashString("CROSS_TENANT");
static const int OTHER_USERS_IN_TENANT_HASH = HashingUtils::HashString("OTHER_USERS_IN_TENANT");
static const int OWN_SCOPE_HASH = HashingUtils::HashString("OWN_SCOPE");

SignalBlastRadius GetSignalBlastRadiusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CROSS_TENANT_HASH) {
    return SignalBlastRadius::CROSS_TENANT;
  } else if (hashCode == OTHER_USERS_IN_TENANT_HASH) {
    return SignalBlastRadius::OTHER_USERS_IN_TENANT;
  } else if (hashCode == OWN_SCOPE_HASH) {
    return SignalBlastRadius::OWN_SCOPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalBlastRadius>(hashCode);
  }

  return SignalBlastRadius::NOT_SET;
}

Aws::String GetNameForSignalBlastRadius(SignalBlastRadius enumValue) {
  switch (enumValue) {
    case SignalBlastRadius::NOT_SET:
      return {};
    case SignalBlastRadius::CROSS_TENANT:
      return "CROSS_TENANT";
    case SignalBlastRadius::OTHER_USERS_IN_TENANT:
      return "OTHER_USERS_IN_TENANT";
    case SignalBlastRadius::OWN_SCOPE:
      return "OWN_SCOPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalBlastRadiusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
