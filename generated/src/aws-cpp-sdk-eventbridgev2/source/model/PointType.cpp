/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/PointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace PointTypeMapper {

static const int HORIZON_HASH = HashingUtils::HashString("HORIZON");
static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");

PointType GetPointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HORIZON_HASH) {
    return PointType::HORIZON;
  } else if (hashCode == TIMESTAMP_HASH) {
    return PointType::TIMESTAMP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PointType>(hashCode);
  }

  return PointType::NOT_SET;
}

Aws::String GetNameForPointType(PointType enumValue) {
  switch (enumValue) {
    case PointType::NOT_SET:
      return {};
    case PointType::HORIZON:
      return "HORIZON";
    case PointType::TIMESTAMP:
      return "TIMESTAMP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PointTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
