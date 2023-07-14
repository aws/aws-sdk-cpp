/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class ResourceNotFoundExceptionReason
  {
    NOT_SET,
    SNAPSHOT_NOT_FOUND,
    DEPENDENCY_RESOURCE_NOT_FOUND
  };

namespace ResourceNotFoundExceptionReasonMapper
{
AWS_EBS_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
} // namespace ResourceNotFoundExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
