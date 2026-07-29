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
enum class ProcessingType { NOT_SET, GENERIC_COMPUTE_PROCESSING, HARDWARE_ACCELERATED_PROCESSING };

namespace ProcessingTypeMapper {
AWS_IOTSITEWISE_API ProcessingType GetProcessingTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForProcessingType(ProcessingType value);
}  // namespace ProcessingTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
