/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/CapacityProviderState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace CapacityProviderStateMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

CapacityProviderState GetCapacityProviderStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return CapacityProviderState::Pending;
  } else if (hashCode == Active_HASH) {
    return CapacityProviderState::Active;
  } else if (hashCode == Failed_HASH) {
    return CapacityProviderState::Failed;
  } else if (hashCode == Deleting_HASH) {
    return CapacityProviderState::Deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderState>(hashCode);
  }

  return CapacityProviderState::NOT_SET;
}

Aws::String GetNameForCapacityProviderState(CapacityProviderState enumValue) {
  switch (enumValue) {
    case CapacityProviderState::NOT_SET:
      return {};
    case CapacityProviderState::Pending:
      return "Pending";
    case CapacityProviderState::Active:
      return "Active";
    case CapacityProviderState::Failed:
      return "Failed";
    case CapacityProviderState::Deleting:
      return "Deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderStateMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
