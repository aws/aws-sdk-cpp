/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisconnectOnCustomerExitParticipantType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DisconnectOnCustomerExitParticipantTypeMapper {

static const int AGENT_HASH = HashingUtils::HashString("AGENT");

DisconnectOnCustomerExitParticipantType GetDisconnectOnCustomerExitParticipantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_HASH) {
    return DisconnectOnCustomerExitParticipantType::AGENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DisconnectOnCustomerExitParticipantType>(hashCode);
  }

  return DisconnectOnCustomerExitParticipantType::NOT_SET;
}

Aws::String GetNameForDisconnectOnCustomerExitParticipantType(DisconnectOnCustomerExitParticipantType enumValue) {
  switch (enumValue) {
    case DisconnectOnCustomerExitParticipantType::NOT_SET:
      return {};
    case DisconnectOnCustomerExitParticipantType::AGENT:
      return "AGENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DisconnectOnCustomerExitParticipantTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
