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
  enum class ResourceScanStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    COMPLETE,
    EXPIRED
  };

namespace ResourceScanStatusMapper
{
AWS_CLOUDFORMATION_API ResourceScanStatus GetResourceScanStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForResourceScanStatus(ResourceScanStatus value);
} // namespace ResourceScanStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
