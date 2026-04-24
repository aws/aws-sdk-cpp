/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/Scope.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace ScopeMapper {

static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");

Scope GetScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROFILE_HASH) {
    return Scope::PROFILE;
  } else if (hashCode == DOMAIN__HASH) {
    return Scope::DOMAIN_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Scope>(hashCode);
  }

  return Scope::NOT_SET;
}

Aws::String GetNameForScope(Scope enumValue) {
  switch (enumValue) {
    case Scope::NOT_SET:
      return {};
    case Scope::PROFILE:
      return "PROFILE";
    case Scope::DOMAIN_:
      return "DOMAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
