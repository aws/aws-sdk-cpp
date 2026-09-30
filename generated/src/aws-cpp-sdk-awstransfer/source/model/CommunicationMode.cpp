/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CommunicationMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace CommunicationModeMapper {

static const int CLIENT_TALK_FIRST_HASH = HashingUtils::HashString("CLIENT_TALK_FIRST");
static const int SERVER_TALK_FIRST_HASH = HashingUtils::HashString("SERVER_TALK_FIRST");

CommunicationMode GetCommunicationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_TALK_FIRST_HASH) {
    return CommunicationMode::CLIENT_TALK_FIRST;
  } else if (hashCode == SERVER_TALK_FIRST_HASH) {
    return CommunicationMode::SERVER_TALK_FIRST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CommunicationMode>(hashCode);
  }

  return CommunicationMode::NOT_SET;
}

Aws::String GetNameForCommunicationMode(CommunicationMode enumValue) {
  switch (enumValue) {
    case CommunicationMode::NOT_SET:
      return {};
    case CommunicationMode::CLIENT_TALK_FIRST:
      return "CLIENT_TALK_FIRST";
    case CommunicationMode::SERVER_TALK_FIRST:
      return "SERVER_TALK_FIRST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CommunicationModeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
