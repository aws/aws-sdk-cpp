/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/KafkaEventSourceMappingConsumptionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace KafkaEventSourceMappingConsumptionModeMapper {

static const int Stream_HASH = HashingUtils::HashString("Stream");
static const int Queue_HASH = HashingUtils::HashString("Queue");

KafkaEventSourceMappingConsumptionMode GetKafkaEventSourceMappingConsumptionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Stream_HASH) {
    return KafkaEventSourceMappingConsumptionMode::Stream;
  } else if (hashCode == Queue_HASH) {
    return KafkaEventSourceMappingConsumptionMode::Queue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KafkaEventSourceMappingConsumptionMode>(hashCode);
  }

  return KafkaEventSourceMappingConsumptionMode::NOT_SET;
}

Aws::String GetNameForKafkaEventSourceMappingConsumptionMode(KafkaEventSourceMappingConsumptionMode enumValue) {
  switch (enumValue) {
    case KafkaEventSourceMappingConsumptionMode::NOT_SET:
      return {};
    case KafkaEventSourceMappingConsumptionMode::Stream:
      return "Stream";
    case KafkaEventSourceMappingConsumptionMode::Queue:
      return "Queue";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KafkaEventSourceMappingConsumptionModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
