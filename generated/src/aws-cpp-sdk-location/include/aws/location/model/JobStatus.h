/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>

namespace Aws {
namespace LocationService {
namespace Model {
enum class JobStatus { NOT_SET, Pending, Running, Completed, Failed, Cancelling, Cancelled };

namespace JobStatusMapper {
AWS_LOCATIONSERVICE_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
