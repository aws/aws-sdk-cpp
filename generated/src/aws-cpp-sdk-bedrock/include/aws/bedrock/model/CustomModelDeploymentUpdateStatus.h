/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class CustomModelDeploymentUpdateStatus { NOT_SET, Updating, UpdateCompleted, UpdateFailed };

namespace CustomModelDeploymentUpdateStatusMapper {
AWS_BEDROCK_API CustomModelDeploymentUpdateStatus GetCustomModelDeploymentUpdateStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForCustomModelDeploymentUpdateStatus(CustomModelDeploymentUpdateStatus value);
}  // namespace CustomModelDeploymentUpdateStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
