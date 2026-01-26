/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/TelemetrySinkType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace TelemetrySinkTypeMapper {

static const int KINESIS_DATA_STREAM_HASH = HashingUtils::HashString("KINESIS_DATA_STREAM");

TelemetrySinkType GetTelemetrySinkTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KINESIS_DATA_STREAM_HASH) {
    return TelemetrySinkType::KINESIS_DATA_STREAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TelemetrySinkType>(hashCode);
  }

  return TelemetrySinkType::NOT_SET;
}

Aws::String GetNameForTelemetrySinkType(TelemetrySinkType enumValue) {
  switch (enumValue) {
    case TelemetrySinkType::NOT_SET:
      return {};
    case TelemetrySinkType::KINESIS_DATA_STREAM:
      return "KINESIS_DATA_STREAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TelemetrySinkTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
