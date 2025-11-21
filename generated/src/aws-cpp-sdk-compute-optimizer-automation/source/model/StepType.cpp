/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/StepType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace StepTypeMapper {

static const int CreateEbsSnapshot_HASH = HashingUtils::HashString("CreateEbsSnapshot");
static const int DeleteEbsVolume_HASH = HashingUtils::HashString("DeleteEbsVolume");
static const int ModifyEbsVolume_HASH = HashingUtils::HashString("ModifyEbsVolume");
static const int CreateEbsVolume_HASH = HashingUtils::HashString("CreateEbsVolume");

StepType GetStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreateEbsSnapshot_HASH) {
    return StepType::CreateEbsSnapshot;
  } else if (hashCode == DeleteEbsVolume_HASH) {
    return StepType::DeleteEbsVolume;
  } else if (hashCode == ModifyEbsVolume_HASH) {
    return StepType::ModifyEbsVolume;
  } else if (hashCode == CreateEbsVolume_HASH) {
    return StepType::CreateEbsVolume;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StepType>(hashCode);
  }

  return StepType::NOT_SET;
}

Aws::String GetNameForStepType(StepType enumValue) {
  switch (enumValue) {
    case StepType::NOT_SET:
      return {};
    case StepType::CreateEbsSnapshot:
      return "CreateEbsSnapshot";
    case StepType::DeleteEbsVolume:
      return "DeleteEbsVolume";
    case StepType::ModifyEbsVolume:
      return "ModifyEbsVolume";
    case StepType::CreateEbsVolume:
      return "CreateEbsVolume";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StepTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
