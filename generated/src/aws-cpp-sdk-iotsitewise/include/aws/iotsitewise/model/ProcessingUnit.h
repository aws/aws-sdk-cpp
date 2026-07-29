/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class ProcessingUnit {
  NOT_SET,
  UNITS_2,
  UNITS_4,
  UNITS_8,
  UNITS_12,
  UNITS_16,
  UNITS_24,
  UNITS_32,
  UNITS_36,
  UNITS_48,
  UNITS_60,
  UNITS_64,
  UNITS_72,
  UNITS_84,
  UNITS_96
};

namespace ProcessingUnitMapper {
AWS_IOTSITEWISE_API ProcessingUnit GetProcessingUnitForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForProcessingUnit(ProcessingUnit value);
}  // namespace ProcessingUnitMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
