/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class JobRunMode { NOT_SET, SCHEDULED, ON_DEMAND };

namespace JobRunModeMapper {
AWS_DATAZONE_API JobRunMode GetJobRunModeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForJobRunMode(JobRunMode value);
}  // namespace JobRunModeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
