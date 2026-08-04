/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AggregationStatusEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AggregationStatusEnumMapper {

static const int included_HASH = HashingUtils::HashString("included");
static const int excluded_HASH = HashingUtils::HashString("excluded");

AggregationStatusEnum GetAggregationStatusEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == included_HASH) {
    return AggregationStatusEnum::included;
  } else if (hashCode == excluded_HASH) {
    return AggregationStatusEnum::excluded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AggregationStatusEnum>(hashCode);
  }

  return AggregationStatusEnum::NOT_SET;
}

Aws::String GetNameForAggregationStatusEnum(AggregationStatusEnum enumValue) {
  switch (enumValue) {
    case AggregationStatusEnum::NOT_SET:
      return {};
    case AggregationStatusEnum::included:
      return "included";
    case AggregationStatusEnum::excluded:
      return "excluded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AggregationStatusEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
