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
enum class SourceFormat { NOT_SET, CCDA, CSV };

namespace SourceFormatMapper {
AWS_HEALTHLAKE_API SourceFormat GetSourceFormatForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForSourceFormat(SourceFormat value);
}  // namespace SourceFormatMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
