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
  enum class RStudioServerProUserGroup
  {
    NOT_SET,
    R_STUDIO_ADMIN,
    R_STUDIO_USER
  };

namespace RStudioServerProUserGroupMapper
{
AWS_SAGEMAKER_API RStudioServerProUserGroup GetRStudioServerProUserGroupForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRStudioServerProUserGroup(RStudioServerProUserGroup value);
} // namespace RStudioServerProUserGroupMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
