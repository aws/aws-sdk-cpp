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
enum class DQStopJobOnFailureTiming { NOT_SET, Immediate, AfterDataLoad };

namespace DQStopJobOnFailureTimingMapper {
AWS_GLUE_API DQStopJobOnFailureTiming GetDQStopJobOnFailureTimingForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDQStopJobOnFailureTiming(DQStopJobOnFailureTiming value);
}  // namespace DQStopJobOnFailureTimingMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
