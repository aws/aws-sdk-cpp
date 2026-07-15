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
enum class TransformationJobStatus { NOT_SET, SUBMITTED, QUEUED, IN_PROGRESS, COMPLETED, COMPLETED_WITH_ERRORS, FAILED };

namespace TransformationJobStatusMapper {
AWS_HEALTHLAKE_API TransformationJobStatus GetTransformationJobStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForTransformationJobStatus(TransformationJobStatus value);
}  // namespace TransformationJobStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
