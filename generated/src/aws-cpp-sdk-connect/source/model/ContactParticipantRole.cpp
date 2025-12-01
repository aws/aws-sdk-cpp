/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactParticipantRole.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactParticipantRoleMapper {

static const int AGENT_HASH = HashingUtils::HashString("AGENT");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
static const int CUSTOM_BOT_HASH = HashingUtils::HashString("CUSTOM_BOT");

ContactParticipantRole GetContactParticipantRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_HASH) {
    return ContactParticipantRole::AGENT;
  } else if (hashCode == SYSTEM_HASH) {
    return ContactParticipantRole::SYSTEM;
  } else if (hashCode == CUSTOM_BOT_HASH) {
    return ContactParticipantRole::CUSTOM_BOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactParticipantRole>(hashCode);
  }

  return ContactParticipantRole::NOT_SET;
}

Aws::String GetNameForContactParticipantRole(ContactParticipantRole enumValue) {
  switch (enumValue) {
    case ContactParticipantRole::NOT_SET:
      return {};
    case ContactParticipantRole::AGENT:
      return "AGENT";
    case ContactParticipantRole::SYSTEM:
      return "SYSTEM";
    case ContactParticipantRole::CUSTOM_BOT:
      return "CUSTOM_BOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactParticipantRoleMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
