/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactMediaProcessingFailureMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactMediaProcessingFailureModeMapper {

static const int DELIVER_UNPROCESSED_MESSAGE_HASH = HashingUtils::HashString("DELIVER_UNPROCESSED_MESSAGE");
static const int DO_NOT_DELIVER_UNPROCESSED_MESSAGE_HASH = HashingUtils::HashString("DO_NOT_DELIVER_UNPROCESSED_MESSAGE");

ContactMediaProcessingFailureMode GetContactMediaProcessingFailureModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DELIVER_UNPROCESSED_MESSAGE_HASH) {
    return ContactMediaProcessingFailureMode::DELIVER_UNPROCESSED_MESSAGE;
  } else if (hashCode == DO_NOT_DELIVER_UNPROCESSED_MESSAGE_HASH) {
    return ContactMediaProcessingFailureMode::DO_NOT_DELIVER_UNPROCESSED_MESSAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactMediaProcessingFailureMode>(hashCode);
  }

  return ContactMediaProcessingFailureMode::NOT_SET;
}

Aws::String GetNameForContactMediaProcessingFailureMode(ContactMediaProcessingFailureMode enumValue) {
  switch (enumValue) {
    case ContactMediaProcessingFailureMode::NOT_SET:
      return {};
    case ContactMediaProcessingFailureMode::DELIVER_UNPROCESSED_MESSAGE:
      return "DELIVER_UNPROCESSED_MESSAGE";
    case ContactMediaProcessingFailureMode::DO_NOT_DELIVER_UNPROCESSED_MESSAGE:
      return "DO_NOT_DELIVER_UNPROCESSED_MESSAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactMediaProcessingFailureModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
