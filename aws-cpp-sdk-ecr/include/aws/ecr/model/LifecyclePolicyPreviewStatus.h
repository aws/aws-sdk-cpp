/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class LifecyclePolicyPreviewStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    EXPIRED,
    FAILED
  };

namespace LifecyclePolicyPreviewStatusMapper
{
AWS_ECR_API LifecyclePolicyPreviewStatus GetLifecyclePolicyPreviewStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForLifecyclePolicyPreviewStatus(LifecyclePolicyPreviewStatus value);
} // namespace LifecyclePolicyPreviewStatusMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
