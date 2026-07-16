/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class TargetFormat { NOT_SET, FHIR_R4 };

namespace TargetFormatMapper {
AWS_HEALTHLAKE_API TargetFormat GetTargetFormatForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForTargetFormat(TargetFormat value);
}  // namespace TargetFormatMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
