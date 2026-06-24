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
enum class NlpStatus { NOT_SET, ENABLED, DISABLED, ENABLING, DISABLING };

namespace NlpStatusMapper {
AWS_HEALTHLAKE_API NlpStatus GetNlpStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForNlpStatus(NlpStatus value);
}  // namespace NlpStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
