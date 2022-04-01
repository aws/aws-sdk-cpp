/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class ResourceSignalStatus
  {
    NOT_SET,
    SUCCESS,
    FAILURE
  };

namespace ResourceSignalStatusMapper
{
AWS_CLOUDFORMATION_API ResourceSignalStatus GetResourceSignalStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForResourceSignalStatus(ResourceSignalStatus value);
} // namespace ResourceSignalStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
