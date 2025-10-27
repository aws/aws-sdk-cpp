/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Model {
enum class ThresholdUnit { NOT_SET, COUNT, PERCENTAGE };

namespace ThresholdUnitMapper {
AWS_GLUEDATABREW_API ThresholdUnit GetThresholdUnitForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForThresholdUnit(ThresholdUnit value);
}  // namespace ThresholdUnitMapper
}  // namespace Model
}  // namespace GlueDataBrew
}  // namespace Aws
