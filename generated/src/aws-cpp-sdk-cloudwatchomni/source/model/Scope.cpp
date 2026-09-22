/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/Scope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace ScopeMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

Scope GetScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return Scope::ACCOUNT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return Scope::ORGANIZATION;
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
    case Scope::ACCOUNT:
      return "ACCOUNT";
    case Scope::ORGANIZATION:
      return "ORGANIZATION";
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
}  // namespace CloudWatchOmni
}  // namespace Aws
