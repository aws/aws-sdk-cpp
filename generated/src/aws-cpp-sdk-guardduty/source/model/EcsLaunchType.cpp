/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/EcsLaunchType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace EcsLaunchTypeMapper {

static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");
static const int EC2_HASH = HashingUtils::HashString("EC2");

EcsLaunchType GetEcsLaunchTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FARGATE_HASH) {
    return EcsLaunchType::FARGATE;
  } else if (hashCode == EC2_HASH) {
    return EcsLaunchType::EC2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EcsLaunchType>(hashCode);
  }

  return EcsLaunchType::NOT_SET;
}

Aws::String GetNameForEcsLaunchType(EcsLaunchType enumValue) {
  switch (enumValue) {
    case EcsLaunchType::NOT_SET:
      return {};
    case EcsLaunchType::FARGATE:
      return "FARGATE";
    case EcsLaunchType::EC2:
      return "EC2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EcsLaunchTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
