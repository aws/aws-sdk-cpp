/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Monitoring.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace MonitoringMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");

Monitoring GetMonitoringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return Monitoring::BASIC;
  } else if (hashCode == DETAILED_HASH) {
    return Monitoring::DETAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Monitoring>(hashCode);
  }

  return Monitoring::NOT_SET;
}

Aws::String GetNameForMonitoring(Monitoring enumValue) {
  switch (enumValue) {
    case Monitoring::NOT_SET:
      return {};
    case Monitoring::BASIC:
      return "BASIC";
    case Monitoring::DETAILED:
      return "DETAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MonitoringMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
