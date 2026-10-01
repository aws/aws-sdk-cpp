/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class JobStatus { NOT_SET, SUCCESS, PROCESSING, FAILED };

namespace JobStatusMapper {
AWS_ENDUSERMESSAGING_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
