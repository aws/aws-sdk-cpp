/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/MessageProcessingStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectParticipant {
namespace Model {
namespace MessageProcessingStatusMapper {

static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

MessageProcessingStatus GetMessageProcessingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROCESSING_HASH) {
    return MessageProcessingStatus::PROCESSING;
  } else if (hashCode == FAILED_HASH) {
    return MessageProcessingStatus::FAILED;
  } else if (hashCode == REJECTED_HASH) {
    return MessageProcessingStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MessageProcessingStatus>(hashCode);
  }

  return MessageProcessingStatus::NOT_SET;
}

Aws::String GetNameForMessageProcessingStatus(MessageProcessingStatus enumValue) {
  switch (enumValue) {
    case MessageProcessingStatus::NOT_SET:
      return {};
    case MessageProcessingStatus::PROCESSING:
      return "PROCESSING";
    case MessageProcessingStatus::FAILED:
      return "FAILED";
    case MessageProcessingStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MessageProcessingStatusMapper
}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
