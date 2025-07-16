/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class CustomModelDeploymentStatus
  {
    NOT_SET,
    Creating,
    Active,
    Failed
  };

namespace CustomModelDeploymentStatusMapper
{
AWS_BEDROCK_API CustomModelDeploymentStatus GetCustomModelDeploymentStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForCustomModelDeploymentStatus(CustomModelDeploymentStatus value);
} // namespace CustomModelDeploymentStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
