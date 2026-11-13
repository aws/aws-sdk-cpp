/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/LightsailDistributionSubdomainStateEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace LightsailDistributionSubdomainStateEnumMapper {

static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Attaching_HASH = HashingUtils::HashString("Attaching");
static const int Attached_HASH = HashingUtils::HashString("Attached");
static const int Error_HASH = HashingUtils::HashString("Error");

LightsailDistributionSubdomainStateEnum GetLightsailDistributionSubdomainStateEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Creating_HASH) {
    return LightsailDistributionSubdomainStateEnum::Creating;
  } else if (hashCode == Attaching_HASH) {
    return LightsailDistributionSubdomainStateEnum::Attaching;
  } else if (hashCode == Attached_HASH) {
    return LightsailDistributionSubdomainStateEnum::Attached;
  } else if (hashCode == Error_HASH) {
    return LightsailDistributionSubdomainStateEnum::Error;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LightsailDistributionSubdomainStateEnum>(hashCode);
  }

  return LightsailDistributionSubdomainStateEnum::NOT_SET;
}

Aws::String GetNameForLightsailDistributionSubdomainStateEnum(LightsailDistributionSubdomainStateEnum enumValue) {
  switch (enumValue) {
    case LightsailDistributionSubdomainStateEnum::NOT_SET:
      return {};
    case LightsailDistributionSubdomainStateEnum::Creating:
      return "Creating";
    case LightsailDistributionSubdomainStateEnum::Attaching:
      return "Attaching";
    case LightsailDistributionSubdomainStateEnum::Attached:
      return "Attached";
    case LightsailDistributionSubdomainStateEnum::Error:
      return "Error";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LightsailDistributionSubdomainStateEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
