/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/AwsAccountState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Account {
namespace Model {
namespace AwsAccountStateMapper {

static const int PENDING_ACTIVATION_HASH = HashingUtils::HashString("PENDING_ACTIVATION");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

AwsAccountState GetAwsAccountStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_ACTIVATION_HASH) {
    return AwsAccountState::PENDING_ACTIVATION;
  } else if (hashCode == ACTIVE_HASH) {
    return AwsAccountState::ACTIVE;
  } else if (hashCode == SUSPENDED_HASH) {
    return AwsAccountState::SUSPENDED;
  } else if (hashCode == CLOSED_HASH) {
    return AwsAccountState::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AwsAccountState>(hashCode);
  }

  return AwsAccountState::NOT_SET;
}

Aws::String GetNameForAwsAccountState(AwsAccountState enumValue) {
  switch (enumValue) {
    case AwsAccountState::NOT_SET:
      return {};
    case AwsAccountState::PENDING_ACTIVATION:
      return "PENDING_ACTIVATION";
    case AwsAccountState::ACTIVE:
      return "ACTIVE";
    case AwsAccountState::SUSPENDED:
      return "SUSPENDED";
    case AwsAccountState::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AwsAccountStateMapper
}  // namespace Model
}  // namespace Account
}  // namespace Aws
