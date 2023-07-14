/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class UserProfileStatus
  {
    NOT_SET,
    Deleting,
    Failed,
    InService,
    Pending,
    Updating,
    Update_Failed,
    Delete_Failed
  };

namespace UserProfileStatusMapper
{
AWS_SAGEMAKER_API UserProfileStatus GetUserProfileStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForUserProfileStatus(UserProfileStatus value);
} // namespace UserProfileStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
