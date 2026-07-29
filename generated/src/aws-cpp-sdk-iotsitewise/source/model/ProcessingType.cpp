/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ProcessingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ProcessingTypeMapper {

static const int GENERIC_COMPUTE_PROCESSING_HASH = HashingUtils::HashString("GENERIC_COMPUTE_PROCESSING");
static const int HARDWARE_ACCELERATED_PROCESSING_HASH = HashingUtils::HashString("HARDWARE_ACCELERATED_PROCESSING");

ProcessingType GetProcessingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERIC_COMPUTE_PROCESSING_HASH) {
    return ProcessingType::GENERIC_COMPUTE_PROCESSING;
  } else if (hashCode == HARDWARE_ACCELERATED_PROCESSING_HASH) {
    return ProcessingType::HARDWARE_ACCELERATED_PROCESSING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProcessingType>(hashCode);
  }

  return ProcessingType::NOT_SET;
}

Aws::String GetNameForProcessingType(ProcessingType enumValue) {
  switch (enumValue) {
    case ProcessingType::NOT_SET:
      return {};
    case ProcessingType::GENERIC_COMPUTE_PROCESSING:
      return "GENERIC_COMPUTE_PROCESSING";
    case ProcessingType::HARDWARE_ACCELERATED_PROCESSING:
      return "HARDWARE_ACCELERATED_PROCESSING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProcessingTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
