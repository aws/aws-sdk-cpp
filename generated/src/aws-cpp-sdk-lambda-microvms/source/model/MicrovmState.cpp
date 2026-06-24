/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/MicrovmState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace MicrovmStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUSPENDING_HASH = HashingUtils::HashString("SUSPENDING");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");

MicrovmState GetMicrovmStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return MicrovmState::PENDING;
  } else if (hashCode == RUNNING_HASH) {
    return MicrovmState::RUNNING;
  } else if (hashCode == SUSPENDING_HASH) {
    return MicrovmState::SUSPENDING;
  } else if (hashCode == SUSPENDED_HASH) {
    return MicrovmState::SUSPENDED;
  } else if (hashCode == TERMINATING_HASH) {
    return MicrovmState::TERMINATING;
  } else if (hashCode == TERMINATED_HASH) {
    return MicrovmState::TERMINATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MicrovmState>(hashCode);
  }

  return MicrovmState::NOT_SET;
}

Aws::String GetNameForMicrovmState(MicrovmState enumValue) {
  switch (enumValue) {
    case MicrovmState::NOT_SET:
      return {};
    case MicrovmState::PENDING:
      return "PENDING";
    case MicrovmState::RUNNING:
      return "RUNNING";
    case MicrovmState::SUSPENDING:
      return "SUSPENDING";
    case MicrovmState::SUSPENDED:
      return "SUSPENDED";
    case MicrovmState::TERMINATING:
      return "TERMINATING";
    case MicrovmState::TERMINATED:
      return "TERMINATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MicrovmStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
