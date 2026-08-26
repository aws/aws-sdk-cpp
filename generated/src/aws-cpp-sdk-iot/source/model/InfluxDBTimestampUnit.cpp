/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/InfluxDBTimestampUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace InfluxDBTimestampUnitMapper {

static const int s_HASH = HashingUtils::HashString("s");
static const int ms_HASH = HashingUtils::HashString("ms");
static const int us_HASH = HashingUtils::HashString("us");
static const int ns_HASH = HashingUtils::HashString("ns");

InfluxDBTimestampUnit GetInfluxDBTimestampUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == s_HASH) {
    return InfluxDBTimestampUnit::s;
  } else if (hashCode == ms_HASH) {
    return InfluxDBTimestampUnit::ms;
  } else if (hashCode == us_HASH) {
    return InfluxDBTimestampUnit::us;
  } else if (hashCode == ns_HASH) {
    return InfluxDBTimestampUnit::ns;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InfluxDBTimestampUnit>(hashCode);
  }

  return InfluxDBTimestampUnit::NOT_SET;
}

Aws::String GetNameForInfluxDBTimestampUnit(InfluxDBTimestampUnit enumValue) {
  switch (enumValue) {
    case InfluxDBTimestampUnit::NOT_SET:
      return {};
    case InfluxDBTimestampUnit::s:
      return "s";
    case InfluxDBTimestampUnit::ms:
      return "ms";
    case InfluxDBTimestampUnit::us:
      return "us";
    case InfluxDBTimestampUnit::ns:
      return "ns";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InfluxDBTimestampUnitMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
