/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/ConnectionScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace ConnectionScopeMapper {

static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");
static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");

ConnectionScope GetConnectionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOMAIN__HASH) {
    return ConnectionScope::DOMAIN_;
  } else if (hashCode == PROJECT_HASH) {
    return ConnectionScope::PROJECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionScope>(hashCode);
  }

  return ConnectionScope::NOT_SET;
}

Aws::String GetNameForConnectionScope(ConnectionScope enumValue) {
  switch (enumValue) {
    case ConnectionScope::NOT_SET:
      return {};
    case ConnectionScope::DOMAIN_:
      return "DOMAIN";
    case ConnectionScope::PROJECT:
      return "PROJECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionScopeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
