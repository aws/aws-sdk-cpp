/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/LogDeliveryDestinationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace LogDeliveryDestinationTypeMapper {

static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");
static const int S3_HASH = HashingUtils::HashString("S3");
static const int FIREHOSE_HASH = HashingUtils::HashString("FIREHOSE");

LogDeliveryDestinationType GetLogDeliveryDestinationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLOUDWATCH_HASH) {
    return LogDeliveryDestinationType::CLOUDWATCH;
  } else if (hashCode == S3_HASH) {
    return LogDeliveryDestinationType::S3;
  } else if (hashCode == FIREHOSE_HASH) {
    return LogDeliveryDestinationType::FIREHOSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogDeliveryDestinationType>(hashCode);
  }

  return LogDeliveryDestinationType::NOT_SET;
}

Aws::String GetNameForLogDeliveryDestinationType(LogDeliveryDestinationType enumValue) {
  switch (enumValue) {
    case LogDeliveryDestinationType::NOT_SET:
      return {};
    case LogDeliveryDestinationType::CLOUDWATCH:
      return "CLOUDWATCH";
    case LogDeliveryDestinationType::S3:
      return "S3";
    case LogDeliveryDestinationType::FIREHOSE:
      return "FIREHOSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogDeliveryDestinationTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
