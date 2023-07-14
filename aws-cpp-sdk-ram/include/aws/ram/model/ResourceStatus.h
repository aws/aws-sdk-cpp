/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceStatus
  {
    NOT_SET,
    AVAILABLE,
    ZONAL_RESOURCE_INACCESSIBLE,
    LIMIT_EXCEEDED,
    UNAVAILABLE,
    PENDING
  };

namespace ResourceStatusMapper
{
AWS_RAM_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceStatus(ResourceStatus value);
} // namespace ResourceStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
