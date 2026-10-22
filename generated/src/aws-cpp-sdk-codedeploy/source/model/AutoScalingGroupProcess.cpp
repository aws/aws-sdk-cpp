/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/AutoScalingGroupProcess.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {
namespace AutoScalingGroupProcessMapper {

static const int Terminate_HASH = HashingUtils::HashString("Terminate");
static const int AZRebalance_HASH = HashingUtils::HashString("AZRebalance");
static const int InstanceRefresh_HASH = HashingUtils::HashString("InstanceRefresh");
static const int ScheduledActions_HASH = HashingUtils::HashString("ScheduledActions");

AutoScalingGroupProcess GetAutoScalingGroupProcessForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Terminate_HASH) {
    return AutoScalingGroupProcess::Terminate;
  } else if (hashCode == AZRebalance_HASH) {
    return AutoScalingGroupProcess::AZRebalance;
  } else if (hashCode == InstanceRefresh_HASH) {
    return AutoScalingGroupProcess::InstanceRefresh;
  } else if (hashCode == ScheduledActions_HASH) {
    return AutoScalingGroupProcess::ScheduledActions;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoScalingGroupProcess>(hashCode);
  }

  return AutoScalingGroupProcess::NOT_SET;
}

Aws::String GetNameForAutoScalingGroupProcess(AutoScalingGroupProcess enumValue) {
  switch (enumValue) {
    case AutoScalingGroupProcess::NOT_SET:
      return {};
    case AutoScalingGroupProcess::Terminate:
      return "Terminate";
    case AutoScalingGroupProcess::AZRebalance:
      return "AZRebalance";
    case AutoScalingGroupProcess::InstanceRefresh:
      return "InstanceRefresh";
    case AutoScalingGroupProcess::ScheduledActions:
      return "ScheduledActions";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoScalingGroupProcessMapper
}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
