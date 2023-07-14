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
  enum class EndpointStatus
  {
    NOT_SET,
    OutOfService,
    Creating,
    Updating,
    SystemUpdating,
    RollingBack,
    InService,
    Deleting,
    Failed
  };

namespace EndpointStatusMapper
{
AWS_SAGEMAKER_API EndpointStatus GetEndpointStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEndpointStatus(EndpointStatus value);
} // namespace EndpointStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
