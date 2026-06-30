/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DomainScopeOption.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace DomainScopeOptionMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DomainScopeOption GetDomainScopeOptionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DomainScopeOption::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DomainScopeOption::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainScopeOption>(hashCode);
  }

  return DomainScopeOption::NOT_SET;
}

Aws::String GetNameForDomainScopeOption(DomainScopeOption enumValue) {
  switch (enumValue) {
    case DomainScopeOption::NOT_SET:
      return {};
    case DomainScopeOption::ENABLED:
      return "ENABLED";
    case DomainScopeOption::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainScopeOptionMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
