/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class JobStatusType { NOT_SET, IN_PROGRESS, COMPLETED, FAILED };

namespace JobStatusTypeMapper {
AWS_IAM_API JobStatusType GetJobStatusTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForJobStatusType(JobStatusType value);
}  // namespace JobStatusTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
