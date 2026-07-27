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
enum class ObservationConfiguration { NOT_SET, ALL, NONE };

namespace ObservationConfigurationMapper {
AWS_GLUE_API ObservationConfiguration GetObservationConfigurationForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForObservationConfiguration(ObservationConfiguration value);
}  // namespace ObservationConfigurationMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
