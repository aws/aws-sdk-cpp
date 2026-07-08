/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AccountVpcEncryptionControlState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AccountVpcEncryptionControlStateMapper {

static const int default_state_HASH = HashingUtils::HashString("default-state");
static const int transitions_in_progress_HASH = HashingUtils::HashString("transitions-in-progress");
static const int transitions_partially_successful_HASH = HashingUtils::HashString("transitions-partially-successful");
static const int transitions_successful_HASH = HashingUtils::HashString("transitions-successful");
static const int transitions_failed_HASH = HashingUtils::HashString("transitions-failed");

AccountVpcEncryptionControlState GetAccountVpcEncryptionControlStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == default_state_HASH) {
    return AccountVpcEncryptionControlState::default_state;
  } else if (hashCode == transitions_in_progress_HASH) {
    return AccountVpcEncryptionControlState::transitions_in_progress;
  } else if (hashCode == transitions_partially_successful_HASH) {
    return AccountVpcEncryptionControlState::transitions_partially_successful;
  } else if (hashCode == transitions_successful_HASH) {
    return AccountVpcEncryptionControlState::transitions_successful;
  } else if (hashCode == transitions_failed_HASH) {
    return AccountVpcEncryptionControlState::transitions_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountVpcEncryptionControlState>(hashCode);
  }

  return AccountVpcEncryptionControlState::NOT_SET;
}

Aws::String GetNameForAccountVpcEncryptionControlState(AccountVpcEncryptionControlState enumValue) {
  switch (enumValue) {
    case AccountVpcEncryptionControlState::NOT_SET:
      return {};
    case AccountVpcEncryptionControlState::default_state:
      return "default-state";
    case AccountVpcEncryptionControlState::transitions_in_progress:
      return "transitions-in-progress";
    case AccountVpcEncryptionControlState::transitions_partially_successful:
      return "transitions-partially-successful";
    case AccountVpcEncryptionControlState::transitions_successful:
      return "transitions-successful";
    case AccountVpcEncryptionControlState::transitions_failed:
      return "transitions-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountVpcEncryptionControlStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
