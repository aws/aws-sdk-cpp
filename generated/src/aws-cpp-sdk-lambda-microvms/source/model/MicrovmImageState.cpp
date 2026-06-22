/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/MicrovmImageState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace MicrovmImageStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

MicrovmImageState GetMicrovmImageStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return MicrovmImageState::CREATING;
  } else if (hashCode == CREATED_HASH) {
    return MicrovmImageState::CREATED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return MicrovmImageState::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return MicrovmImageState::UPDATING;
  } else if (hashCode == UPDATED_HASH) {
    return MicrovmImageState::UPDATED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return MicrovmImageState::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return MicrovmImageState::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return MicrovmImageState::DELETE_FAILED;
  } else if (hashCode == DELETED_HASH) {
    return MicrovmImageState::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MicrovmImageState>(hashCode);
  }

  return MicrovmImageState::NOT_SET;
}

Aws::String GetNameForMicrovmImageState(MicrovmImageState enumValue) {
  switch (enumValue) {
    case MicrovmImageState::NOT_SET:
      return {};
    case MicrovmImageState::CREATING:
      return "CREATING";
    case MicrovmImageState::CREATED:
      return "CREATED";
    case MicrovmImageState::CREATE_FAILED:
      return "CREATE_FAILED";
    case MicrovmImageState::UPDATING:
      return "UPDATING";
    case MicrovmImageState::UPDATED:
      return "UPDATED";
    case MicrovmImageState::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case MicrovmImageState::DELETING:
      return "DELETING";
    case MicrovmImageState::DELETE_FAILED:
      return "DELETE_FAILED";
    case MicrovmImageState::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MicrovmImageStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
