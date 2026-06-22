/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace MicrovmImageVersionStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

MicrovmImageVersionState GetMicrovmImageVersionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return MicrovmImageVersionState::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return MicrovmImageVersionState::IN_PROGRESS;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return MicrovmImageVersionState::SUCCESSFUL;
  } else if (hashCode == FAILED_HASH) {
    return MicrovmImageVersionState::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return MicrovmImageVersionState::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return MicrovmImageVersionState::DELETED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return MicrovmImageVersionState::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MicrovmImageVersionState>(hashCode);
  }

  return MicrovmImageVersionState::NOT_SET;
}

Aws::String GetNameForMicrovmImageVersionState(MicrovmImageVersionState enumValue) {
  switch (enumValue) {
    case MicrovmImageVersionState::NOT_SET:
      return {};
    case MicrovmImageVersionState::PENDING:
      return "PENDING";
    case MicrovmImageVersionState::IN_PROGRESS:
      return "IN_PROGRESS";
    case MicrovmImageVersionState::SUCCESSFUL:
      return "SUCCESSFUL";
    case MicrovmImageVersionState::FAILED:
      return "FAILED";
    case MicrovmImageVersionState::DELETING:
      return "DELETING";
    case MicrovmImageVersionState::DELETED:
      return "DELETED";
    case MicrovmImageVersionState::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MicrovmImageVersionStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
