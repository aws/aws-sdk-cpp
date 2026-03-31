/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class JobStatus { NOT_SET, SUBMITTED, IN_PROGRESS, FAILED, SUCCEEDED };

namespace JobStatusMapper {
AWS_CONNECTHEALTH_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
