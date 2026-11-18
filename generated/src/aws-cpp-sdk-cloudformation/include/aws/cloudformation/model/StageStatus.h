/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class StageStatus { NOT_SET, PENDING, NOT_APPLICABLE, NOT_STARTED, IN_PROGRESS, SUCCEEDED, PARTIAL_SUCCESS, FAILED };

namespace StageStatusMapper {
AWS_CLOUDFORMATION_API StageStatus GetStageStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStageStatus(StageStatus value);
}  // namespace StageStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
