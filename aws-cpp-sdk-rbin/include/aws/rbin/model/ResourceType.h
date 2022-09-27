/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    EBS_SNAPSHOT,
    EC2_IMAGE
  };

namespace ResourceTypeMapper
{
AWS_RECYCLEBIN_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace RecycleBin
} // namespace Aws
