/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/QueueStartingPositionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace QueueStartingPositionTypeMapper {

static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
static const int LATEST_HASH = HashingUtils::HashString("LATEST");
static const int AT_TIMESTAMP_HASH = HashingUtils::HashString("AT_TIMESTAMP");

QueueStartingPositionType GetQueueStartingPositionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRIM_HORIZON_HASH) {
    return QueueStartingPositionType::TRIM_HORIZON;
  } else if (hashCode == LATEST_HASH) {
    return QueueStartingPositionType::LATEST;
  } else if (hashCode == AT_TIMESTAMP_HASH) {
    return QueueStartingPositionType::AT_TIMESTAMP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueueStartingPositionType>(hashCode);
  }

  return QueueStartingPositionType::NOT_SET;
}

Aws::String GetNameForQueueStartingPositionType(QueueStartingPositionType enumValue) {
  switch (enumValue) {
    case QueueStartingPositionType::NOT_SET:
      return {};
    case QueueStartingPositionType::TRIM_HORIZON:
      return "TRIM_HORIZON";
    case QueueStartingPositionType::LATEST:
      return "LATEST";
    case QueueStartingPositionType::AT_TIMESTAMP:
      return "AT_TIMESTAMP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueueStartingPositionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
