/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/InfluxDBVersion.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace InfluxDBVersionMapper {

static const int V2_HASH = HashingUtils::HashString("V2");
static const int V3_HASH = HashingUtils::HashString("V3");

InfluxDBVersion GetInfluxDBVersionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == V2_HASH) {
    return InfluxDBVersion::V2;
  } else if (hashCode == V3_HASH) {
    return InfluxDBVersion::V3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InfluxDBVersion>(hashCode);
  }

  return InfluxDBVersion::NOT_SET;
}

Aws::String GetNameForInfluxDBVersion(InfluxDBVersion enumValue) {
  switch (enumValue) {
    case InfluxDBVersion::NOT_SET:
      return {};
    case InfluxDBVersion::V2:
      return "V2";
    case InfluxDBVersion::V3:
      return "V3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InfluxDBVersionMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
