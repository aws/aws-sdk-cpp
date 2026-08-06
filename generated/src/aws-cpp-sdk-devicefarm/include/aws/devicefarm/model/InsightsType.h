/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Model {
enum class InsightsType { NOT_SET, TEST_REPORT };

namespace InsightsTypeMapper {
AWS_DEVICEFARM_API InsightsType GetInsightsTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForInsightsType(InsightsType value);
}  // namespace InsightsTypeMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
