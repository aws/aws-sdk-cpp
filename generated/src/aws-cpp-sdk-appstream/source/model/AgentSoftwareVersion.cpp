/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentSoftwareVersion.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace AgentSoftwareVersionMapper {

static const int CURRENT_LATEST_HASH = HashingUtils::HashString("CURRENT_LATEST");
static const int ALWAYS_LATEST_HASH = HashingUtils::HashString("ALWAYS_LATEST");

AgentSoftwareVersion GetAgentSoftwareVersionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CURRENT_LATEST_HASH) {
    return AgentSoftwareVersion::CURRENT_LATEST;
  } else if (hashCode == ALWAYS_LATEST_HASH) {
    return AgentSoftwareVersion::ALWAYS_LATEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentSoftwareVersion>(hashCode);
  }

  return AgentSoftwareVersion::NOT_SET;
}

Aws::String GetNameForAgentSoftwareVersion(AgentSoftwareVersion enumValue) {
  switch (enumValue) {
    case AgentSoftwareVersion::NOT_SET:
      return {};
    case AgentSoftwareVersion::CURRENT_LATEST:
      return "CURRENT_LATEST";
    case AgentSoftwareVersion::ALWAYS_LATEST:
      return "ALWAYS_LATEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentSoftwareVersionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
