/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ObservationMode { NOT_SET, SCHEDULED, FIXED };

namespace ObservationModeMapper {
AWS_GLUE_API ObservationMode GetObservationModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForObservationMode(ObservationMode value);
}  // namespace ObservationModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
