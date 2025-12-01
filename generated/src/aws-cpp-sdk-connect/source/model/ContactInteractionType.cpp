/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactInteractionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactInteractionTypeMapper {

static const int AGENT_HASH = HashingUtils::HashString("AGENT");
static const int AUTOMATED_HASH = HashingUtils::HashString("AUTOMATED");

ContactInteractionType GetContactInteractionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_HASH) {
    return ContactInteractionType::AGENT;
  } else if (hashCode == AUTOMATED_HASH) {
    return ContactInteractionType::AUTOMATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactInteractionType>(hashCode);
  }

  return ContactInteractionType::NOT_SET;
}

Aws::String GetNameForContactInteractionType(ContactInteractionType enumValue) {
  switch (enumValue) {
    case ContactInteractionType::NOT_SET:
      return {};
    case ContactInteractionType::AGENT:
      return "AGENT";
    case ContactInteractionType::AUTOMATED:
      return "AUTOMATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactInteractionTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
