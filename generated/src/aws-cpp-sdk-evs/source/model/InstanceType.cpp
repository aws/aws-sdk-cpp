/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/InstanceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace InstanceTypeMapper {

static const int i4i_metal_HASH = HashingUtils::HashString("i4i.metal");
static const int i7i_metal_24xl_HASH = HashingUtils::HashString("i7i.metal-24xl");

InstanceType GetInstanceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == i4i_metal_HASH) {
    return InstanceType::i4i_metal;
  } else if (hashCode == i7i_metal_24xl_HASH) {
    return InstanceType::i7i_metal_24xl;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceType>(hashCode);
  }

  return InstanceType::NOT_SET;
}

Aws::String GetNameForInstanceType(InstanceType enumValue) {
  switch (enumValue) {
    case InstanceType::NOT_SET:
      return {};
    case InstanceType::i4i_metal:
      return "i4i.metal";
    case InstanceType::i7i_metal_24xl:
      return "i7i.metal-24xl";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
