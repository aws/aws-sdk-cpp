/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NestedVirtualizationSpecification.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NestedVirtualizationSpecificationMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

NestedVirtualizationSpecification GetNestedVirtualizationSpecificationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return NestedVirtualizationSpecification::enabled;
  } else if (hashCode == disabled_HASH) {
    return NestedVirtualizationSpecification::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NestedVirtualizationSpecification>(hashCode);
  }

  return NestedVirtualizationSpecification::NOT_SET;
}

Aws::String GetNameForNestedVirtualizationSpecification(NestedVirtualizationSpecification enumValue) {
  switch (enumValue) {
    case NestedVirtualizationSpecification::NOT_SET:
      return {};
    case NestedVirtualizationSpecification::enabled:
      return "enabled";
    case NestedVirtualizationSpecification::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NestedVirtualizationSpecificationMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
