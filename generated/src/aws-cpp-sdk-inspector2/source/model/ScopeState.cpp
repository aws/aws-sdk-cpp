/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ScopeState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ScopeStateMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ScopeState GetScopeStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ScopeState::ACTIVE;
  } else if (hashCode == PENDING_HASH) {
    return ScopeState::PENDING;
  } else if (hashCode == ERROR__HASH) {
    return ScopeState::ERROR_;
  } else if (hashCode == DISABLED_HASH) {
    return ScopeState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScopeState>(hashCode);
  }

  return ScopeState::NOT_SET;
}

Aws::String GetNameForScopeState(ScopeState enumValue) {
  switch (enumValue) {
    case ScopeState::NOT_SET:
      return {};
    case ScopeState::ACTIVE:
      return "ACTIVE";
    case ScopeState::PENDING:
      return "PENDING";
    case ScopeState::ERROR_:
      return "ERROR";
    case ScopeState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeStateMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
