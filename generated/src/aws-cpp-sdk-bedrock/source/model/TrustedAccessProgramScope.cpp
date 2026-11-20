/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace TrustedAccessProgramScopeMapper {

static const int organization_HASH = HashingUtils::HashString("organization");
static const int account_HASH = HashingUtils::HashString("account");
static const int project_HASH = HashingUtils::HashString("project");
static const int program_default_HASH = HashingUtils::HashString("program_default");

TrustedAccessProgramScope GetTrustedAccessProgramScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == organization_HASH) {
    return TrustedAccessProgramScope::organization;
  } else if (hashCode == account_HASH) {
    return TrustedAccessProgramScope::account;
  } else if (hashCode == project_HASH) {
    return TrustedAccessProgramScope::project;
  } else if (hashCode == program_default_HASH) {
    return TrustedAccessProgramScope::program_default;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustedAccessProgramScope>(hashCode);
  }

  return TrustedAccessProgramScope::NOT_SET;
}

Aws::String GetNameForTrustedAccessProgramScope(TrustedAccessProgramScope enumValue) {
  switch (enumValue) {
    case TrustedAccessProgramScope::NOT_SET:
      return {};
    case TrustedAccessProgramScope::organization:
      return "organization";
    case TrustedAccessProgramScope::account:
      return "account";
    case TrustedAccessProgramScope::project:
      return "project";
    case TrustedAccessProgramScope::program_default:
      return "program_default";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustedAccessProgramScopeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
