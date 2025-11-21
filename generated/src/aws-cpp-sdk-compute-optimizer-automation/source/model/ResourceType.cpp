/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace ResourceTypeMapper {

static const int EbsVolume_HASH = HashingUtils::HashString("EbsVolume");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EbsVolume_HASH) {
    return ResourceType::EbsVolume;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::EbsVolume:
      return "EbsVolume";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
