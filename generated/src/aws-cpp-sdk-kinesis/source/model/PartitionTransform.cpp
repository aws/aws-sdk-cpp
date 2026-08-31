/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/PartitionTransform.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace PartitionTransformMapper {

static const int TIME_HOUR_HASH = HashingUtils::HashString("TIME_HOUR");

PartitionTransform GetPartitionTransformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TIME_HOUR_HASH) {
    return PartitionTransform::TIME_HOUR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PartitionTransform>(hashCode);
  }

  return PartitionTransform::NOT_SET;
}

Aws::String GetNameForPartitionTransform(PartitionTransform enumValue) {
  switch (enumValue) {
    case PartitionTransform::NOT_SET:
      return {};
    case PartitionTransform::TIME_HOUR:
      return "TIME_HOUR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PartitionTransformMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
