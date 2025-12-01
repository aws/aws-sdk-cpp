/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/State.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace StateMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Deactivating_HASH = HashingUtils::HashString("Deactivating");
static const int Deactivated_HASH = HashingUtils::HashString("Deactivated");
static const int ActiveNonInvocable_HASH = HashingUtils::HashString("ActiveNonInvocable");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

State GetStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return State::Pending;
  } else if (hashCode == Active_HASH) {
    return State::Active;
  } else if (hashCode == Inactive_HASH) {
    return State::Inactive;
  } else if (hashCode == Failed_HASH) {
    return State::Failed;
  } else if (hashCode == Deactivating_HASH) {
    return State::Deactivating;
  } else if (hashCode == Deactivated_HASH) {
    return State::Deactivated;
  } else if (hashCode == ActiveNonInvocable_HASH) {
    return State::ActiveNonInvocable;
  } else if (hashCode == Deleting_HASH) {
    return State::Deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<State>(hashCode);
  }

  return State::NOT_SET;
}

Aws::String GetNameForState(State enumValue) {
  switch (enumValue) {
    case State::NOT_SET:
      return {};
    case State::Pending:
      return "Pending";
    case State::Active:
      return "Active";
    case State::Inactive:
      return "Inactive";
    case State::Failed:
      return "Failed";
    case State::Deactivating:
      return "Deactivating";
    case State::Deactivated:
      return "Deactivated";
    case State::ActiveNonInvocable:
      return "ActiveNonInvocable";
    case State::Deleting:
      return "Deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StateMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
